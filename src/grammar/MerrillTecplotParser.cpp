
// Generated from grammar/MerrillTecplot.g4 by ANTLR 4.10.1


#include "MerrillTecplotVisitor.h"

#include "MerrillTecplotParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MerrillTecplotParserStaticData final {
  MerrillTecplotParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MerrillTecplotParserStaticData(const MerrillTecplotParserStaticData&) = delete;
  MerrillTecplotParserStaticData(MerrillTecplotParserStaticData&&) = delete;
  MerrillTecplotParserStaticData& operator=(const MerrillTecplotParserStaticData&) = delete;
  MerrillTecplotParserStaticData& operator=(MerrillTecplotParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag merrilltecplotParserOnceFlag;
MerrillTecplotParserStaticData *merrilltecplotParserStaticData = nullptr;

void merrilltecplotParserInitialize() {
  assert(merrilltecplotParserStaticData == nullptr);
  auto staticData = std::make_unique<MerrillTecplotParserStaticData>(
    std::vector<std::string>{
      "document", "title", "variables", "zone_title", "zone_nvert", "zone_nelem", 
      "zone_fe", "zone_et", "zone_varlocation_indices", "zone_varlocation", 
      "zone_varshare_indices_range", "zone_varshare_indices_index", "zone_varshare_indices", 
      "zone_varshare_indices_list", "zone_varshare", "zone_connectivity_share_zone", 
      "zone_component", "zone", "zone_float_block", "zone_integer_block"
    },
    std::vector<std::string>{
      "", "'TITLE'", "'VARIABLES'", "'ZONE'", "'T'", "'N'", "'E'", "'F'", 
      "'FEBLOCK'", "'ET'", "'TETRAHEDRON'", "'VARLOCATION'", "'CELLCENTERED'", 
      "'VARSHARELIST'", "'CONNECTIVITYSHAREZONE'", "'='", "'\"'", "','", 
      "'('", "')'", "'['", "']'", "'.'", "'-'", "'+'"
    },
    std::vector<std::string>{
      "", "TITLE", "VARIABLES", "ZONE", "T", "N", "E", "F", "FEBLOCK", "ET", 
      "TETRAHEDRON", "VARLOCATION", "CELLCENTERED", "VARSHARELIST", "CONNECTIVITYSHAREZONE", 
      "EQUALS", "DBLQUOTE", "COMMA", "OPAREN", "CPAREN", "OSQUARE", "CSQUARE", 
      "DECIMAL", "NEGATIVE", "POSITIVE", "StringLiteral", "UnterminatedStringLiteral", 
      "Integer", "Float", "WhiteSpace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,29,169,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,0,1,0,
  	5,0,45,8,0,10,0,12,0,48,9,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,5,2,59,
  	8,2,10,2,12,2,62,9,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,5,8,87,8,8,10,8,12,8,90,9,
  	8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,
  	11,1,12,1,12,3,12,110,8,12,1,13,1,13,1,13,5,13,115,8,13,10,13,12,13,118,
  	9,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,
  	1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,142,8,16,1,17,1,17,
  	1,17,3,17,147,8,17,1,17,5,17,150,8,17,10,17,12,17,153,9,17,1,17,1,17,
  	3,17,157,8,17,1,18,4,18,160,8,18,11,18,12,18,161,1,19,4,19,165,8,19,11,
  	19,12,19,166,1,19,0,0,20,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,36,38,0,0,165,0,40,1,0,0,0,2,49,1,0,0,0,4,53,1,0,0,0,6,63,1,0,0,0,
  	8,67,1,0,0,0,10,71,1,0,0,0,12,75,1,0,0,0,14,79,1,0,0,0,16,83,1,0,0,0,
  	18,91,1,0,0,0,20,101,1,0,0,0,22,105,1,0,0,0,24,109,1,0,0,0,26,111,1,0,
  	0,0,28,119,1,0,0,0,30,129,1,0,0,0,32,141,1,0,0,0,34,143,1,0,0,0,36,159,
  	1,0,0,0,38,164,1,0,0,0,40,41,3,2,1,0,41,42,3,4,2,0,42,46,3,34,17,0,43,
  	45,3,34,17,0,44,43,1,0,0,0,45,48,1,0,0,0,46,44,1,0,0,0,46,47,1,0,0,0,
  	47,1,1,0,0,0,48,46,1,0,0,0,49,50,5,1,0,0,50,51,5,15,0,0,51,52,5,25,0,
  	0,52,3,1,0,0,0,53,54,5,2,0,0,54,55,5,15,0,0,55,60,5,25,0,0,56,57,5,17,
  	0,0,57,59,5,25,0,0,58,56,1,0,0,0,59,62,1,0,0,0,60,58,1,0,0,0,60,61,1,
  	0,0,0,61,5,1,0,0,0,62,60,1,0,0,0,63,64,5,4,0,0,64,65,5,15,0,0,65,66,5,
  	25,0,0,66,7,1,0,0,0,67,68,5,5,0,0,68,69,5,15,0,0,69,70,5,27,0,0,70,9,
  	1,0,0,0,71,72,5,6,0,0,72,73,5,15,0,0,73,74,5,27,0,0,74,11,1,0,0,0,75,
  	76,5,7,0,0,76,77,5,15,0,0,77,78,5,8,0,0,78,13,1,0,0,0,79,80,5,9,0,0,80,
  	81,5,15,0,0,81,82,5,10,0,0,82,15,1,0,0,0,83,88,5,27,0,0,84,85,5,17,0,
  	0,85,87,5,27,0,0,86,84,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,
  	0,0,89,17,1,0,0,0,90,88,1,0,0,0,91,92,5,11,0,0,92,93,5,15,0,0,93,94,5,
  	18,0,0,94,95,5,20,0,0,95,96,3,16,8,0,96,97,5,21,0,0,97,98,5,15,0,0,98,
  	99,5,12,0,0,99,100,5,19,0,0,100,19,1,0,0,0,101,102,5,27,0,0,102,103,5,
  	23,0,0,103,104,5,27,0,0,104,21,1,0,0,0,105,106,5,27,0,0,106,23,1,0,0,
  	0,107,110,3,20,10,0,108,110,3,22,11,0,109,107,1,0,0,0,109,108,1,0,0,0,
  	110,25,1,0,0,0,111,116,3,24,12,0,112,113,5,17,0,0,113,115,3,24,12,0,114,
  	112,1,0,0,0,115,118,1,0,0,0,116,114,1,0,0,0,116,117,1,0,0,0,117,27,1,
  	0,0,0,118,116,1,0,0,0,119,120,5,13,0,0,120,121,5,15,0,0,121,122,5,18,
  	0,0,122,123,5,20,0,0,123,124,3,26,13,0,124,125,5,21,0,0,125,126,5,15,
  	0,0,126,127,5,27,0,0,127,128,5,19,0,0,128,29,1,0,0,0,129,130,5,14,0,0,
  	130,131,5,15,0,0,131,132,5,27,0,0,132,31,1,0,0,0,133,142,3,6,3,0,134,
  	142,3,8,4,0,135,142,3,10,5,0,136,142,3,12,6,0,137,142,3,14,7,0,138,142,
  	3,18,9,0,139,142,3,28,14,0,140,142,3,30,15,0,141,133,1,0,0,0,141,134,
  	1,0,0,0,141,135,1,0,0,0,141,136,1,0,0,0,141,137,1,0,0,0,141,138,1,0,0,
  	0,141,139,1,0,0,0,141,140,1,0,0,0,142,33,1,0,0,0,143,144,5,3,0,0,144,
  	151,3,32,16,0,145,147,5,17,0,0,146,145,1,0,0,0,146,147,1,0,0,0,147,148,
  	1,0,0,0,148,150,3,32,16,0,149,146,1,0,0,0,150,153,1,0,0,0,151,149,1,0,
  	0,0,151,152,1,0,0,0,152,154,1,0,0,0,153,151,1,0,0,0,154,156,3,36,18,0,
  	155,157,3,38,19,0,156,155,1,0,0,0,156,157,1,0,0,0,157,35,1,0,0,0,158,
  	160,5,28,0,0,159,158,1,0,0,0,160,161,1,0,0,0,161,159,1,0,0,0,161,162,
  	1,0,0,0,162,37,1,0,0,0,163,165,5,27,0,0,164,163,1,0,0,0,165,166,1,0,0,
  	0,166,164,1,0,0,0,166,167,1,0,0,0,167,39,1,0,0,0,11,46,60,88,109,116,
  	141,146,151,156,161,166
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  merrilltecplotParserStaticData = staticData.release();
}

}

MerrillTecplotParser::MerrillTecplotParser(TokenStream *input) : MerrillTecplotParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MerrillTecplotParser::MerrillTecplotParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MerrillTecplotParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *merrilltecplotParserStaticData->atn, merrilltecplotParserStaticData->decisionToDFA, merrilltecplotParserStaticData->sharedContextCache, options);
}

