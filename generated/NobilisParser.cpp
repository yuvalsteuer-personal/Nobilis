
// Generated from Nobilis.g4 by ANTLR 4.7.2


#include "NobilisListener.h"
#include "NobilisVisitor.h"

#include "NobilisParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

NobilisParser::NobilisParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

NobilisParser::~NobilisParser() {
  delete _interpreter;
}

std::string NobilisParser::getGrammarFileName() const {
  return "Nobilis.g4";
}

const std::vector<std::string>& NobilisParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& NobilisParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StmtContext ------------------------------------------------------------------

NobilisParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NobilisParser::Function_declareContext* NobilisParser::StmtContext::function_declare() {
  return getRuleContext<NobilisParser::Function_declareContext>(0);
}

NobilisParser::ExprContext* NobilisParser::StmtContext::expr() {
  return getRuleContext<NobilisParser::ExprContext>(0);
}


size_t NobilisParser::StmtContext::getRuleIndex() const {
  return NobilisParser::RuleStmt;
}

void NobilisParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void NobilisParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any NobilisParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

NobilisParser::StmtContext* NobilisParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 0, NobilisParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(14);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NobilisParser::INT_TYPE:
      case NobilisParser::FLOAT_TYPE:
      case NobilisParser::BOOLEAN_TYPE:
      case NobilisParser::STRING_TYPE:
      case NobilisParser::OBJECT_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(12);
        function_declare();
        break;
      }

      case NobilisParser::NAME:
      case NobilisParser::STRING:
      case NobilisParser::FLOAT:
      case NobilisParser::INTEGER:
      case NobilisParser::TRUE:
      case NobilisParser::FALSE:
      case NobilisParser::OPEN_PAREN:
      case NobilisParser::ADD:
      case NobilisParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(13);
        expr(0);
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

//----------------- Function_declareContext ------------------------------------------------------------------

NobilisParser::Function_declareContext::Function_declareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NobilisParser::Declare_stmtContext* NobilisParser::Function_declareContext::declare_stmt() {
  return getRuleContext<NobilisParser::Declare_stmtContext>(0);
}

NobilisParser::ParametersContext* NobilisParser::Function_declareContext::parameters() {
  return getRuleContext<NobilisParser::ParametersContext>(0);
}


size_t NobilisParser::Function_declareContext::getRuleIndex() const {
  return NobilisParser::RuleFunction_declare;
}

void NobilisParser::Function_declareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_declare(this);
}

void NobilisParser::Function_declareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_declare(this);
}


antlrcpp::Any NobilisParser::Function_declareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitFunction_declare(this);
  else
    return visitor->visitChildren(this);
}

NobilisParser::Function_declareContext* NobilisParser::function_declare() {
  Function_declareContext *_localctx = _tracker.createInstance<Function_declareContext>(_ctx, getState());
  enterRule(_localctx, 2, NobilisParser::RuleFunction_declare);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    declare_stmt();
    setState(17);
    parameters();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

NobilisParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NobilisParser::ExprContext::getRuleIndex() const {
  return NobilisParser::RuleExpr;
}

void NobilisParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnaryExprContext ------------------------------------------------------------------

NobilisParser::ExprContext* NobilisParser::UnaryExprContext::expr() {
  return getRuleContext<NobilisParser::ExprContext>(0);
}

tree::TerminalNode* NobilisParser::UnaryExprContext::ADD() {
  return getToken(NobilisParser::ADD, 0);
}

tree::TerminalNode* NobilisParser::UnaryExprContext::MINUS() {
  return getToken(NobilisParser::MINUS, 0);
}

NobilisParser::UnaryExprContext::UnaryExprContext(ExprContext *ctx) { copyFrom(ctx); }

void NobilisParser::UnaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpr(this);
}
void NobilisParser::UnaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpr(this);
}

antlrcpp::Any NobilisParser::UnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerExprContext ------------------------------------------------------------------

std::vector<NobilisParser::ExprContext *> NobilisParser::PowerExprContext::expr() {
  return getRuleContexts<NobilisParser::ExprContext>();
}

