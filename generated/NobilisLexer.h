


// Generated from Nobilis.g4 by ANTLR 4.7.2

#pragma once

 	/* lexer postinclude section */
	#include "NobilisParser.h"
	#include <regex>
	#include <memory>
	#ifndef _WIN32
		#pragma GCC diagnostic ignored "-Wunused-parameter"
	#endif
	/* lexer precinclude section */


#include "antlr4-runtime.h"

 

namespace antlrcpptest {

/* lexer context section */

class  NobilisLexer : public antlr4::Lexer {
public:
  enum {
    NAME = 1, STRING = 2, FLOAT = 3, INTEGER = 4, NUMBER = 5, TRUE = 6, 
    FALSE = 7, TYPE = 8, INT_TYPE = 9, FLOAT_TYPE = 10, BOOLEAN_TYPE = 11, 
    STRING_TYPE = 12, OBJECT_TYPE = 13, DOT = 14, STAR = 15, OPEN_PAREN = 16, 
    CLOSE_PAREN = 17, COMMA = 18, COLON = 19, SEMI_COLON = 20, POWER = 21, 
    ASSIGN = 22, OPEN_BRACK = 23, CLOSE_BRACK = 24, OR_OP = 25, XOR = 26, 
    AND_OP = 27, LEFT_SHIFT = 28, RIGHT_SHIFT = 29, ADD = 30, MINUS = 31, 
    DIV = 32, MOD = 33, IDIV = 34, NOT_OP = 35, OPEN_BRACE = 36, CLOSE_BRACE = 37, 
    LESS_THAN = 38, GREATER_THAN = 39, EQUALS = 40, GT_EQ = 41, LT_EQ = 42, 
    NOT_EQ = 43, ARROW = 44, ADD_ASSIGN = 45, SUB_ASSIGN = 46, MULT_ASSIGN = 47, 
    AT_ASSIGN = 48, DIV_ASSIGN = 49, MOD_ASSIGN = 50, AND_ASSIGN = 51, OR_ASSIGN = 52, 
    XOR_ASSIGN = 53, LEFT_SHIFT_ASSIGN = 54, RIGHT_SHIFT_ASSIGN = 55, POWER_ASSIGN = 56, 
    IDIV_ASSIGN = 57, SKIP_ = 58
  };

  NobilisLexer(antlr4::CharStream *input);
  ~NobilisLexer();


  private:
  	int opened ;

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void OPEN_PARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_PARENAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACKAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACKAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACEAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