MerrillTecplotParser::~MerrillTecplotParser() {
  delete _interpreter;
}

const atn::ATN& MerrillTecplotParser::getATN() const {
  return *merrilltecplotParserStaticData->atn;
}

std::string MerrillTecplotParser::getGrammarFileName() const {
  return "MerrillTecplot.g4";
}

const std::vector<std::string>& MerrillTecplotParser::getRuleNames() const {
  return merrilltecplotParserStaticData->ruleNames;
}

const dfa::Vocabulary& MerrillTecplotParser::getVocabulary() const {
  return merrilltecplotParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MerrillTecplotParser::getSerializedATN() const {
  return merrilltecplotParserStaticData->serializedATN;
}


//----------------- DocumentContext ------------------------------------------------------------------

MerrillTecplotParser::DocumentContext::DocumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MerrillTecplotParser::TitleContext* MerrillTecplotParser::DocumentContext::title() {
  return getRuleContext<MerrillTecplotParser::TitleContext>(0);
}

MerrillTecplotParser::VariablesContext* MerrillTecplotParser::DocumentContext::variables() {
  return getRuleContext<MerrillTecplotParser::VariablesContext>(0);
}

std::vector<MerrillTecplotParser::ZoneContext *> MerrillTecplotParser::DocumentContext::zone() {
  return getRuleContexts<MerrillTecplotParser::ZoneContext>();
}

MerrillTecplotParser::ZoneContext* MerrillTecplotParser::DocumentContext::zone(size_t i) {
  return getRuleContext<MerrillTecplotParser::ZoneContext>(i);
}


size_t MerrillTecplotParser::DocumentContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleDocument;
}