NobilisParser::ExprContext* NobilisParser::PowerExprContext::expr(size_t i) {
  return getRuleContext<NobilisParser::ExprContext>(i);
}

tree::TerminalNode* NobilisParser::PowerExprContext::POWER() {
  return getToken(NobilisParser::POWER, 0);
}

NobilisParser::PowerExprContext::PowerExprContext(ExprContext *ctx) { copyFrom(ctx); }

void NobilisParser::PowerExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowerExpr(this);
}
void NobilisParser::PowerExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowerExpr(this);
}

antlrcpp::Any NobilisParser::PowerExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitPowerExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomExprContext ------------------------------------------------------------------

NobilisParser::AtomContext* NobilisParser::AtomExprContext::atom() {
  return getRuleContext<NobilisParser::AtomContext>(0);
}

NobilisParser::AtomExprContext::AtomExprContext(ExprContext *ctx) { copyFrom(ctx); }

void NobilisParser::AtomExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomExpr(this);
}
void NobilisParser::AtomExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomExpr(this);
}

antlrcpp::Any NobilisParser::AtomExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitAtomExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* NobilisParser::ParenExprContext::OPEN_PAREN() {
  return getToken(NobilisParser::OPEN_PAREN, 0);
}

NobilisParser::ExprContext* NobilisParser::ParenExprContext::expr() {
  return getRuleContext<NobilisParser::ExprContext>(0);
}

tree::TerminalNode* NobilisParser::ParenExprContext::CLOSE_PAREN() {
  return getToken(NobilisParser::CLOSE_PAREN, 0);
}

NobilisParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }

void NobilisParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void NobilisParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

antlrcpp::Any NobilisParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithExprContext ------------------------------------------------------------------

std::vector<NobilisParser::ExprContext *> NobilisParser::ArithExprContext::expr() {
  return getRuleContexts<NobilisParser::ExprContext>();
}

NobilisParser::ExprContext* NobilisParser::ArithExprContext::expr(size_t i) {
  return getRuleContext<NobilisParser::ExprContext>(i);
}

tree::TerminalNode* NobilisParser::ArithExprContext::ADD() {
  return getToken(NobilisParser::ADD, 0);
}

tree::TerminalNode* NobilisParser::ArithExprContext::MINUS() {
  return getToken(NobilisParser::MINUS, 0);
}

NobilisParser::ArithExprContext::ArithExprContext(ExprContext *ctx) { copyFrom(ctx); }

void NobilisParser::ArithExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithExpr(this);
}
void NobilisParser::ArithExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithExpr(this);
}

antlrcpp::Any NobilisParser::ArithExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitArithExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MuldivmodExprContext ------------------------------------------------------------------

std::vector<NobilisParser::ExprContext *> NobilisParser::MuldivmodExprContext::expr() {
  return getRuleContexts<NobilisParser::ExprContext>();
}

NobilisParser::ExprContext* NobilisParser::MuldivmodExprContext::expr(size_t i) {
  return getRuleContext<NobilisParser::ExprContext>(i);
}

tree::TerminalNode* NobilisParser::MuldivmodExprContext::STAR() {
  return getToken(NobilisParser::STAR, 0);
}

tree::TerminalNode* NobilisParser::MuldivmodExprContext::DIV() {
  return getToken(NobilisParser::DIV, 0);
}

tree::TerminalNode* NobilisParser::MuldivmodExprContext::IDIV() {
  return getToken(NobilisParser::IDIV, 0);
}

tree::TerminalNode* NobilisParser::MuldivmodExprContext::MOD() {
  return getToken(NobilisParser::MOD, 0);
}

NobilisParser::MuldivmodExprContext::MuldivmodExprContext(ExprContext *ctx) { copyFrom(ctx); }

void NobilisParser::MuldivmodExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMuldivmodExpr(this);
}
void NobilisParser::MuldivmodExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMuldivmodExpr(this);
}

antlrcpp::Any NobilisParser::MuldivmodExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitMuldivmodExpr(this);
  else
    return visitor->visitChildren(this);
}

NobilisParser::ExprContext* NobilisParser::expr() {
   return expr(0);
}

