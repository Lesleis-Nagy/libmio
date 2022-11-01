
// Generated from grammar/MerrillTecplot.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "MerrillTecplotParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MerrillTecplotParser.
 */
class  MerrillTecplotVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MerrillTecplotParser.
   */
    virtual std::any visitDocument(MerrillTecplotParser::DocumentContext *context) = 0;

    virtual std::any visitTitle(MerrillTecplotParser::TitleContext *context) = 0;

    virtual std::any visitVariables(MerrillTecplotParser::VariablesContext *context) = 0;

    virtual std::any visitZone_title(MerrillTecplotParser::Zone_titleContext *context) = 0;

    virtual std::any visitZone_nvert(MerrillTecplotParser::Zone_nvertContext *context) = 0;

    virtual std::any visitZone_nelem(MerrillTecplotParser::Zone_nelemContext *context) = 0;

    virtual std::any visitZone_fe(MerrillTecplotParser::Zone_feContext *context) = 0;

    virtual std::any visitZone_et(MerrillTecplotParser::Zone_etContext *context) = 0;

    virtual std::any visitZone_varlocation_indices(MerrillTecplotParser::Zone_varlocation_indicesContext *context) = 0;

    virtual std::any visitZone_varlocation(MerrillTecplotParser::Zone_varlocationContext *context) = 0;

    virtual std::any visitZone_varshare_indices_range(MerrillTecplotParser::Zone_varshare_indices_rangeContext *context) = 0;

    virtual std::any visitZone_varshare_indices_index(MerrillTecplotParser::Zone_varshare_indices_indexContext *context) = 0;

    virtual std::any visitZone_varshare_indices(MerrillTecplotParser::Zone_varshare_indicesContext *context) = 0;

    virtual std::any visitZone_varshare_indices_list(MerrillTecplotParser::Zone_varshare_indices_listContext *context) = 0;

    virtual std::any visitZone_varshare(MerrillTecplotParser::Zone_varshareContext *context) = 0;

    virtual std::any visitZone_connectivity_share_zone(MerrillTecplotParser::Zone_connectivity_share_zoneContext *context) = 0;

    virtual std::any visitZone_component(MerrillTecplotParser::Zone_componentContext *context) = 0;

    virtual std::any visitZone(MerrillTecplotParser::ZoneContext *context) = 0;

    virtual std::any visitZone_float_block(MerrillTecplotParser::Zone_float_blockContext *context) = 0;

    virtual std::any visitZone_integer_block(MerrillTecplotParser::Zone_integer_blockContext *context) = 0;


};

