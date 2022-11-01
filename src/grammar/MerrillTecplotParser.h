
// Generated from grammar/MerrillTecplot.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  MerrillTecplotParser : public antlr4::Parser {
public:
  enum {
    TITLE = 1, VARIABLES = 2, ZONE = 3, T = 4, N = 5, E = 6, F = 7, FEBLOCK = 8, 
    ET = 9, TETRAHEDRON = 10, VARLOCATION = 11, CELLCENTERED = 12, VARSHARELIST = 13, 
    CONNECTIVITYSHAREZONE = 14, EQUALS = 15, DBLQUOTE = 16, COMMA = 17, 
    OPAREN = 18, CPAREN = 19, OSQUARE = 20, CSQUARE = 21, DECIMAL = 22, 
    NEGATIVE = 23, POSITIVE = 24, StringLiteral = 25, UnterminatedStringLiteral = 26, 
    Integer = 27, Float = 28, WhiteSpace = 29
  };

  enum {
    RuleDocument = 0, RuleTitle = 1, RuleVariables = 2, RuleZone_title = 3, 
    RuleZone_nvert = 4, RuleZone_nelem = 5, RuleZone_fe = 6, RuleZone_et = 7, 
    RuleZone_varlocation_indices = 8, RuleZone_varlocation = 9, RuleZone_varshare_indices_range = 10, 
    RuleZone_varshare_indices_index = 11, RuleZone_varshare_indices = 12, 
    RuleZone_varshare_indices_list = 13, RuleZone_varshare = 14, RuleZone_connectivity_share_zone = 15, 
    RuleZone_component = 16, RuleZone = 17, RuleZone_float_block = 18, RuleZone_integer_block = 19
  };

  explicit MerrillTecplotParser(antlr4::TokenStream *input);

  MerrillTecplotParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~MerrillTecplotParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class DocumentContext;
  class TitleContext;
  class VariablesContext;
  class Zone_titleContext;
  class Zone_nvertContext;
  class Zone_nelemContext;
  class Zone_feContext;
  class Zone_etContext;
  class Zone_varlocation_indicesContext;
  class Zone_varlocationContext;
  class Zone_varshare_indices_rangeContext;
  class Zone_varshare_indices_indexContext;
  class Zone_varshare_indicesContext;
  class Zone_varshare_indices_listContext;
  class Zone_varshareContext;
  class Zone_connectivity_share_zoneContext;
  class Zone_componentContext;
  class ZoneContext;
  class Zone_float_blockContext;
  class Zone_integer_blockContext; 

  class  DocumentContext : public antlr4::ParserRuleContext {
  public:
    DocumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TitleContext *title();
    VariablesContext *variables();
    std::vector<ZoneContext *> zone();
    ZoneContext* zone(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DocumentContext* document();

  class  TitleContext : public antlr4::ParserRuleContext {
  public:
    TitleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TITLE();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *StringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TitleContext* title();

  class  VariablesContext : public antlr4::ParserRuleContext {
  public:
    VariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLES();
    antlr4::tree::TerminalNode *EQUALS();
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariablesContext* variables();

  class  Zone_titleContext : public antlr4::ParserRuleContext {
  public:
    Zone_titleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *StringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_titleContext* zone_title();

  class  Zone_nvertContext : public antlr4::ParserRuleContext {
  public:
    Zone_nvertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *N();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *Integer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_nvertContext* zone_nvert();

  class  Zone_nelemContext : public antlr4::ParserRuleContext {
  public:
    Zone_nelemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *E();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *Integer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_nelemContext* zone_nelem();

  class  Zone_feContext : public antlr4::ParserRuleContext {
  public:
    Zone_feContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *F();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *FEBLOCK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_feContext* zone_fe();

  class  Zone_etContext : public antlr4::ParserRuleContext {
  public:
    Zone_etContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ET();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *TETRAHEDRON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_etContext* zone_et();

  class  Zone_varlocation_indicesContext : public antlr4::ParserRuleContext {
  public:
    Zone_varlocation_indicesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Integer();
    antlr4::tree::TerminalNode* Integer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_varlocation_indicesContext* zone_varlocation_indices();

  class  Zone_varlocationContext : public antlr4::ParserRuleContext {
  public:
    Zone_varlocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARLOCATION();
    std::vector<antlr4::tree::TerminalNode *> EQUALS();
    antlr4::tree::TerminalNode* EQUALS(size_t i);
    antlr4::tree::TerminalNode *OPAREN();
    antlr4::tree::TerminalNode *OSQUARE();
    Zone_varlocation_indicesContext *zone_varlocation_indices();
    antlr4::tree::TerminalNode *CSQUARE();
    antlr4::tree::TerminalNode *CELLCENTERED();
    antlr4::tree::TerminalNode *CPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_varlocationContext* zone_varlocation();

  class  Zone_varshare_indices_rangeContext : public antlr4::ParserRuleContext {
  public:
    Zone_varshare_indices_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Integer();
    antlr4::tree::TerminalNode* Integer(size_t i);
    antlr4::tree::TerminalNode *NEGATIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_varshare_indices_rangeContext* zone_varshare_indices_range();

  class  Zone_varshare_indices_indexContext : public antlr4::ParserRuleContext {
  public:
    Zone_varshare_indices_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_varshare_indices_indexContext* zone_varshare_indices_index();

  class  Zone_varshare_indicesContext : public antlr4::ParserRuleContext {
  public:
    Zone_varshare_indicesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Zone_varshare_indices_rangeContext *zone_varshare_indices_range();
    Zone_varshare_indices_indexContext *zone_varshare_indices_index();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_varshare_indicesContext* zone_varshare_indices();

  class  Zone_varshare_indices_listContext : public antlr4::ParserRuleContext {
  public:
    Zone_varshare_indices_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Zone_varshare_indicesContext *> zone_varshare_indices();
    Zone_varshare_indicesContext* zone_varshare_indices(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_varshare_indices_listContext* zone_varshare_indices_list();

  class  Zone_varshareContext : public antlr4::ParserRuleContext {
  public:
    Zone_varshareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARSHARELIST();
    std::vector<antlr4::tree::TerminalNode *> EQUALS();
    antlr4::tree::TerminalNode* EQUALS(size_t i);
    antlr4::tree::TerminalNode *OPAREN();
    antlr4::tree::TerminalNode *OSQUARE();
    Zone_varshare_indices_listContext *zone_varshare_indices_list();
    antlr4::tree::TerminalNode *CSQUARE();
    antlr4::tree::TerminalNode *Integer();
    antlr4::tree::TerminalNode *CPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_varshareContext* zone_varshare();

  class  Zone_connectivity_share_zoneContext : public antlr4::ParserRuleContext {
  public:
    Zone_connectivity_share_zoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONNECTIVITYSHAREZONE();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *Integer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_connectivity_share_zoneContext* zone_connectivity_share_zone();

  class  Zone_componentContext : public antlr4::ParserRuleContext {
  public:
    Zone_componentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Zone_titleContext *zone_title();
    Zone_nvertContext *zone_nvert();
    Zone_nelemContext *zone_nelem();
    Zone_feContext *zone_fe();
    Zone_etContext *zone_et();
    Zone_varlocationContext *zone_varlocation();
    Zone_varshareContext *zone_varshare();
    Zone_connectivity_share_zoneContext *zone_connectivity_share_zone();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_componentContext* zone_component();

  class  ZoneContext : public antlr4::ParserRuleContext {
  public:
    ZoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ZONE();
    std::vector<Zone_componentContext *> zone_component();
    Zone_componentContext* zone_component(size_t i);
    Zone_float_blockContext *zone_float_block();
    Zone_integer_blockContext *zone_integer_block();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ZoneContext* zone();

  class  Zone_float_blockContext : public antlr4::ParserRuleContext {
  public:
    Zone_float_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Float();
    antlr4::tree::TerminalNode* Float(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_float_blockContext* zone_float_block();

  class  Zone_integer_blockContext : public antlr4::ParserRuleContext {
  public:
    Zone_integer_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Integer();
    antlr4::tree::TerminalNode* Integer(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Zone_integer_blockContext* zone_integer_block();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