NobilisParser::ExprContext* NobilisParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NobilisParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  NobilisParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, NobilisParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(27);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NobilisParser::OPEN_PAREN: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(20);
        match(NobilisParser::OPEN_PAREN);
        setState(21);
        expr(0);
        setState(22);
        match(NobilisParser::CLOSE_PAREN);
        break;
      }

      case NobilisParser::ADD:
      case NobilisParser::MINUS: {
        _localctx = _tracker.createInstance<UnaryExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(24);
        dynamic_cast<UnaryExprContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == NobilisParser::ADD

        || _la == NobilisParser::MINUS)) {
          dynamic_cast<UnaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(25);
        dynamic_cast<UnaryExprContext *>(_localctx)->right = expr(2);
        break;
      }

      case NobilisParser::NAME:
      case NobilisParser::STRING:
      case NobilisParser::FLOAT:
      case NobilisParser::INTEGER:
      case NobilisParser::TRUE:
      case NobilisParser::FALSE: {
        _localctx = _tracker.createInstance<AtomExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(26);
        atom();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(40);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(38);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(29);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");

          setState(30);
          dynamic_cast<PowerExprContext *>(_localctx)->op = match(NobilisParser::POWER);
          setState(31);
          dynamic_cast<PowerExprContext *>(_localctx)->right = expr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MuldivmodExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(32);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");

          setState(33);
          dynamic_cast<MuldivmodExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << NobilisParser::STAR)
            | (1ULL << NobilisParser::DIV)
            | (1ULL << NobilisParser::MOD)
            | (1ULL << NobilisParser::IDIV))) != 0))) {
            dynamic_cast<MuldivmodExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(34);
          dynamic_cast<MuldivmodExprContext *>(_localctx)->right = expr(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ArithExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(35);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");

          setState(36);
          dynamic_cast<ArithExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == NobilisParser::ADD

          || _la == NobilisParser::MINUS)) {
            dynamic_cast<ArithExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(37);
          dynamic_cast<ArithExprContext *>(_localctx)->right = expr(4);
          break;
        }

        } 
      }
      setState(42);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

NobilisParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t NobilisParser::AtomContext::getRuleIndex() const {
  return NobilisParser::RuleAtom;
}

void NobilisParser::AtomContext::copyFrom(AtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NameAtomContext ------------------------------------------------------------------

tree::TerminalNode* NobilisParser::NameAtomContext::NAME() {
  return getToken(NobilisParser::NAME, 0);
}

NobilisParser::NameAtomContext::NameAtomContext(AtomContext *ctx) { copyFrom(ctx); }

void NobilisParser::NameAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNameAtom(this);
}
void NobilisParser::NameAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNameAtom(this);
}

antlrcpp::Any NobilisParser::NameAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitNameAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatAtomContext ------------------------------------------------------------------

tree::TerminalNode* NobilisParser::FloatAtomContext::FLOAT() {
  return getToken(NobilisParser::FLOAT, 0);
}

NobilisParser::FloatAtomContext::FloatAtomContext(AtomContext *ctx) { copyFrom(ctx); }

void NobilisParser::FloatAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatAtom(this);
}
void NobilisParser::FloatAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatAtom(this);
}

antlrcpp::Any NobilisParser::FloatAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitFloatAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringAtomContext ------------------------------------------------------------------

tree::TerminalNode* NobilisParser::StringAtomContext::STRING() {
  return getToken(NobilisParser::STRING, 0);
}

NobilisParser::StringAtomContext::StringAtomContext(AtomContext *ctx) { copyFrom(ctx); }

void NobilisParser::StringAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringAtom(this);
}
void NobilisParser::StringAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringAtom(this);
}

antlrcpp::Any NobilisParser::StringAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitStringAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FalseAtomContext ------------------------------------------------------------------

tree::TerminalNode* NobilisParser::FalseAtomContext::FALSE() {
  return getToken(NobilisParser::FALSE, 0);
}

NobilisParser::FalseAtomContext::FalseAtomContext(AtomContext *ctx) { copyFrom(ctx); }

void NobilisParser::FalseAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFalseAtom(this);
}
void NobilisParser::FalseAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFalseAtom(this);
}

