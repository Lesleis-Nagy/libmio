
// Generated from grammar/MerrillTecplot.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  MerrillTecplotLexer : public antlr4::Lexer {
public:
  enum {
    TITLE = 1, VARIABLES = 2, ZONE = 3, T = 4, N = 5, E = 6, F = 7, FEBLOCK = 8, 
    ET = 9, TETRAHEDRON = 10, VARLOCATION = 11, CELLCENTERED = 12, VARSHARELIST = 13, 
    CONNECTIVITYSHAREZONE = 14, EQUALS = 15, DBLQUOTE = 16, COMMA = 17, 
    OPAREN = 18, CPAREN = 19, OSQUARE = 20, CSQUARE = 21, DECIMAL = 22, 
    NEGATIVE = 23, POSITIVE = 24, StringLiteral = 25, UnterminatedStringLiteral = 26, 
    Integer = 27, Float = 28, WhiteSpace = 29
  };

  explicit MerrillTecplotLexer(antlr4::CharStream *input);

  ~MerrillTecplotLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

