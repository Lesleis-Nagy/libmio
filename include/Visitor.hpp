//
// Created by Lesleis Nagy on 26/08/2022.
//

#ifndef LIBMIO_VISITOR_HPP
#define LIBMIO_VISITOR_HPP

#include <array>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

#include "antlr4-runtime.h"

#include "MerrillTecplotBaseVisitor.h"

class Mesh {

public:

    Mesh(size_t nvert, size_t nelem) : _nvert(nvert), _nelem(nelem), _vert_counter(0), _elem_counter(0),
                                       _submesh_index_counter(0), _verts(nvert), _elems(nelem),
                                       _submesh_indices(nelem) {}

    void add_vert(double x, double y, double z) { _verts.push_back({x, y, z}); }

    const std::vector<std::array<double, 3>> &verts() const { return _verts; }

    const std::array<double, 3> &vert(size_t i) const { return _verts[i]; }

    void add_elem(size_t n0, size_t n1, size_t n2, size_t n3) { _elems.push_back({n0, n1, n2, n3}); }

    const std::vector<std::array<size_t, 4>> &elems() const { return _elems; }

    const std::array<size_t, 4> &elem(size_t i) const { return _elems[i]; }

    void add_submesh_index(size_t sidx) { _submesh_indices.push_back(sidx); }

    const std::vector<size_t> &submesh_indices() const { return _submesh_indices; }

    size_t submesh_index(size_t i) const { return _submesh_indices[i]; }

    bool is_verts_full() {
        if (_vert_counter < _nvert * 3) {
            return false;
        } else {
            return true;
        }
    }

    bool is_elems_full() {
        if (_elem_counter < _nelem * 4) {
            return false;
        } else {
            return true;
        }
    }

    bool is_submesh_indices_full() {
        if (_submesh_index_counter < _nelem) {
            return false;
        } else {
            return true;
        }
    }

    bool is_full() {
        return is_verts_full() && is_elems_full() && is_submesh_indices_full();
    }

    bool add_float_value(double value) {

    }

private:
    size_t _nvert;
    size_t _nelem;
    size_t _vert_counter;
    size_t _elem_counter;
    size_t _submesh_index_counter;
    std::vector<std::array<double, 3>> _verts;
    std::vector<std::array<size_t, 4>> _elems;
    std::vector<size_t> _submesh_indices;
};

class Zone {

public:
    Zone(const std::string &title, size_t nvert) : _title(title), _nvert(nvert), _counter(0), _field(nvert) {}

    std::string title() const { return _title; }

    const std::vector<std::array<double, 3>> &field() const { return _field; }

    bool add_value(double value) {
        if (!is_full()) {
            _field[_counter / 3][_counter % _nvert];
            ++_counter;
            return true;
        } else {
            return false;
        }
    }

    bool is_full() {
        if (_counter < _nvert * 3) {
            return false;
        } else {
            return true;
        }
    }

private:
    std::string _title;
    size_t _nvert;
    size_t _counter;

    std::vector<std::array<double, 3>> _field;
};

class FileData {

public:
    FileData(const std::string &title, size_t nzones, size_t nvert, size_t nelem) :
            _title(title), _nzones(nzones), _nvert(nvert), _nelem(nelem), _mesh(nvert, nelem) {
        _zones.push_back(Zone(nvert));
        _current_zone = &_zones.back();
    }

    const std::string &title() const { return _title; }

    size_t nzones() const { return _nzones; }

    size_t nvert() const { return _nvert; }

    size_t nelem() const { return _nelem; }

    void add_float(double v) {

    }

private:
    std::string _title;
    size_t _nzones;
    size_t _nvert;
    size_t _nelem;

    Mesh _mesh;
    std::vector<Zone> _zones;
    Zone *_current_zone;
};

class Visitor : MerrillTecplotBaseVisitor {
public:

    Visitor() = default;

    std::any visitDocument(MerrillTecplotParser::DocumentContext *ctx) {

        // Data needed to initialise file data object.
        std::string title;
        size_t nzones;
        size_t nvert;
        size_t nelem;

        title = ctx->title()->StringLiteral()->getText();
        nzones = ctx->zone().size();

        if (nzones > 0) {
            // This must be the case according to the antlr grammar.
            nvert = zone_nvert(ctx->zone()[0]);
            nelem = zone_nelem(ctx->zone()[0]);
        }

        FileData file_data(title, nzones, nvert, nelem);

        return std::move(file_data);
    }

