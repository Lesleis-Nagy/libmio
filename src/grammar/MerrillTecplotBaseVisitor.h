
// Generated from grammar/MerrillTecplot.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "MerrillTecplotVisitor.h"


/**
 * This class provides an empty implementation of MerrillTecplotVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MerrillTecplotBaseVisitor : public MerrillTecplotVisitor {
public:

  virtual std::any visitDocument(MerrillTecplotParser::DocumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTitle(MerrillTecplotParser::TitleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariables(MerrillTecplotParser::VariablesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_title(MerrillTecplotParser::Zone_titleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_nvert(MerrillTecplotParser::Zone_nvertContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_nelem(MerrillTecplotParser::Zone_nelemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_fe(MerrillTecplotParser::Zone_feContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_et(MerrillTecplotParser::Zone_etContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_varlocation_indices(MerrillTecplotParser::Zone_varlocation_indicesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_varlocation(MerrillTecplotParser::Zone_varlocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_varshare_indices_range(MerrillTecplotParser::Zone_varshare_indices_rangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_varshare_indices_index(MerrillTecplotParser::Zone_varshare_indices_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_varshare_indices(MerrillTecplotParser::Zone_varshare_indicesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_varshare_indices_list(MerrillTecplotParser::Zone_varshare_indices_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_varshare(MerrillTecplotParser::Zone_varshareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_connectivity_share_zone(MerrillTecplotParser::Zone_connectivity_share_zoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_component(MerrillTecplotParser::Zone_componentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone(MerrillTecplotParser::ZoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_float_block(MerrillTecplotParser::Zone_float_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZone_integer_block(MerrillTecplotParser::Zone_integer_blockContext *ctx) override {
    return visitChildren(ctx);
  }


};

