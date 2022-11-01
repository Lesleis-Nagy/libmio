
// Generated from grammar/MerrillTecplot.g4 by ANTLR 4.10.1


#include "MerrillTecplotLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MerrillTecplotLexerStaticData final {
  MerrillTecplotLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MerrillTecplotLexerStaticData(const MerrillTecplotLexerStaticData&) = delete;
  MerrillTecplotLexerStaticData(MerrillTecplotLexerStaticData&&) = delete;
  MerrillTecplotLexerStaticData& operator=(const MerrillTecplotLexerStaticData&) = delete;
  MerrillTecplotLexerStaticData& operator=(MerrillTecplotLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag merrilltecplotlexerLexerOnceFlag;
MerrillTecplotLexerStaticData *merrilltecplotlexerLexerStaticData = nullptr;

void merrilltecplotlexerLexerInitialize() {
  assert(merrilltecplotlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<MerrillTecplotLexerStaticData>(
    std::vector<std::string>{
      "TITLE", "VARIABLES", "ZONE", "T", "N", "E", "F", "FEBLOCK", "ET", 
      "TETRAHEDRON", "VARLOCATION", "CELLCENTERED", "VARSHARELIST", "CONNECTIVITYSHAREZONE", 
      "EQUALS", "DBLQUOTE", "COMMA", "OPAREN", "CPAREN", "OSQUARE", "CSQUARE", 
      "DECIMAL", "NEGATIVE", "POSITIVE", "StringLiteral", "UnterminatedStringLiteral", 
      "Integer", "Float", "WhiteSpace"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,29,242,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,
  	1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,24,
  	1,25,1,25,1,25,1,25,1,25,3,25,200,8,25,5,25,202,8,25,10,25,12,25,205,
  	9,25,1,26,4,26,208,8,26,11,26,12,26,209,1,27,3,27,213,8,27,1,27,4,27,
  	216,8,27,11,27,12,27,217,1,27,1,27,4,27,222,8,27,11,27,12,27,223,1,27,
  	1,27,1,27,3,27,229,8,27,1,27,4,27,232,8,27,11,27,12,27,233,1,28,4,28,
  	237,8,28,11,28,12,28,238,1,28,1,28,0,0,29,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,
  	19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,1,0,3,
  	4,0,10,10,13,13,34,34,92,92,1,0,48,57,3,0,9,10,13,13,32,32,251,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,
  	0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,
  	45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,
  	0,0,0,0,57,1,0,0,0,1,59,1,0,0,0,3,65,1,0,0,0,5,75,1,0,0,0,7,80,1,0,0,
  	0,9,82,1,0,0,0,11,84,1,0,0,0,13,86,1,0,0,0,15,88,1,0,0,0,17,96,1,0,0,
  	0,19,99,1,0,0,0,21,111,1,0,0,0,23,123,1,0,0,0,25,136,1,0,0,0,27,149,1,
  	0,0,0,29,171,1,0,0,0,31,173,1,0,0,0,33,175,1,0,0,0,35,177,1,0,0,0,37,
  	179,1,0,0,0,39,181,1,0,0,0,41,183,1,0,0,0,43,185,1,0,0,0,45,187,1,0,0,
  	0,47,189,1,0,0,0,49,191,1,0,0,0,51,194,1,0,0,0,53,207,1,0,0,0,55,212,
  	1,0,0,0,57,236,1,0,0,0,59,60,5,84,0,0,60,61,5,73,0,0,61,62,5,84,0,0,62,
  	63,5,76,0,0,63,64,5,69,0,0,64,2,1,0,0,0,65,66,5,86,0,0,66,67,5,65,0,0,
  	67,68,5,82,0,0,68,69,5,73,0,0,69,70,5,65,0,0,70,71,5,66,0,0,71,72,5,76,
  	0,0,72,73,5,69,0,0,73,74,5,83,0,0,74,4,1,0,0,0,75,76,5,90,0,0,76,77,5,
  	79,0,0,77,78,5,78,0,0,78,79,5,69,0,0,79,6,1,0,0,0,80,81,5,84,0,0,81,8,
  	1,0,0,0,82,83,5,78,0,0,83,10,1,0,0,0,84,85,5,69,0,0,85,12,1,0,0,0,86,
  	87,5,70,0,0,87,14,1,0,0,0,88,89,5,70,0,0,89,90,5,69,0,0,90,91,5,66,0,
  	0,91,92,5,76,0,0,92,93,5,79,0,0,93,94,5,67,0,0,94,95,5,75,0,0,95,16,1,
  	0,0,0,96,97,5,69,0,0,97,98,5,84,0,0,98,18,1,0,0,0,99,100,5,84,0,0,100,
  	101,5,69,0,0,101,102,5,84,0,0,102,103,5,82,0,0,103,104,5,65,0,0,104,105,
  	5,72,0,0,105,106,5,69,0,0,106,107,5,68,0,0,107,108,5,82,0,0,108,109,5,
  	79,0,0,109,110,5,78,0,0,110,20,1,0,0,0,111,112,5,86,0,0,112,113,5,65,
  	0,0,113,114,5,82,0,0,114,115,5,76,0,0,115,116,5,79,0,0,116,117,5,67,0,
  	0,117,118,5,65,0,0,118,119,5,84,0,0,119,120,5,73,0,0,120,121,5,79,0,0,
  	121,122,5,78,0,0,122,22,1,0,0,0,123,124,5,67,0,0,124,125,5,69,0,0,125,
  	126,5,76,0,0,126,127,5,76,0,0,127,128,5,67,0,0,128,129,5,69,0,0,129,130,
  	5,78,0,0,130,131,5,84,0,0,131,132,5,69,0,0,132,133,5,82,0,0,133,134,5,
  	69,0,0,134,135,5,68,0,0,135,24,1,0,0,0,136,137,5,86,0,0,137,138,5,65,
  	0,0,138,139,5,82,0,0,139,140,5,83,0,0,140,141,5,72,0,0,141,142,5,65,0,
  	0,142,143,5,82,0,0,143,144,5,69,0,0,144,145,5,76,0,0,145,146,5,73,0,0,
  	146,147,5,83,0,0,147,148,5,84,0,0,148,26,1,0,0,0,149,150,5,67,0,0,150,
  	151,5,79,0,0,151,152,5,78,0,0,152,153,5,78,0,0,153,154,5,69,0,0,154,155,
  	5,67,0,0,155,156,5,84,0,0,156,157,5,73,0,0,157,158,5,86,0,0,158,159,5,
  	73,0,0,159,160,5,84,0,0,160,161,5,89,0,0,161,162,5,83,0,0,162,163,5,72,
  	0,0,163,164,5,65,0,0,164,165,5,82,0,0,165,166,5,69,0,0,166,167,5,90,0,
  	0,167,168,5,79,0,0,168,169,5,78,0,0,169,170,5,69,0,0,170,28,1,0,0,0,171,
  	172,5,61,0,0,172,30,1,0,0,0,173,174,5,34,0,0,174,32,1,0,0,0,175,176,5,
  	44,0,0,176,34,1,0,0,0,177,178,5,40,0,0,178,36,1,0,0,0,179,180,5,41,0,
  	0,180,38,1,0,0,0,181,182,5,91,0,0,182,40,1,0,0,0,183,184,5,93,0,0,184,
  	42,1,0,0,0,185,186,5,46,0,0,186,44,1,0,0,0,187,188,5,45,0,0,188,46,1,
  	0,0,0,189,190,5,43,0,0,190,48,1,0,0,0,191,192,3,51,25,0,192,193,5,34,
  	0,0,193,50,1,0,0,0,194,203,5,34,0,0,195,202,8,0,0,0,196,199,5,92,0,0,
  	197,200,9,0,0,0,198,200,5,0,0,1,199,197,1,0,0,0,199,198,1,0,0,0,200,202,
  	1,0,0,0,201,195,1,0,0,0,201,196,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,
  	0,203,204,1,0,0,0,204,52,1,0,0,0,205,203,1,0,0,0,206,208,7,1,0,0,207,
  	206,1,0,0,0,208,209,1,0,0,0,209,207,1,0,0,0,209,210,1,0,0,0,210,54,1,
  	0,0,0,211,213,3,45,22,0,212,211,1,0,0,0,212,213,1,0,0,0,213,215,1,0,0,
  	0,214,216,7,1,0,0,215,214,1,0,0,0,216,217,1,0,0,0,217,215,1,0,0,0,217,
  	218,1,0,0,0,218,219,1,0,0,0,219,221,3,43,21,0,220,222,7,1,0,0,221,220,
  	1,0,0,0,222,223,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,224,225,1,0,0,
  	0,225,228,5,69,0,0,226,229,3,45,22,0,227,229,3,47,23,0,228,226,1,0,0,
  	0,228,227,1,0,0,0,229,231,1,0,0,0,230,232,7,1,0,0,231,230,1,0,0,0,232,
  	233,1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,56,1,0,0,0,235,237,7,
  	2,0,0,236,235,1,0,0,0,237,238,1,0,0,0,238,236,1,0,0,0,238,239,1,0,0,0,
  	239,240,1,0,0,0,240,241,6,28,0,0,241,58,1,0,0,0,11,0,199,201,203,209,
  	212,217,223,228,233,238,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  merrilltecplotlexerLexerStaticData = staticData.release();
}

}

MerrillTecplotLexer::MerrillTecplotLexer(CharStream *input) : Lexer(input) {
  MerrillTecplotLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *merrilltecplotlexerLexerStaticData->atn, merrilltecplotlexerLexerStaticData->decisionToDFA, merrilltecplotlexerLexerStaticData->sharedContextCache);
}

MerrillTecplotLexer::~MerrillTecplotLexer() {
  delete _interpreter;
}

std::string MerrillTecplotLexer::getGrammarFileName() const {
  return "MerrillTecplot.g4";
}

const std::vector<std::string>& MerrillTecplotLexer::getRuleNames() const {
  return merrilltecplotlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& MerrillTecplotLexer::getChannelNames() const {
  return merrilltecplotlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& MerrillTecplotLexer::getModeNames() const {
  return merrilltecplotlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& MerrillTecplotLexer::getVocabulary() const {
  return merrilltecplotlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MerrillTecplotLexer::getSerializedATN() const {
  return merrilltecplotlexerLexerStaticData->serializedATN;
}

const atn::ATN& MerrillTecplotLexer::getATN() const {
  return *merrilltecplotlexerLexerStaticData->atn;
}




void MerrillTecplotLexer::initialize() {
  std::call_once(merrilltecplotlexerLexerOnceFlag, merrilltecplotlexerLexerInitialize);
}