antlrcpp::Any NobilisParser::FalseAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitFalseAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerAtomContext ------------------------------------------------------------------

tree::TerminalNode* NobilisParser::IntegerAtomContext::INTEGER() {
  return getToken(NobilisParser::INTEGER, 0);
}

NobilisParser::IntegerAtomContext::IntegerAtomContext(AtomContext *ctx) { copyFrom(ctx); }

void NobilisParser::IntegerAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerAtom(this);
}
void NobilisParser::IntegerAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerAtom(this);
}

antlrcpp::Any NobilisParser::IntegerAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitIntegerAtom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TrueAtomContext ------------------------------------------------------------------

tree::TerminalNode* NobilisParser::TrueAtomContext::TRUE() {
  return getToken(NobilisParser::TRUE, 0);
}

NobilisParser::TrueAtomContext::TrueAtomContext(AtomContext *ctx) { copyFrom(ctx); }

void NobilisParser::TrueAtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrueAtom(this);
}
void NobilisParser::TrueAtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrueAtom(this);
}

antlrcpp::Any NobilisParser::TrueAtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitTrueAtom(this);
  else
    return visitor->visitChildren(this);
}
NobilisParser::AtomContext* NobilisParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 6, NobilisParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NobilisParser::NAME: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<NobilisParser::NameAtomContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(43);
        match(NobilisParser::NAME);
        break;
      }

      case NobilisParser::STRING: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<NobilisParser::StringAtomContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(44);
        match(NobilisParser::STRING);
        break;
      }

      case NobilisParser::FLOAT: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<NobilisParser::FloatAtomContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(45);
        match(NobilisParser::FLOAT);
        break;
      }

      case NobilisParser::INTEGER: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<NobilisParser::IntegerAtomContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(46);
        match(NobilisParser::INTEGER);
        break;
      }

      case NobilisParser::TRUE: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<NobilisParser::TrueAtomContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(47);
        match(NobilisParser::TRUE);
        break;
      }

      case NobilisParser::FALSE: {
        _localctx = dynamic_cast<AtomContext *>(_tracker.createInstance<NobilisParser::FalseAtomContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(48);
        match(NobilisParser::FALSE);
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

//----------------- Declare_stmtContext ------------------------------------------------------------------

NobilisParser::Declare_stmtContext::Declare_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NobilisParser::Declare_stmtContext::COLON() {
  return getToken(NobilisParser::COLON, 0);
}

tree::TerminalNode* NobilisParser::Declare_stmtContext::NAME() {
  return getToken(NobilisParser::NAME, 0);
}

tree::TerminalNode* NobilisParser::Declare_stmtContext::INT_TYPE() {
  return getToken(NobilisParser::INT_TYPE, 0);
}

tree::TerminalNode* NobilisParser::Declare_stmtContext::FLOAT_TYPE() {
  return getToken(NobilisParser::FLOAT_TYPE, 0);
}

tree::TerminalNode* NobilisParser::Declare_stmtContext::BOOLEAN_TYPE() {
  return getToken(NobilisParser::BOOLEAN_TYPE, 0);
}

tree::TerminalNode* NobilisParser::Declare_stmtContext::STRING_TYPE() {
  return getToken(NobilisParser::STRING_TYPE, 0);
}

tree::TerminalNode* NobilisParser::Declare_stmtContext::OBJECT_TYPE() {
  return getToken(NobilisParser::OBJECT_TYPE, 0);
}


size_t NobilisParser::Declare_stmtContext::getRuleIndex() const {
  return NobilisParser::RuleDeclare_stmt;
}

void NobilisParser::Declare_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclare_stmt(this);
}

void NobilisParser::Declare_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclare_stmt(this);
}


antlrcpp::Any NobilisParser::Declare_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitDeclare_stmt(this);
  else
    return visitor->visitChildren(this);
}

