//
// Created by Lesleis Nagy on 20/03/2023.
//

#pragma once

#include <iostream>
#include <memory>
#include <utility>

#include <antlr4-runtime.h>
#include <TecplotLexer.h>
#include <TecplotParser.h>
#include <TecplotBaseVisitor.h>

#include "utilities.hpp"

enum TecplotVariableType {
    NODAL,
    CELLCENTERED
};

class TecplotVariable {
public:

    TecplotVariable(std::string name, int nvert, int nelem):
            _name(std::move(name)), _type(NODAL), _is_used(true), _nvert(nvert), _nelem(nelem)
    {}

    [[nodiscard]] const std::string &name() const {
        return _name;
    }

    void set_type(TecplotVariableType new_type) {
        _type = new_type;
    }

    [[nodiscard]] TecplotVariableType type() const {
        return _type;
    }

    [[nodiscard]] const std::vector<double> & values() const {
        return _values;
    }

    [[nodiscard]] bool is_full() const;

private:

    // The name of the variable.
    std::string _name;

    // The type of the variable, i.e. whether it is nodal or cell-centered.
    TecplotVariableType _type;

    // A flag indicating that the variable is used.
    bool _is_used;

    // The variable values.
    std::vector<double> _values;

    // The number of vertices in the data.
    int _nvert;

    // The number of elements in the data.
    int _nelem;

};

class TecplotZone {
public:

    explicit TecplotZone(const std::vector<std::string> &variable_names) {
        int position = 1;
        for (const auto & name : variable_names) {
            _variables.emplace_back(TecplotVariable(name, _nvert, _nelem));
            _position_to_variable_ptr[position] = &_variables.back();
            _name_to_variable_ptr[name] = &_variables.back();
        }
    }

    void set_zone_title(const std::string &title) {
        _title = sanitise_string(title);
    }
    [[nodiscard]] const std::string & title() const {
        return _title;
    }

    void set_zone_nelem(const std::string & nelem) {
        _nelem = std::stoi(nelem);
    }

    [[nodiscard]] int nelem() const {
        return _nelem;
    }

    void set_zone_nvert(const std::string & nvert) {
        _nvert = std::stoi(nvert);
    }

    [[nodiscard]] int nvert() const {
        return _nvert;
    }

private:
    std::string _title;
    int _nelem{};
    int _nvert{};
    std::vector<TecplotVariable> _variables;
    std::unordered_map<int, TecplotVariable*> _position_to_variable_ptr;
    std::unordered_map<std::string, TecplotVariable*> _name_to_variable_ptr;
};

class TecplotFile {
public:

    void set_title(const std::string & title) {
        _title = sanitise_string(title);
    }
    [[nodiscard]] const std::string &title() const {
        return _title;
    }

    void set_variable(const std::string & variable) {
        _variables.push_back(sanitise_string(variable));
    }
    [[nodiscard]] const std::vector<std::string> & variables() const {
        return _variables;
    }

    TecplotZone *new_zone() {
        // Create a new zone with variables matching the variable names that have been parsed.
        _zones.emplace_back(TecplotZone(_variables));
        return &_zones.back();
    }

    [[nodiscard]] const std::vector<TecplotZone> & zones() const {
        return _zones;
    }

private:
    std::string _title;
    std::vector< std::string> _variables;
    std::vector<TecplotZone> _zones;
};


class TecplotVisitorImpl : public TecplotBaseVisitor {
public:

    explicit TecplotVisitorImpl(TecplotFile &raw_data) :
            TecplotBaseVisitor(), _raw_data(raw_data), _current_zone(nullptr) {

    }

    std::any visitDocument(TecplotParser::DocumentContext *ctx) override {
        if (!ctx->title()->isEmpty()) {
            _raw_data.set_title(ctx->title()->StringLiteral()->getText());
        }
        std::any result = visitChildren(ctx);
        return result;
    }

    std::any visitVariables(TecplotParser::VariablesContext *ctx) override {
        std::any result = visitChildren(ctx);
        if (!ctx->isEmpty()) {
            for (auto v : ctx->StringLiteral()) {
                _raw_data.set_variable(v->getText());
            }
        }
        return result;
    }

    std::any visitZone(TecplotParser::ZoneContext *ctx) override {
        // Whenever we visit a new zone, we create a new zone object and set the _current_zone pointer to that object.
        _current_zone = _raw_data.new_zone();

        // We continue to process the zone's information.
        std::any result = visitChildren(ctx);
        if (!ctx->isEmpty()) {
            for (auto v : ctx->zone_component()) {
                // If we find a zone component that holds the title, we set the _current_zone title.
                if ((v->zone_title() != nullptr) && !v->zone_title()->isEmpty()) {
                    if (_current_zone != nullptr) {
                        _current_zone->set_zone_title(v->zone_title()->StringLiteral()->getText());
                    }
                }
                // If we find a zone component that holds the number of elements, set the _current_zone nelem variable.
                if ((v->zone_nelem() != nullptr) && !v->zone_nelem()->isEmpty()) {
                    if (_current_zone != nullptr) {
                        _current_zone->set_zone_nelem(v->zone_nelem()->Integer()->getText());
                    }
                }
                // If we find a zone component that holds the number of vertices, set the _current_zone nvert variable.
                if ((v->zone_nvert() != nullptr) && !v->zone_nvert()->isEmpty()) {
                    if (_current_zone != nullptr) {
                        _current_zone->set_zone_nvert(v->zone_nvert()->Integer()->getText());
                    }
                }
                // If we find a zone component that holds information about the type of variable, set the _current_zone
                // variable corresponding with the position.
                if ((v->zone_varlocation()!= nullptr) && !v->zone_varlocation()->isEmpty()) {
                    if (_current_zone != nullptr) {

                    }
                }
            }
        }
        return result;
    }

private:
    TecplotFile &_raw_data;
    TecplotZone *_current_zone;
};


class TecplotParserContext {

public:

    TecplotParserContext():
        _lexer(&_antlr_stream), _tokens(&_lexer), _parser(&_tokens)
    {}

    TecplotFile parse(const std::string &file_name) {
        // Read file in to string.
        std::ifstream fin(file_name);

        // Pass the string through to the other components.
        if (fin) {
            _antlr_stream.load(fin);
            _lexer.reset();
            _lexer.setInputStream(&_antlr_stream);
            _tokens.setTokenSource(&_lexer);
            _parser.reset();

            TecplotParser::DocumentContext *tree = _parser.document();

            TecplotFile raw_file_data;
            TecplotVisitorImpl _visitor(raw_file_data);
            _visitor.visitDocument(tree);

            return raw_file_data;
        } else {
            throw std::runtime_error("Input file could not be found.");
        }
    }

private:

    std::fstream _stream;

    antlr4::ANTLRInputStream _antlr_stream;

    TecplotLexer _lexer;

    antlr4::CommonTokenStream _tokens;

    TecplotParser _parser;

};