std::any MerrillTecplotParser::DocumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitDocument(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::DocumentContext* MerrillTecplotParser::document() {
  DocumentContext *_localctx = _tracker.createInstance<DocumentContext>(_ctx, getState());
  enterRule(_localctx, 0, MerrillTecplotParser::RuleDocument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    title();
    setState(41);
    variables();
    setState(42);
    zone();
    setState(46);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MerrillTecplotParser::ZONE) {
      setState(43);
      zone();
      setState(48);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TitleContext ------------------------------------------------------------------

MerrillTecplotParser::TitleContext::TitleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::TitleContext::TITLE() {
  return getToken(MerrillTecplotParser::TITLE, 0);
}

tree::TerminalNode* MerrillTecplotParser::TitleContext::EQUALS() {
  return getToken(MerrillTecplotParser::EQUALS, 0);
}

tree::TerminalNode* MerrillTecplotParser::TitleContext::StringLiteral() {
  return getToken(MerrillTecplotParser::StringLiteral, 0);
}


size_t MerrillTecplotParser::TitleContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleTitle;
}


std::any MerrillTecplotParser::TitleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitTitle(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::TitleContext* MerrillTecplotParser::title() {
  TitleContext *_localctx = _tracker.createInstance<TitleContext>(_ctx, getState());
  enterRule(_localctx, 2, MerrillTecplotParser::RuleTitle);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(MerrillTecplotParser::TITLE);
    setState(50);
    match(MerrillTecplotParser::EQUALS);
    setState(51);
    match(MerrillTecplotParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariablesContext ------------------------------------------------------------------

MerrillTecplotParser::VariablesContext::VariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::VariablesContext::VARIABLES() {
  return getToken(MerrillTecplotParser::VARIABLES, 0);
}

tree::TerminalNode* MerrillTecplotParser::VariablesContext::EQUALS() {
  return getToken(MerrillTecplotParser::EQUALS, 0);
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::VariablesContext::StringLiteral() {
  return getTokens(MerrillTecplotParser::StringLiteral);
}

tree::TerminalNode* MerrillTecplotParser::VariablesContext::StringLiteral(size_t i) {
  return getToken(MerrillTecplotParser::StringLiteral, i);
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::VariablesContext::COMMA() {
  return getTokens(MerrillTecplotParser::COMMA);
}

tree::TerminalNode* MerrillTecplotParser::VariablesContext::COMMA(size_t i) {
  return getToken(MerrillTecplotParser::COMMA, i);
}


size_t MerrillTecplotParser::VariablesContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleVariables;
}


std::any MerrillTecplotParser::VariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitVariables(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::VariablesContext* MerrillTecplotParser::variables() {
  VariablesContext *_localctx = _tracker.createInstance<VariablesContext>(_ctx, getState());
  enterRule(_localctx, 4, MerrillTecplotParser::RuleVariables);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(MerrillTecplotParser::VARIABLES);
    setState(54);
    match(MerrillTecplotParser::EQUALS);
    setState(55);
    match(MerrillTecplotParser::StringLiteral);
    setState(60);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MerrillTecplotParser::COMMA) {
      setState(56);
      match(MerrillTecplotParser::COMMA);
      setState(57);
      match(MerrillTecplotParser::StringLiteral);
      setState(62);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_titleContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_titleContext::Zone_titleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::Zone_titleContext::T() {
  return getToken(MerrillTecplotParser::T, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_titleContext::EQUALS() {
  return getToken(MerrillTecplotParser::EQUALS, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_titleContext::StringLiteral() {
  return getToken(MerrillTecplotParser::StringLiteral, 0);
}


size_t MerrillTecplotParser::Zone_titleContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_title;
}


std::any MerrillTecplotParser::Zone_titleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_title(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_titleContext* MerrillTecplotParser::zone_title() {
  Zone_titleContext *_localctx = _tracker.createInstance<Zone_titleContext>(_ctx, getState());
  enterRule(_localctx, 6, MerrillTecplotParser::RuleZone_title);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(MerrillTecplotParser::T);
    setState(64);
    match(MerrillTecplotParser::EQUALS);
    setState(65);
    match(MerrillTecplotParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_nvertContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_nvertContext::Zone_nvertContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::Zone_nvertContext::N() {
  return getToken(MerrillTecplotParser::N, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_nvertContext::EQUALS() {
  return getToken(MerrillTecplotParser::EQUALS, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_nvertContext::Integer() {
  return getToken(MerrillTecplotParser::Integer, 0);
}


size_t MerrillTecplotParser::Zone_nvertContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_nvert;
}


std::any MerrillTecplotParser::Zone_nvertContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_nvert(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_nvertContext* MerrillTecplotParser::zone_nvert() {
  Zone_nvertContext *_localctx = _tracker.createInstance<Zone_nvertContext>(_ctx, getState());
  enterRule(_localctx, 8, MerrillTecplotParser::RuleZone_nvert);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(MerrillTecplotParser::N);
    setState(68);
    match(MerrillTecplotParser::EQUALS);
    setState(69);
    match(MerrillTecplotParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_nelemContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_nelemContext::Zone_nelemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::Zone_nelemContext::E() {
  return getToken(MerrillTecplotParser::E, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_nelemContext::EQUALS() {
  return getToken(MerrillTecplotParser::EQUALS, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_nelemContext::Integer() {
  return getToken(MerrillTecplotParser::Integer, 0);
}


size_t MerrillTecplotParser::Zone_nelemContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_nelem;
}


std::any MerrillTecplotParser::Zone_nelemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_nelem(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_nelemContext* MerrillTecplotParser::zone_nelem() {
  Zone_nelemContext *_localctx = _tracker.createInstance<Zone_nelemContext>(_ctx, getState());
  enterRule(_localctx, 10, MerrillTecplotParser::RuleZone_nelem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(MerrillTecplotParser::E);
    setState(72);
    match(MerrillTecplotParser::EQUALS);
    setState(73);
    match(MerrillTecplotParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_feContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_feContext::Zone_feContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::Zone_feContext::F() {
  return getToken(MerrillTecplotParser::F, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_feContext::EQUALS() {
  return getToken(MerrillTecplotParser::EQUALS, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_feContext::FEBLOCK() {
  return getToken(MerrillTecplotParser::FEBLOCK, 0);
}


size_t MerrillTecplotParser::Zone_feContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_fe;
}


std::any MerrillTecplotParser::Zone_feContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_fe(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_feContext* MerrillTecplotParser::zone_fe() {
  Zone_feContext *_localctx = _tracker.createInstance<Zone_feContext>(_ctx, getState());
  enterRule(_localctx, 12, MerrillTecplotParser::RuleZone_fe);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(MerrillTecplotParser::F);
    setState(76);
    match(MerrillTecplotParser::EQUALS);
    setState(77);
    match(MerrillTecplotParser::FEBLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_etContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_etContext::Zone_etContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::Zone_etContext::ET() {
  return getToken(MerrillTecplotParser::ET, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_etContext::EQUALS() {
  return getToken(MerrillTecplotParser::EQUALS, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_etContext::TETRAHEDRON() {
  return getToken(MerrillTecplotParser::TETRAHEDRON, 0);
}


size_t MerrillTecplotParser::Zone_etContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_et;
}


std::any MerrillTecplotParser::Zone_etContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_et(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_etContext* MerrillTecplotParser::zone_et() {
  Zone_etContext *_localctx = _tracker.createInstance<Zone_etContext>(_ctx, getState());
  enterRule(_localctx, 14, MerrillTecplotParser::RuleZone_et);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(MerrillTecplotParser::ET);
    setState(80);
    match(MerrillTecplotParser::EQUALS);
    setState(81);
    match(MerrillTecplotParser::TETRAHEDRON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_varlocation_indicesContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_varlocation_indicesContext::Zone_varlocation_indicesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::Zone_varlocation_indicesContext::Integer() {
  return getTokens(MerrillTecplotParser::Integer);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varlocation_indicesContext::Integer(size_t i) {
  return getToken(MerrillTecplotParser::Integer, i);
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::Zone_varlocation_indicesContext::COMMA() {
  return getTokens(MerrillTecplotParser::COMMA);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varlocation_indicesContext::COMMA(size_t i) {
  return getToken(MerrillTecplotParser::COMMA, i);
}


size_t MerrillTecplotParser::Zone_varlocation_indicesContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_varlocation_indices;
}


std::any MerrillTecplotParser::Zone_varlocation_indicesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_varlocation_indices(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_varlocation_indicesContext* MerrillTecplotParser::zone_varlocation_indices() {
  Zone_varlocation_indicesContext *_localctx = _tracker.createInstance<Zone_varlocation_indicesContext>(_ctx, getState());
  enterRule(_localctx, 16, MerrillTecplotParser::RuleZone_varlocation_indices);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(MerrillTecplotParser::Integer);
    setState(88);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MerrillTecplotParser::COMMA) {
      setState(84);
      match(MerrillTecplotParser::COMMA);
      setState(85);
      match(MerrillTecplotParser::Integer);
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_varlocationContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_varlocationContext::Zone_varlocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::Zone_varlocationContext::VARLOCATION() {
  return getToken(MerrillTecplotParser::VARLOCATION, 0);
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::Zone_varlocationContext::EQUALS() {
  return getTokens(MerrillTecplotParser::EQUALS);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varlocationContext::EQUALS(size_t i) {
  return getToken(MerrillTecplotParser::EQUALS, i);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varlocationContext::OPAREN() {
  return getToken(MerrillTecplotParser::OPAREN, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varlocationContext::OSQUARE() {
  return getToken(MerrillTecplotParser::OSQUARE, 0);
}

MerrillTecplotParser::Zone_varlocation_indicesContext* MerrillTecplotParser::Zone_varlocationContext::zone_varlocation_indices() {
  return getRuleContext<MerrillTecplotParser::Zone_varlocation_indicesContext>(0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varlocationContext::CSQUARE() {
  return getToken(MerrillTecplotParser::CSQUARE, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varlocationContext::CELLCENTERED() {
  return getToken(MerrillTecplotParser::CELLCENTERED, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varlocationContext::CPAREN() {
  return getToken(MerrillTecplotParser::CPAREN, 0);
}


size_t MerrillTecplotParser::Zone_varlocationContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_varlocation;
}


std::any MerrillTecplotParser::Zone_varlocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_varlocation(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_varlocationContext* MerrillTecplotParser::zone_varlocation() {
  Zone_varlocationContext *_localctx = _tracker.createInstance<Zone_varlocationContext>(_ctx, getState());
  enterRule(_localctx, 18, MerrillTecplotParser::RuleZone_varlocation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(MerrillTecplotParser::VARLOCATION);
    setState(92);
    match(MerrillTecplotParser::EQUALS);
    setState(93);
    match(MerrillTecplotParser::OPAREN);
    setState(94);
    match(MerrillTecplotParser::OSQUARE);
    setState(95);
    zone_varlocation_indices();
    setState(96);
    match(MerrillTecplotParser::CSQUARE);
    setState(97);
    match(MerrillTecplotParser::EQUALS);
    setState(98);
    match(MerrillTecplotParser::CELLCENTERED);
    setState(99);
    match(MerrillTecplotParser::CPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_varshare_indices_rangeContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_varshare_indices_rangeContext::Zone_varshare_indices_rangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::Zone_varshare_indices_rangeContext::Integer() {
  return getTokens(MerrillTecplotParser::Integer);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshare_indices_rangeContext::Integer(size_t i) {
  return getToken(MerrillTecplotParser::Integer, i);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshare_indices_rangeContext::NEGATIVE() {
  return getToken(MerrillTecplotParser::NEGATIVE, 0);
}


size_t MerrillTecplotParser::Zone_varshare_indices_rangeContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_varshare_indices_range;
}


std::any MerrillTecplotParser::Zone_varshare_indices_rangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_varshare_indices_range(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_varshare_indices_rangeContext* MerrillTecplotParser::zone_varshare_indices_range() {
  Zone_varshare_indices_rangeContext *_localctx = _tracker.createInstance<Zone_varshare_indices_rangeContext>(_ctx, getState());
  enterRule(_localctx, 20, MerrillTecplotParser::RuleZone_varshare_indices_range);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(MerrillTecplotParser::Integer);
    setState(102);
    match(MerrillTecplotParser::NEGATIVE);
    setState(103);
    match(MerrillTecplotParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_varshare_indices_indexContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_varshare_indices_indexContext::Zone_varshare_indices_indexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshare_indices_indexContext::Integer() {
  return getToken(MerrillTecplotParser::Integer, 0);
}


size_t MerrillTecplotParser::Zone_varshare_indices_indexContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_varshare_indices_index;
}


std::any MerrillTecplotParser::Zone_varshare_indices_indexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_varshare_indices_index(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_varshare_indices_indexContext* MerrillTecplotParser::zone_varshare_indices_index() {
  Zone_varshare_indices_indexContext *_localctx = _tracker.createInstance<Zone_varshare_indices_indexContext>(_ctx, getState());
  enterRule(_localctx, 22, MerrillTecplotParser::RuleZone_varshare_indices_index);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(MerrillTecplotParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_varshare_indicesContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_varshare_indicesContext::Zone_varshare_indicesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MerrillTecplotParser::Zone_varshare_indices_rangeContext* MerrillTecplotParser::Zone_varshare_indicesContext::zone_varshare_indices_range() {
  return getRuleContext<MerrillTecplotParser::Zone_varshare_indices_rangeContext>(0);
}

MerrillTecplotParser::Zone_varshare_indices_indexContext* MerrillTecplotParser::Zone_varshare_indicesContext::zone_varshare_indices_index() {
  return getRuleContext<MerrillTecplotParser::Zone_varshare_indices_indexContext>(0);
}


size_t MerrillTecplotParser::Zone_varshare_indicesContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_varshare_indices;
}


std::any MerrillTecplotParser::Zone_varshare_indicesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_varshare_indices(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_varshare_indicesContext* MerrillTecplotParser::zone_varshare_indices() {
  Zone_varshare_indicesContext *_localctx = _tracker.createInstance<Zone_varshare_indicesContext>(_ctx, getState());
  enterRule(_localctx, 24, MerrillTecplotParser::RuleZone_varshare_indices);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(107);
      zone_varshare_indices_range();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(108);
      zone_varshare_indices_index();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_varshare_indices_listContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_varshare_indices_listContext::Zone_varshare_indices_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MerrillTecplotParser::Zone_varshare_indicesContext *> MerrillTecplotParser::Zone_varshare_indices_listContext::zone_varshare_indices() {
  return getRuleContexts<MerrillTecplotParser::Zone_varshare_indicesContext>();
}

MerrillTecplotParser::Zone_varshare_indicesContext* MerrillTecplotParser::Zone_varshare_indices_listContext::zone_varshare_indices(size_t i) {
  return getRuleContext<MerrillTecplotParser::Zone_varshare_indicesContext>(i);
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::Zone_varshare_indices_listContext::COMMA() {
  return getTokens(MerrillTecplotParser::COMMA);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshare_indices_listContext::COMMA(size_t i) {
  return getToken(MerrillTecplotParser::COMMA, i);
}


size_t MerrillTecplotParser::Zone_varshare_indices_listContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_varshare_indices_list;
}


std::any MerrillTecplotParser::Zone_varshare_indices_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_varshare_indices_list(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_varshare_indices_listContext* MerrillTecplotParser::zone_varshare_indices_list() {
  Zone_varshare_indices_listContext *_localctx = _tracker.createInstance<Zone_varshare_indices_listContext>(_ctx, getState());
  enterRule(_localctx, 26, MerrillTecplotParser::RuleZone_varshare_indices_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    zone_varshare_indices();
    setState(116);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MerrillTecplotParser::COMMA) {
      setState(112);
      match(MerrillTecplotParser::COMMA);
      setState(113);
      zone_varshare_indices();
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_varshareContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_varshareContext::Zone_varshareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshareContext::VARSHARELIST() {
  return getToken(MerrillTecplotParser::VARSHARELIST, 0);
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::Zone_varshareContext::EQUALS() {
  return getTokens(MerrillTecplotParser::EQUALS);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshareContext::EQUALS(size_t i) {
  return getToken(MerrillTecplotParser::EQUALS, i);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshareContext::OPAREN() {
  return getToken(MerrillTecplotParser::OPAREN, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshareContext::OSQUARE() {
  return getToken(MerrillTecplotParser::OSQUARE, 0);
}

MerrillTecplotParser::Zone_varshare_indices_listContext* MerrillTecplotParser::Zone_varshareContext::zone_varshare_indices_list() {
  return getRuleContext<MerrillTecplotParser::Zone_varshare_indices_listContext>(0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshareContext::CSQUARE() {
  return getToken(MerrillTecplotParser::CSQUARE, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshareContext::Integer() {
  return getToken(MerrillTecplotParser::Integer, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_varshareContext::CPAREN() {
  return getToken(MerrillTecplotParser::CPAREN, 0);
}


size_t MerrillTecplotParser::Zone_varshareContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_varshare;
}


std::any MerrillTecplotParser::Zone_varshareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_varshare(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_varshareContext* MerrillTecplotParser::zone_varshare() {
  Zone_varshareContext *_localctx = _tracker.createInstance<Zone_varshareContext>(_ctx, getState());
  enterRule(_localctx, 28, MerrillTecplotParser::RuleZone_varshare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(MerrillTecplotParser::VARSHARELIST);
    setState(120);
    match(MerrillTecplotParser::EQUALS);
    setState(121);
    match(MerrillTecplotParser::OPAREN);
    setState(122);
    match(MerrillTecplotParser::OSQUARE);
    setState(123);
    zone_varshare_indices_list();
    setState(124);
    match(MerrillTecplotParser::CSQUARE);
    setState(125);
    match(MerrillTecplotParser::EQUALS);
    setState(126);
    match(MerrillTecplotParser::Integer);
    setState(127);
    match(MerrillTecplotParser::CPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_connectivity_share_zoneContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_connectivity_share_zoneContext::Zone_connectivity_share_zoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::Zone_connectivity_share_zoneContext::CONNECTIVITYSHAREZONE() {
  return getToken(MerrillTecplotParser::CONNECTIVITYSHAREZONE, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_connectivity_share_zoneContext::EQUALS() {
  return getToken(MerrillTecplotParser::EQUALS, 0);
}

tree::TerminalNode* MerrillTecplotParser::Zone_connectivity_share_zoneContext::Integer() {
  return getToken(MerrillTecplotParser::Integer, 0);
}


size_t MerrillTecplotParser::Zone_connectivity_share_zoneContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_connectivity_share_zone;
}


std::any MerrillTecplotParser::Zone_connectivity_share_zoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_connectivity_share_zone(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_connectivity_share_zoneContext* MerrillTecplotParser::zone_connectivity_share_zone() {
  Zone_connectivity_share_zoneContext *_localctx = _tracker.createInstance<Zone_connectivity_share_zoneContext>(_ctx, getState());
  enterRule(_localctx, 30, MerrillTecplotParser::RuleZone_connectivity_share_zone);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(MerrillTecplotParser::CONNECTIVITYSHAREZONE);
    setState(130);
    match(MerrillTecplotParser::EQUALS);
    setState(131);
    match(MerrillTecplotParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_componentContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_componentContext::Zone_componentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MerrillTecplotParser::Zone_titleContext* MerrillTecplotParser::Zone_componentContext::zone_title() {
  return getRuleContext<MerrillTecplotParser::Zone_titleContext>(0);
}

MerrillTecplotParser::Zone_nvertContext* MerrillTecplotParser::Zone_componentContext::zone_nvert() {
  return getRuleContext<MerrillTecplotParser::Zone_nvertContext>(0);
}

MerrillTecplotParser::Zone_nelemContext* MerrillTecplotParser::Zone_componentContext::zone_nelem() {
  return getRuleContext<MerrillTecplotParser::Zone_nelemContext>(0);
}

MerrillTecplotParser::Zone_feContext* MerrillTecplotParser::Zone_componentContext::zone_fe() {
  return getRuleContext<MerrillTecplotParser::Zone_feContext>(0);
}

MerrillTecplotParser::Zone_etContext* MerrillTecplotParser::Zone_componentContext::zone_et() {
  return getRuleContext<MerrillTecplotParser::Zone_etContext>(0);
}

MerrillTecplotParser::Zone_varlocationContext* MerrillTecplotParser::Zone_componentContext::zone_varlocation() {
  return getRuleContext<MerrillTecplotParser::Zone_varlocationContext>(0);
}

MerrillTecplotParser::Zone_varshareContext* MerrillTecplotParser::Zone_componentContext::zone_varshare() {
  return getRuleContext<MerrillTecplotParser::Zone_varshareContext>(0);
}

MerrillTecplotParser::Zone_connectivity_share_zoneContext* MerrillTecplotParser::Zone_componentContext::zone_connectivity_share_zone() {
  return getRuleContext<MerrillTecplotParser::Zone_connectivity_share_zoneContext>(0);
}


size_t MerrillTecplotParser::Zone_componentContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_component;
}


std::any MerrillTecplotParser::Zone_componentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_component(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_componentContext* MerrillTecplotParser::zone_component() {
  Zone_componentContext *_localctx = _tracker.createInstance<Zone_componentContext>(_ctx, getState());
  enterRule(_localctx, 32, MerrillTecplotParser::RuleZone_component);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(141);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MerrillTecplotParser::T: {
        enterOuterAlt(_localctx, 1);
        setState(133);
        zone_title();
        break;
      }

      case MerrillTecplotParser::N: {
        enterOuterAlt(_localctx, 2);
        setState(134);
        zone_nvert();
        break;
      }

      case MerrillTecplotParser::E: {
        enterOuterAlt(_localctx, 3);
        setState(135);
        zone_nelem();
        break;
      }

      case MerrillTecplotParser::F: {
        enterOuterAlt(_localctx, 4);
        setState(136);
        zone_fe();
        break;
      }

      case MerrillTecplotParser::ET: {
        enterOuterAlt(_localctx, 5);
        setState(137);
        zone_et();
        break;
      }

      case MerrillTecplotParser::VARLOCATION: {
        enterOuterAlt(_localctx, 6);
        setState(138);
        zone_varlocation();
        break;
      }

      case MerrillTecplotParser::VARSHARELIST: {
        enterOuterAlt(_localctx, 7);
        setState(139);
        zone_varshare();
        break;
      }

      case MerrillTecplotParser::CONNECTIVITYSHAREZONE: {
        enterOuterAlt(_localctx, 8);
        setState(140);
        zone_connectivity_share_zone();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ZoneContext ------------------------------------------------------------------

MerrillTecplotParser::ZoneContext::ZoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MerrillTecplotParser::ZoneContext::ZONE() {
  return getToken(MerrillTecplotParser::ZONE, 0);
}

std::vector<MerrillTecplotParser::Zone_componentContext *> MerrillTecplotParser::ZoneContext::zone_component() {
  return getRuleContexts<MerrillTecplotParser::Zone_componentContext>();
}

MerrillTecplotParser::Zone_componentContext* MerrillTecplotParser::ZoneContext::zone_component(size_t i) {
  return getRuleContext<MerrillTecplotParser::Zone_componentContext>(i);
}

MerrillTecplotParser::Zone_float_blockContext* MerrillTecplotParser::ZoneContext::zone_float_block() {
  return getRuleContext<MerrillTecplotParser::Zone_float_blockContext>(0);
}

MerrillTecplotParser::Zone_integer_blockContext* MerrillTecplotParser::ZoneContext::zone_integer_block() {
  return getRuleContext<MerrillTecplotParser::Zone_integer_blockContext>(0);
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::ZoneContext::COMMA() {
  return getTokens(MerrillTecplotParser::COMMA);
}

tree::TerminalNode* MerrillTecplotParser::ZoneContext::COMMA(size_t i) {
  return getToken(MerrillTecplotParser::COMMA, i);
}


size_t MerrillTecplotParser::ZoneContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone;
}


std::any MerrillTecplotParser::ZoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::ZoneContext* MerrillTecplotParser::zone() {
  ZoneContext *_localctx = _tracker.createInstance<ZoneContext>(_ctx, getState());
  enterRule(_localctx, 34, MerrillTecplotParser::RuleZone);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(MerrillTecplotParser::ZONE);
    setState(144);
    zone_component();
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MerrillTecplotParser::T)
      | (1ULL << MerrillTecplotParser::N)
      | (1ULL << MerrillTecplotParser::E)
      | (1ULL << MerrillTecplotParser::F)
      | (1ULL << MerrillTecplotParser::ET)
      | (1ULL << MerrillTecplotParser::VARLOCATION)
      | (1ULL << MerrillTecplotParser::VARSHARELIST)
      | (1ULL << MerrillTecplotParser::CONNECTIVITYSHAREZONE)
      | (1ULL << MerrillTecplotParser::COMMA))) != 0)) {
      setState(146);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MerrillTecplotParser::COMMA) {
        setState(145);
        match(MerrillTecplotParser::COMMA);
      }
      setState(148);
      zone_component();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    zone_float_block();
    setState(156);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MerrillTecplotParser::Integer) {
      setState(155);
      zone_integer_block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_float_blockContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_float_blockContext::Zone_float_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::Zone_float_blockContext::Float() {
  return getTokens(MerrillTecplotParser::Float);
}

tree::TerminalNode* MerrillTecplotParser::Zone_float_blockContext::Float(size_t i) {
  return getToken(MerrillTecplotParser::Float, i);
}


size_t MerrillTecplotParser::Zone_float_blockContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_float_block;
}


std::any MerrillTecplotParser::Zone_float_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_float_block(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_float_blockContext* MerrillTecplotParser::zone_float_block() {
  Zone_float_blockContext *_localctx = _tracker.createInstance<Zone_float_blockContext>(_ctx, getState());
  enterRule(_localctx, 36, MerrillTecplotParser::RuleZone_float_block);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(158);
      match(MerrillTecplotParser::Float);
      setState(161); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MerrillTecplotParser::Float);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Zone_integer_blockContext ------------------------------------------------------------------

MerrillTecplotParser::Zone_integer_blockContext::Zone_integer_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MerrillTecplotParser::Zone_integer_blockContext::Integer() {
  return getTokens(MerrillTecplotParser::Integer);
}

tree::TerminalNode* MerrillTecplotParser::Zone_integer_blockContext::Integer(size_t i) {
  return getToken(MerrillTecplotParser::Integer, i);
}


size_t MerrillTecplotParser::Zone_integer_blockContext::getRuleIndex() const {
  return MerrillTecplotParser::RuleZone_integer_block;
}


std::any MerrillTecplotParser::Zone_integer_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MerrillTecplotVisitor*>(visitor))
    return parserVisitor->visitZone_integer_block(this);
  else
    return visitor->visitChildren(this);
}

MerrillTecplotParser::Zone_integer_blockContext* MerrillTecplotParser::zone_integer_block() {
  Zone_integer_blockContext *_localctx = _tracker.createInstance<Zone_integer_blockContext>(_ctx, getState());
  enterRule(_localctx, 38, MerrillTecplotParser::RuleZone_integer_block);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(163);
      match(MerrillTecplotParser::Integer);
      setState(166); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == MerrillTecplotParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void MerrillTecplotParser::initialize() {
  std::call_once(merrilltecplotParserOnceFlag, merrilltecplotParserInitialize);
}