NobilisParser::Declare_stmtContext* NobilisParser::declare_stmt() {
  Declare_stmtContext *_localctx = _tracker.createInstance<Declare_stmtContext>(_ctx, getState());
  enterRule(_localctx, 8, NobilisParser::RuleDeclare_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NobilisParser::INT_TYPE)
      | (1ULL << NobilisParser::FLOAT_TYPE)
      | (1ULL << NobilisParser::BOOLEAN_TYPE)
      | (1ULL << NobilisParser::STRING_TYPE)
      | (1ULL << NobilisParser::OBJECT_TYPE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(52);
    match(NobilisParser::COLON);
    setState(53);
    match(NobilisParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

NobilisParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NobilisParser::ParametersContext::OPEN_PAREN() {
  return getToken(NobilisParser::OPEN_PAREN, 0);
}

tree::TerminalNode* NobilisParser::ParametersContext::CLOSE_PAREN() {
  return getToken(NobilisParser::CLOSE_PAREN, 0);
}

std::vector<NobilisParser::Declare_stmtContext *> NobilisParser::ParametersContext::declare_stmt() {
  return getRuleContexts<NobilisParser::Declare_stmtContext>();
}

NobilisParser::Declare_stmtContext* NobilisParser::ParametersContext::declare_stmt(size_t i) {
  return getRuleContext<NobilisParser::Declare_stmtContext>(i);
}

std::vector<tree::TerminalNode *> NobilisParser::ParametersContext::COMMA() {
  return getTokens(NobilisParser::COMMA);
}

tree::TerminalNode* NobilisParser::ParametersContext::COMMA(size_t i) {
  return getToken(NobilisParser::COMMA, i);
}


size_t NobilisParser::ParametersContext::getRuleIndex() const {
  return NobilisParser::RuleParameters;
}

void NobilisParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void NobilisParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NobilisListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}


antlrcpp::Any NobilisParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NobilisVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

NobilisParser::ParametersContext* NobilisParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 10, NobilisParser::RuleParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(NobilisParser::OPEN_PAREN);
    setState(65);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << NobilisParser::INT_TYPE)
      | (1ULL << NobilisParser::FLOAT_TYPE)
      | (1ULL << NobilisParser::BOOLEAN_TYPE)
      | (1ULL << NobilisParser::STRING_TYPE)
      | (1ULL << NobilisParser::OBJECT_TYPE))) != 0)) {
      setState(61);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(56);
          declare_stmt();
          setState(57);
          match(NobilisParser::COMMA); 
        }
        setState(63);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      }
      setState(64);
      declare_stmt();
    }
    setState(67);
    match(NobilisParser::CLOSE_PAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool NobilisParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NobilisParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> NobilisParser::_decisionToDFA;
atn::PredictionContextCache NobilisParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN NobilisParser::_atn;
std::vector<uint16_t> NobilisParser::_serializedATN;

std::vector<std::string> NobilisParser::_ruleNames = {
  "stmt", "function_declare", "expr", "atom", "declare_stmt", "parameters"
};

std::vector<std::string> NobilisParser::_literalNames = {
  "", "", "", "", "", "", "'true'", "'false'", "", "'integer'", "'float'", 
  "'boolean'", "'string'", "'object'", "'.'", "'*'", "'('", "')'", "','", 
  "':'", "';'", "'**'", "'='", "'['", "']'", "'|'", "'^'", "'&'", "'<<'", 
  "'>>'", "'+'", "'-'", "'/'", "'%'", "'//'", "'~'", "'{'", "'}'", "'<'", 
  "'>'", "'=='", "'>='", "'<='", "'!='", "'->'", "'+='", "'-='", "'*='", 
  "'@='", "'/='", "'%='", "'&='", "'|='", "'^='", "'<<='", "'>>='", "'**='", 
  "'//='"
};

std::vector<std::string> NobilisParser::_symbolicNames = {
  "", "NAME", "STRING", "FLOAT", "INTEGER", "NUMBER", "TRUE", "FALSE", "TYPE", 
  "INT_TYPE", "FLOAT_TYPE", "BOOLEAN_TYPE", "STRING_TYPE", "OBJECT_TYPE", 
  "DOT", "STAR", "OPEN_PAREN", "CLOSE_PAREN", "COMMA", "COLON", "SEMI_COLON", 
  "POWER", "ASSIGN", "OPEN_BRACK", "CLOSE_BRACK", "OR_OP", "XOR", "AND_OP", 
  "LEFT_SHIFT", "RIGHT_SHIFT", "ADD", "MINUS", "DIV", "MOD", "IDIV", "NOT_OP", 
  "OPEN_BRACE", "CLOSE_BRACE", "LESS_THAN", "GREATER_THAN", "EQUALS", "GT_EQ", 
  "LT_EQ", "NOT_EQ", "ARROW", "ADD_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN", 
  "AT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", 
  "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "POWER_ASSIGN", "IDIV_ASSIGN", 
  "SKIP_"
};

dfa::Vocabulary NobilisParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> NobilisParser::_tokenNames;

NobilisParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3c, 0x48, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x11, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x1e, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x29, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2c, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x34, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x7, 0x7, 0x3e, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x41, 0xb, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x44, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x2, 0x3, 0x6, 
    0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0x2, 0x5, 0x3, 0x2, 0x20, 0x21, 0x4, 
    0x2, 0x11, 0x11, 0x22, 0x24, 0x3, 0x2, 0xb, 0xf, 0x2, 0x4e, 0x2, 0x10, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x12, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x33, 0x3, 0x2, 0x2, 0x2, 0xa, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe, 0x11, 0x5, 0x4, 0x3, 0x2, 0xf, 0x11, 
    0x5, 0x6, 0x4, 0x2, 0x10, 0xe, 0x3, 0x2, 0x2, 0x2, 0x10, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x11, 0x3, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x5, 0xa, 0x6, 
    0x2, 0x13, 0x14, 0x5, 0xc, 0x7, 0x2, 0x14, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x15, 0x16, 0x8, 0x4, 0x1, 0x2, 0x16, 0x17, 0x7, 0x12, 0x2, 0x2, 0x17, 
    0x18, 0x5, 0x6, 0x4, 0x2, 0x18, 0x19, 0x7, 0x13, 0x2, 0x2, 0x19, 0x1e, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x9, 0x2, 0x2, 0x2, 0x1b, 0x1e, 0x5, 
    0x6, 0x4, 0x4, 0x1c, 0x1e, 0x5, 0x8, 0x5, 0x2, 0x1d, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x1d, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0xc, 0x7, 0x2, 0x2, 
    0x20, 0x21, 0x7, 0x17, 0x2, 0x2, 0x21, 0x29, 0x5, 0x6, 0x4, 0x7, 0x22, 
    0x23, 0xc, 0x6, 0x2, 0x2, 0x23, 0x24, 0x9, 0x3, 0x2, 0x2, 0x24, 0x29, 
    0x5, 0x6, 0x4, 0x7, 0x25, 0x26, 0xc, 0x5, 0x2, 0x2, 0x26, 0x27, 0x9, 
    0x2, 0x2, 0x2, 0x27, 0x29, 0x5, 0x6, 0x4, 0x6, 0x28, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x22, 0x3, 0x2, 0x2, 0x2, 0x28, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x34, 0x7, 0x3, 0x2, 0x2, 0x2e, 0x34, 
    0x7, 0x4, 0x2, 0x2, 0x2f, 0x34, 0x7, 0x5, 0x2, 0x2, 0x30, 0x34, 0x7, 
    0x6, 0x2, 0x2, 0x31, 0x34, 0x7, 0x8, 0x2, 0x2, 0x32, 0x34, 0x7, 0x9, 
    0x2, 0x2, 0x33, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x33, 0x2e, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x33, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x9, 0x4, 0x2, 0x2, 0x36, 0x37, 
    0x7, 0x15, 0x2, 0x2, 0x37, 0x38, 0x7, 0x3, 0x2, 0x2, 0x38, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x43, 0x7, 0x12, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0xa, 
    0x6, 0x2, 0x3b, 0x3c, 0x7, 0x14, 0x2, 0x2, 0x3c, 0x3e, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 
    0x5, 0xa, 0x6, 0x2, 0x43, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x13, 
    0x2, 0x2, 0x46, 0xd, 0x3, 0x2, 0x2, 0x2, 0x9, 0x10, 0x1d, 0x28, 0x2a, 
    0x33, 0x3f, 0x43, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

NobilisParser::Initializer NobilisParser::_init;