    /*
    const std::vector<std::array<double, 3>> &verts() const { return _verts; }

    const std::vector<std::array<long, 4>> &elems() const { return _elems; }

    const std::vector<Zone> &zones() const { return _zones; }
    */

private:

    /*
    int _nverts;
    int _nelems;
    bool _first_zone;

    std::vector<std::array<double, 3>> _verts;
    std::vector<std::array<long, 4>> _elems;
    std::vector<long> _sidxs;
    std::vector<Zone> _zones;

    Zone *_current_zone;
    std::string _current_zone_title;
    int _current_zone_nverts;
    int _current_zone_nelems;
    */

    std::string zone_title(MerrillTecplotParser::ZoneContext *zone) {
        for (auto zone_component: zone->zone_component()) {
            if (zone_component->zone_title() != nullptr) {
                return zone_component->zone_title()->StringLiteral()->getText();
            }
        }
        return "";
    }

    size_t zone_nvert(MerrillTecplotParser::ZoneContext *zone) {
        for (auto zone_component: zone->zone_component()) {
            if (zone_component->zone_nvert() != nullptr) {
                return stoul(zone_component->zone_nvert()->Integer()->getText());
            }
        }
        return 0;
    }

    size_t zone_nelem(MerrillTecplotParser::ZoneContext *zone) {
        for (auto zone_component: zone->zone_component()) {
            if (zone_component->zone_nelem() != nullptr) {
                return stoul(zone_component->zone_nelem()->Integer()->getText());
            }
        }
        return 0;
    }

    /*
    void process_zone(MerrillTecplotParser::ZoneContext *zone) {

        // Create a new zone
        _zones.push_back(Zone());
        _current_zone = &_zones.back();

        for (auto zone_component: zone->zone_component()) {
            process_zone_component(zone_component);
        }

        if (zone->zone_float_block() != nullptr) {
            process_float_block(zone->zone_float_block());
        }

        if (zone->zone_integer_block() != nullptr) {
            process_integer_block(zone->zone_integer_block());
        }

        if (_first_zone) {
            _first_zone = false;
        }

    }


    void process_zone_component(MerrillTecplotParser::Zone_componentContext *zone_component) {

        if (zone_component->zone_title() != nullptr) {
            _current_zone->set_title(zone_component->zone_title()->StringLiteral()->getText());
        } else if (zone_component->zone_nvert() != nullptr) {
            _current_zone->set_nverts(stol(zone_component->zone_nvert()->Integer()->getText()));
        } else if (zone_component->zone_nelem() != nullptr) {
            _current_zone->set_nelems(stol(zone_component->zone_nelem()->Integer()->getText()));
        } else {}

    }


    void process_float_block(MerrillTecplotParser::Zone_float_blockContext *ctx) {

        if (_first_zone) {

            _verts.resize(_current_zone->nverts());
            _current_zone->field().resize(_current_zone->nverts());

            size_t i = 0;
            size_t ci = 0;

            for (auto str_val: ctx->Float()) {
                double value = stod(str_val->getText());
                ci = i / _current_zone->nverts();
                switch (ci) {
                    case (0):
                        _verts[i % _current_zone->nverts()][0] = value;
                        break;
                    case (1):
                        _verts[i % _current_zone->nverts()][1] = value;
                        break;
                    case (2):
                        _verts[i % _current_zone->nverts()][2] = value;
                        break;
                    case (3):
                        _current_zone->field()[i % _current_zone->nverts()][0] = value;
                        break;
                    case (4):
                        _current_zone->field()[i % _current_zone->nverts()][1] = value;
                        break;
                    case (5):
                        _current_zone->field()[i % _current_zone->nverts()][2] = value;
                        break;
                }

                i++;

            }

        } else {

            _current_zone->field().resize(_current_zone->nverts());

            size_t i = 0;
            size_t ci = 0;

            for (auto str_val: ctx->Float()) {
                double value = stod(str_val->getText());
                ci = i / _current_zone->nverts();
                switch (ci) {
                    case (0):
                        _current_zone->field()[i % _current_zone->nverts()][0] = value;
                        break;
                    case (1):
                        _current_zone->field()[i % _current_zone->nverts()][1] = value;
                        break;
                    case (2):
                        _current_zone->field()[i % _current_zone->nverts()][2] = value;
                        break;
                }

                i++;

            }

        }

    }


    void process_integer_block(MerrillTecplotParser::Zone_integer_blockContext *ctx) {
    }
     */

};

#endif // LIBMIO_VISITOR_HPP
