
// Generated from Jenny.g4 by ANTLR 4.7.1


#include "JennyListener.h"
#include "JennyVisitor.h"

#include "JennyParser.h"


using namespace antlrcpp;
using namespace antlr4;

JennyParser::JennyParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JennyParser::~JennyParser() {
  delete _interpreter;
}

std::string JennyParser::getGrammarFileName() const {
  return "Jenny.g4";
}

const std::vector<std::string>& JennyParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& JennyParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TranslationunitContext ------------------------------------------------------------------

JennyParser::TranslationunitContext::TranslationunitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TranslationunitContext::EOF() {
  return getToken(JennyParser::EOF, 0);
}

JennyParser::DeclarationseqContext* JennyParser::TranslationunitContext::declarationseq() {
  return getRuleContext<JennyParser::DeclarationseqContext>(0);
}


size_t JennyParser::TranslationunitContext::getRuleIndex() const {
  return JennyParser::RuleTranslationunit;
}

void JennyParser::TranslationunitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationunit(this);
}

void JennyParser::TranslationunitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationunit(this);
}


antlrcpp::Any JennyParser::TranslationunitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTranslationunit(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TranslationunitContext* JennyParser::translationunit() {
  TranslationunitContext *_localctx = _tracker.createInstance<TranslationunitContext>(_ctx, getState());
  enterRule(_localctx, 0, JennyParser::RuleTranslationunit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JennyParser::T__2)
      | (1ULL << JennyParser::Alignas)
      | (1ULL << JennyParser::Asm)
      | (1ULL << JennyParser::Auto)
      | (1ULL << JennyParser::Bool)
      | (1ULL << JennyParser::Char)
      | (1ULL << JennyParser::Char16)
      | (1ULL << JennyParser::Char32)
      | (1ULL << JennyParser::Class)
      | (1ULL << JennyParser::Const)
      | (1ULL << JennyParser::Constexpr)
      | (1ULL << JennyParser::Decltype)
      | (1ULL << JennyParser::Double)
      | (1ULL << JennyParser::Enum)
      | (1ULL << JennyParser::Explicit)
      | (1ULL << JennyParser::Extern)
      | (1ULL << JennyParser::Float)
      | (1ULL << JennyParser::Friend)
      | (1ULL << JennyParser::Inline)
      | (1ULL << JennyParser::Int)
      | (1ULL << JennyParser::Long)
      | (1ULL << JennyParser::Mutable)
      | (1ULL << JennyParser::Namespace)
      | (1ULL << JennyParser::Operator)
      | (1ULL << JennyParser::Register)
      | (1ULL << JennyParser::Short)
      | (1ULL << JennyParser::Signed)
      | (1ULL << JennyParser::Static)
      | (1ULL << JennyParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (JennyParser::Struct - 65))
      | (1ULL << (JennyParser::Template - 65))
      | (1ULL << (JennyParser::Thread_local - 65))
      | (1ULL << (JennyParser::Typedef - 65))
      | (1ULL << (JennyParser::Typename_ - 65))
      | (1ULL << (JennyParser::Union - 65))
      | (1ULL << (JennyParser::Unsigned - 65))
      | (1ULL << (JennyParser::Using - 65))
      | (1ULL << (JennyParser::Virtual - 65))
      | (1ULL << (JennyParser::Void - 65))
      | (1ULL << (JennyParser::Volatile - 65))
      | (1ULL << (JennyParser::Wchar - 65))
      | (1ULL << (JennyParser::LeftParen - 65))
      | (1ULL << (JennyParser::LeftBracket - 65))
      | (1ULL << (JennyParser::Star - 65))
      | (1ULL << (JennyParser::And - 65))
      | (1ULL << (JennyParser::Tilde - 65))
      | (1ULL << (JennyParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (JennyParser::Semi - 129))
      | (1ULL << (JennyParser::Ellipsis - 129))
      | (1ULL << (JennyParser::Identifier - 129)))) != 0)) {
      setState(400);
      declarationseq(0);
    }
    setState(403);
    match(JennyParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryexpressionContext ------------------------------------------------------------------

JennyParser::PrimaryexpressionContext::PrimaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::LiteralContext* JennyParser::PrimaryexpressionContext::literal() {
  return getRuleContext<JennyParser::LiteralContext>(0);
}

tree::TerminalNode* JennyParser::PrimaryexpressionContext::This() {
  return getToken(JennyParser::This, 0);
}

JennyParser::ExpressionContext* JennyParser::PrimaryexpressionContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}

JennyParser::IdexpressionContext* JennyParser::PrimaryexpressionContext::idexpression() {
  return getRuleContext<JennyParser::IdexpressionContext>(0);
}

JennyParser::LambdaexpressionContext* JennyParser::PrimaryexpressionContext::lambdaexpression() {
  return getRuleContext<JennyParser::LambdaexpressionContext>(0);
}


size_t JennyParser::PrimaryexpressionContext::getRuleIndex() const {
  return JennyParser::RulePrimaryexpression;
}

void JennyParser::PrimaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryexpression(this);
}

void JennyParser::PrimaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryexpression(this);
}


antlrcpp::Any JennyParser::PrimaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitPrimaryexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::PrimaryexpressionContext* JennyParser::primaryexpression() {
  PrimaryexpressionContext *_localctx = _tracker.createInstance<PrimaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, JennyParser::RulePrimaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(413);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::False:
      case JennyParser::Nullptr:
      case JennyParser::True:
      case JennyParser::Integerliteral:
      case JennyParser::Characterliteral:
      case JennyParser::Floatingliteral:
      case JennyParser::Stringliteral:
      case JennyParser::Userdefinedintegerliteral:
      case JennyParser::Userdefinedfloatingliteral:
      case JennyParser::Userdefinedstringliteral:
      case JennyParser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(405);
        literal();
        break;
      }

      case JennyParser::This: {
        enterOuterAlt(_localctx, 2);
        setState(406);
        match(JennyParser::This);
        break;
      }

      case JennyParser::LeftParen: {
        enterOuterAlt(_localctx, 3);
        setState(407);
        match(JennyParser::LeftParen);
        setState(408);
        expression(0);
        setState(409);
        match(JennyParser::RightParen);
        break;
      }

      case JennyParser::Decltype:
      case JennyParser::Operator:
      case JennyParser::Tilde:
      case JennyParser::Doublecolon:
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(411);
        idexpression();
        break;
      }

      case JennyParser::LeftBracket: {
        enterOuterAlt(_localctx, 5);
        setState(412);
        lambdaexpression();
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

//----------------- IdexpressionContext ------------------------------------------------------------------

JennyParser::IdexpressionContext::IdexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::UnqualifiedidContext* JennyParser::IdexpressionContext::unqualifiedid() {
  return getRuleContext<JennyParser::UnqualifiedidContext>(0);
}

JennyParser::QualifiedidContext* JennyParser::IdexpressionContext::qualifiedid() {
  return getRuleContext<JennyParser::QualifiedidContext>(0);
}


size_t JennyParser::IdexpressionContext::getRuleIndex() const {
  return JennyParser::RuleIdexpression;
}

void JennyParser::IdexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdexpression(this);
}

void JennyParser::IdexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdexpression(this);
}


antlrcpp::Any JennyParser::IdexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitIdexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::IdexpressionContext* JennyParser::idexpression() {
  IdexpressionContext *_localctx = _tracker.createInstance<IdexpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, JennyParser::RuleIdexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(417);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(415);
      unqualifiedid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(416);
      qualifiedid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnqualifiedidContext ------------------------------------------------------------------

JennyParser::UnqualifiedidContext::UnqualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::UnqualifiedidContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::OperatorfunctionidContext* JennyParser::UnqualifiedidContext::operatorfunctionid() {
  return getRuleContext<JennyParser::OperatorfunctionidContext>(0);
}

JennyParser::ConversionfunctionidContext* JennyParser::UnqualifiedidContext::conversionfunctionid() {
  return getRuleContext<JennyParser::ConversionfunctionidContext>(0);
}

JennyParser::LiteraloperatoridContext* JennyParser::UnqualifiedidContext::literaloperatorid() {
  return getRuleContext<JennyParser::LiteraloperatoridContext>(0);
}

JennyParser::ClassnameContext* JennyParser::UnqualifiedidContext::classname() {
  return getRuleContext<JennyParser::ClassnameContext>(0);
}

JennyParser::DecltypespecifierContext* JennyParser::UnqualifiedidContext::decltypespecifier() {
  return getRuleContext<JennyParser::DecltypespecifierContext>(0);
}

JennyParser::TemplateidContext* JennyParser::UnqualifiedidContext::templateid() {
  return getRuleContext<JennyParser::TemplateidContext>(0);
}


size_t JennyParser::UnqualifiedidContext::getRuleIndex() const {
  return JennyParser::RuleUnqualifiedid;
}

void JennyParser::UnqualifiedidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnqualifiedid(this);
}

void JennyParser::UnqualifiedidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnqualifiedid(this);
}


antlrcpp::Any JennyParser::UnqualifiedidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitUnqualifiedid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::UnqualifiedidContext* JennyParser::unqualifiedid() {
  UnqualifiedidContext *_localctx = _tracker.createInstance<UnqualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 6, JennyParser::RuleUnqualifiedid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(428);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(419);
      match(JennyParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(420);
      operatorfunctionid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(421);
      conversionfunctionid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(422);
      literaloperatorid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(423);
      match(JennyParser::Tilde);
      setState(424);
      classname();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(425);
      match(JennyParser::Tilde);
      setState(426);
      decltypespecifier();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(427);
      templateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedidContext ------------------------------------------------------------------

JennyParser::QualifiedidContext::QualifiedidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::NestednamespecifierContext* JennyParser::QualifiedidContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}

JennyParser::UnqualifiedidContext* JennyParser::QualifiedidContext::unqualifiedid() {
  return getRuleContext<JennyParser::UnqualifiedidContext>(0);
}

tree::TerminalNode* JennyParser::QualifiedidContext::Template() {
  return getToken(JennyParser::Template, 0);
}


size_t JennyParser::QualifiedidContext::getRuleIndex() const {
  return JennyParser::RuleQualifiedid;
}

void JennyParser::QualifiedidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedid(this);
}

void JennyParser::QualifiedidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedid(this);
}


antlrcpp::Any JennyParser::QualifiedidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitQualifiedid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::QualifiedidContext* JennyParser::qualifiedid() {
  QualifiedidContext *_localctx = _tracker.createInstance<QualifiedidContext>(_ctx, getState());
  enterRule(_localctx, 8, JennyParser::RuleQualifiedid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    nestednamespecifier(0);
    setState(432);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Template) {
      setState(431);
      match(JennyParser::Template);
    }
    setState(434);
    unqualifiedid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestednamespecifierContext ------------------------------------------------------------------

JennyParser::NestednamespecifierContext::NestednamespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ThetypenameContext* JennyParser::NestednamespecifierContext::thetypename() {
  return getRuleContext<JennyParser::ThetypenameContext>(0);
}

JennyParser::NamespacenameContext* JennyParser::NestednamespecifierContext::namespacename() {
  return getRuleContext<JennyParser::NamespacenameContext>(0);
}

JennyParser::DecltypespecifierContext* JennyParser::NestednamespecifierContext::decltypespecifier() {
  return getRuleContext<JennyParser::DecltypespecifierContext>(0);
}

JennyParser::NestednamespecifierContext* JennyParser::NestednamespecifierContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}

tree::TerminalNode* JennyParser::NestednamespecifierContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::SimpletemplateidContext* JennyParser::NestednamespecifierContext::simpletemplateid() {
  return getRuleContext<JennyParser::SimpletemplateidContext>(0);
}

tree::TerminalNode* JennyParser::NestednamespecifierContext::Template() {
  return getToken(JennyParser::Template, 0);
}


size_t JennyParser::NestednamespecifierContext::getRuleIndex() const {
  return JennyParser::RuleNestednamespecifier;
}

void JennyParser::NestednamespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestednamespecifier(this);
}

void JennyParser::NestednamespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestednamespecifier(this);
}


antlrcpp::Any JennyParser::NestednamespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNestednamespecifier(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::NestednamespecifierContext* JennyParser::nestednamespecifier() {
   return nestednamespecifier(0);
}

JennyParser::NestednamespecifierContext* JennyParser::nestednamespecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::NestednamespecifierContext *_localctx = _tracker.createInstance<NestednamespecifierContext>(_ctx, parentState);
  JennyParser::NestednamespecifierContext *previousContext = _localctx;
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, JennyParser::RuleNestednamespecifier, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(437);
      match(JennyParser::Doublecolon);
      break;
    }

    case 2: {
      setState(438);
      thetypename();
      setState(439);
      match(JennyParser::Doublecolon);
      break;
    }

    case 3: {
      setState(441);
      namespacename();
      setState(442);
      match(JennyParser::Doublecolon);
      break;
    }

    case 4: {
      setState(444);
      decltypespecifier();
      setState(445);
      match(JennyParser::Doublecolon);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(461);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(459);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(449);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(450);
          match(JennyParser::Identifier);
          setState(451);
          match(JennyParser::Doublecolon);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NestednamespecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestednamespecifier);
          setState(452);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(454);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == JennyParser::Template) {
            setState(453);
            match(JennyParser::Template);
          }
          setState(456);
          simpletemplateid();
          setState(457);
          match(JennyParser::Doublecolon);
          break;
        }

        } 
      }
      setState(463);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaexpressionContext ------------------------------------------------------------------

JennyParser::LambdaexpressionContext::LambdaexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::LambdaintroducerContext* JennyParser::LambdaexpressionContext::lambdaintroducer() {
  return getRuleContext<JennyParser::LambdaintroducerContext>(0);
}

JennyParser::CompoundstatementContext* JennyParser::LambdaexpressionContext::compoundstatement() {
  return getRuleContext<JennyParser::CompoundstatementContext>(0);
}

JennyParser::LambdadeclaratorContext* JennyParser::LambdaexpressionContext::lambdadeclarator() {
  return getRuleContext<JennyParser::LambdadeclaratorContext>(0);
}


size_t JennyParser::LambdaexpressionContext::getRuleIndex() const {
  return JennyParser::RuleLambdaexpression;
}

void JennyParser::LambdaexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaexpression(this);
}

void JennyParser::LambdaexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaexpression(this);
}


antlrcpp::Any JennyParser::LambdaexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLambdaexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::LambdaexpressionContext* JennyParser::lambdaexpression() {
  LambdaexpressionContext *_localctx = _tracker.createInstance<LambdaexpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, JennyParser::RuleLambdaexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    lambdaintroducer();
    setState(466);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::LeftParen) {
      setState(465);
      lambdadeclarator();
    }
    setState(468);
    compoundstatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaintroducerContext ------------------------------------------------------------------

JennyParser::LambdaintroducerContext::LambdaintroducerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::LambdacaptureContext* JennyParser::LambdaintroducerContext::lambdacapture() {
  return getRuleContext<JennyParser::LambdacaptureContext>(0);
}


size_t JennyParser::LambdaintroducerContext::getRuleIndex() const {
  return JennyParser::RuleLambdaintroducer;
}

void JennyParser::LambdaintroducerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaintroducer(this);
}

void JennyParser::LambdaintroducerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaintroducer(this);
}


antlrcpp::Any JennyParser::LambdaintroducerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLambdaintroducer(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::LambdaintroducerContext* JennyParser::lambdaintroducer() {
  LambdaintroducerContext *_localctx = _tracker.createInstance<LambdaintroducerContext>(_ctx, getState());
  enterRule(_localctx, 14, JennyParser::RuleLambdaintroducer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(JennyParser::LeftBracket);
    setState(472);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (JennyParser::This - 68))
      | (1ULL << (JennyParser::And - 68))
      | (1ULL << (JennyParser::Assign - 68)))) != 0) || _la == JennyParser::Identifier) {
      setState(471);
      lambdacapture();
    }
    setState(474);
    match(JennyParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdacaptureContext ------------------------------------------------------------------

JennyParser::LambdacaptureContext::LambdacaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::CapturedefaultContext* JennyParser::LambdacaptureContext::capturedefault() {
  return getRuleContext<JennyParser::CapturedefaultContext>(0);
}

JennyParser::CapturelistContext* JennyParser::LambdacaptureContext::capturelist() {
  return getRuleContext<JennyParser::CapturelistContext>(0);
}


size_t JennyParser::LambdacaptureContext::getRuleIndex() const {
  return JennyParser::RuleLambdacapture;
}

void JennyParser::LambdacaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdacapture(this);
}

void JennyParser::LambdacaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdacapture(this);
}


antlrcpp::Any JennyParser::LambdacaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLambdacapture(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::LambdacaptureContext* JennyParser::lambdacapture() {
  LambdacaptureContext *_localctx = _tracker.createInstance<LambdacaptureContext>(_ctx, getState());
  enterRule(_localctx, 16, JennyParser::RuleLambdacapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(482);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(476);
      capturedefault();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(477);
      capturelist(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(478);
      capturedefault();
      setState(479);
      match(JennyParser::Comma);
      setState(480);
      capturelist(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapturedefaultContext ------------------------------------------------------------------

JennyParser::CapturedefaultContext::CapturedefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JennyParser::CapturedefaultContext::getRuleIndex() const {
  return JennyParser::RuleCapturedefault;
}

void JennyParser::CapturedefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapturedefault(this);
}

void JennyParser::CapturedefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapturedefault(this);
}


antlrcpp::Any JennyParser::CapturedefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitCapturedefault(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::CapturedefaultContext* JennyParser::capturedefault() {
  CapturedefaultContext *_localctx = _tracker.createInstance<CapturedefaultContext>(_ctx, getState());
  enterRule(_localctx, 18, JennyParser::RuleCapturedefault);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(484);
    _la = _input->LA(1);
    if (!(_la == JennyParser::And

    || _la == JennyParser::Assign)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CapturelistContext ------------------------------------------------------------------

JennyParser::CapturelistContext::CapturelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::CaptureContext* JennyParser::CapturelistContext::capture() {
  return getRuleContext<JennyParser::CaptureContext>(0);
}

JennyParser::CapturelistContext* JennyParser::CapturelistContext::capturelist() {
  return getRuleContext<JennyParser::CapturelistContext>(0);
}


size_t JennyParser::CapturelistContext::getRuleIndex() const {
  return JennyParser::RuleCapturelist;
}

void JennyParser::CapturelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapturelist(this);
}

void JennyParser::CapturelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapturelist(this);
}


antlrcpp::Any JennyParser::CapturelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitCapturelist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::CapturelistContext* JennyParser::capturelist() {
   return capturelist(0);
}

JennyParser::CapturelistContext* JennyParser::capturelist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::CapturelistContext *_localctx = _tracker.createInstance<CapturelistContext>(_ctx, parentState);
  JennyParser::CapturelistContext *previousContext = _localctx;
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, JennyParser::RuleCapturelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(487);
    capture();
    setState(489);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(488);
      match(JennyParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(499);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<CapturelistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleCapturelist);
        setState(491);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(492);
        match(JennyParser::Comma);
        setState(493);
        capture();
        setState(495);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(494);
          match(JennyParser::Ellipsis);
          break;
        }

        } 
      }
      setState(501);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CaptureContext ------------------------------------------------------------------

JennyParser::CaptureContext::CaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::SimplecaptureContext* JennyParser::CaptureContext::simplecapture() {
  return getRuleContext<JennyParser::SimplecaptureContext>(0);
}

JennyParser::InitcaptureContext* JennyParser::CaptureContext::initcapture() {
  return getRuleContext<JennyParser::InitcaptureContext>(0);
}


size_t JennyParser::CaptureContext::getRuleIndex() const {
  return JennyParser::RuleCapture;
}

void JennyParser::CaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapture(this);
}

void JennyParser::CaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapture(this);
}


antlrcpp::Any JennyParser::CaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitCapture(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::CaptureContext* JennyParser::capture() {
  CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
  enterRule(_localctx, 22, JennyParser::RuleCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(502);
      simplecapture();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(503);
      initcapture();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimplecaptureContext ------------------------------------------------------------------

JennyParser::SimplecaptureContext::SimplecaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::SimplecaptureContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

tree::TerminalNode* JennyParser::SimplecaptureContext::This() {
  return getToken(JennyParser::This, 0);
}


size_t JennyParser::SimplecaptureContext::getRuleIndex() const {
  return JennyParser::RuleSimplecapture;
}

void JennyParser::SimplecaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimplecapture(this);
}

void JennyParser::SimplecaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimplecapture(this);
}


antlrcpp::Any JennyParser::SimplecaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitSimplecapture(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::SimplecaptureContext* JennyParser::simplecapture() {
  SimplecaptureContext *_localctx = _tracker.createInstance<SimplecaptureContext>(_ctx, getState());
  enterRule(_localctx, 24, JennyParser::RuleSimplecapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(510);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(506);
        match(JennyParser::Identifier);
        break;
      }

      case JennyParser::And: {
        enterOuterAlt(_localctx, 2);
        setState(507);
        match(JennyParser::And);
        setState(508);
        match(JennyParser::Identifier);
        break;
      }

      case JennyParser::This: {
        enterOuterAlt(_localctx, 3);
        setState(509);
        match(JennyParser::This);
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

//----------------- InitcaptureContext ------------------------------------------------------------------

JennyParser::InitcaptureContext::InitcaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::InitcaptureContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::InitializerContext* JennyParser::InitcaptureContext::initializer() {
  return getRuleContext<JennyParser::InitializerContext>(0);
}


size_t JennyParser::InitcaptureContext::getRuleIndex() const {
  return JennyParser::RuleInitcapture;
}

void JennyParser::InitcaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitcapture(this);
}

void JennyParser::InitcaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitcapture(this);
}


antlrcpp::Any JennyParser::InitcaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitInitcapture(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::InitcaptureContext* JennyParser::initcapture() {
  InitcaptureContext *_localctx = _tracker.createInstance<InitcaptureContext>(_ctx, getState());
  enterRule(_localctx, 26, JennyParser::RuleInitcapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(517);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(512);
        match(JennyParser::Identifier);
        setState(513);
        initializer();
        break;
      }

      case JennyParser::And: {
        enterOuterAlt(_localctx, 2);
        setState(514);
        match(JennyParser::And);
        setState(515);
        match(JennyParser::Identifier);
        setState(516);
        initializer();
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

//----------------- LambdadeclaratorContext ------------------------------------------------------------------

JennyParser::LambdadeclaratorContext::LambdadeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ParameterdeclarationclauseContext* JennyParser::LambdadeclaratorContext::parameterdeclarationclause() {
  return getRuleContext<JennyParser::ParameterdeclarationclauseContext>(0);
}

tree::TerminalNode* JennyParser::LambdadeclaratorContext::Mutable() {
  return getToken(JennyParser::Mutable, 0);
}

JennyParser::ExceptionspecificationContext* JennyParser::LambdadeclaratorContext::exceptionspecification() {
  return getRuleContext<JennyParser::ExceptionspecificationContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::LambdadeclaratorContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::TrailingreturntypeContext* JennyParser::LambdadeclaratorContext::trailingreturntype() {
  return getRuleContext<JennyParser::TrailingreturntypeContext>(0);
}


size_t JennyParser::LambdadeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleLambdadeclarator;
}

void JennyParser::LambdadeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdadeclarator(this);
}

void JennyParser::LambdadeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdadeclarator(this);
}


antlrcpp::Any JennyParser::LambdadeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLambdadeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::LambdadeclaratorContext* JennyParser::lambdadeclarator() {
  LambdadeclaratorContext *_localctx = _tracker.createInstance<LambdadeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 28, JennyParser::RuleLambdadeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(519);
    match(JennyParser::LeftParen);
    setState(520);
    parameterdeclarationclause();
    setState(521);
    match(JennyParser::RightParen);
    setState(523);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Mutable) {
      setState(522);
      match(JennyParser::Mutable);
    }
    setState(526);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Noexcept

    || _la == JennyParser::Throw) {
      setState(525);
      exceptionspecification();
    }
    setState(529);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
      setState(528);
      attributespecifierseq(0);
    }
    setState(532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Arrow) {
      setState(531);
      trailingreturntype();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixexpressionContext ------------------------------------------------------------------

JennyParser::PostfixexpressionContext::PostfixexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::PrimaryexpressionContext* JennyParser::PostfixexpressionContext::primaryexpression() {
  return getRuleContext<JennyParser::PrimaryexpressionContext>(0);
}

JennyParser::SimpletypespecifierContext* JennyParser::PostfixexpressionContext::simpletypespecifier() {
  return getRuleContext<JennyParser::SimpletypespecifierContext>(0);
}

JennyParser::ExpressionlistContext* JennyParser::PostfixexpressionContext::expressionlist() {
  return getRuleContext<JennyParser::ExpressionlistContext>(0);
}

JennyParser::TypenamespecifierContext* JennyParser::PostfixexpressionContext::typenamespecifier() {
  return getRuleContext<JennyParser::TypenamespecifierContext>(0);
}

JennyParser::BracedinitlistContext* JennyParser::PostfixexpressionContext::bracedinitlist() {
  return getRuleContext<JennyParser::BracedinitlistContext>(0);
}

tree::TerminalNode* JennyParser::PostfixexpressionContext::Dynamic_cast() {
  return getToken(JennyParser::Dynamic_cast, 0);
}

JennyParser::ThetypeidContext* JennyParser::PostfixexpressionContext::thetypeid() {
  return getRuleContext<JennyParser::ThetypeidContext>(0);
}

JennyParser::ExpressionContext* JennyParser::PostfixexpressionContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}

tree::TerminalNode* JennyParser::PostfixexpressionContext::Static_cast() {
  return getToken(JennyParser::Static_cast, 0);
}

tree::TerminalNode* JennyParser::PostfixexpressionContext::Reinterpret_cast() {
  return getToken(JennyParser::Reinterpret_cast, 0);
}

tree::TerminalNode* JennyParser::PostfixexpressionContext::Const_cast() {
  return getToken(JennyParser::Const_cast, 0);
}

JennyParser::TypeidofthetypeidContext* JennyParser::PostfixexpressionContext::typeidofthetypeid() {
  return getRuleContext<JennyParser::TypeidofthetypeidContext>(0);
}

JennyParser::PostfixexpressionContext* JennyParser::PostfixexpressionContext::postfixexpression() {
  return getRuleContext<JennyParser::PostfixexpressionContext>(0);
}

JennyParser::IdexpressionContext* JennyParser::PostfixexpressionContext::idexpression() {
  return getRuleContext<JennyParser::IdexpressionContext>(0);
}

tree::TerminalNode* JennyParser::PostfixexpressionContext::Template() {
  return getToken(JennyParser::Template, 0);
}

JennyParser::PseudodestructornameContext* JennyParser::PostfixexpressionContext::pseudodestructorname() {
  return getRuleContext<JennyParser::PseudodestructornameContext>(0);
}


size_t JennyParser::PostfixexpressionContext::getRuleIndex() const {
  return JennyParser::RulePostfixexpression;
}

void JennyParser::PostfixexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixexpression(this);
}

void JennyParser::PostfixexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixexpression(this);
}


antlrcpp::Any JennyParser::PostfixexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitPostfixexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::PostfixexpressionContext* JennyParser::postfixexpression() {
   return postfixexpression(0);
}

JennyParser::PostfixexpressionContext* JennyParser::postfixexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::PostfixexpressionContext *_localctx = _tracker.createInstance<PostfixexpressionContext>(_ctx, parentState);
  JennyParser::PostfixexpressionContext *previousContext = _localctx;
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, JennyParser::RulePostfixexpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(598);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(535);
      primaryexpression();
      break;
    }

    case 2: {
      setState(536);
      simpletypespecifier();
      setState(537);
      match(JennyParser::LeftParen);
      setState(539);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__0)
        | (1ULL << JennyParser::T__1)
        | (1ULL << JennyParser::Alignof)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Const_cast)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Delete)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Dynamic_cast)
        | (1ULL << JennyParser::False)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::New)
        | (1ULL << JennyParser::Noexcept)
        | (1ULL << JennyParser::Nullptr)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Reinterpret_cast)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
        | (1ULL << (JennyParser::This - 64))
        | (1ULL << (JennyParser::Throw - 64))
        | (1ULL << (JennyParser::True - 64))
        | (1ULL << (JennyParser::Typeid_ - 64))
        | (1ULL << (JennyParser::Typename_ - 64))
        | (1ULL << (JennyParser::Unsigned - 64))
        | (1ULL << (JennyParser::Void - 64))
        | (1ULL << (JennyParser::Wchar - 64))
        | (1ULL << (JennyParser::LeftParen - 64))
        | (1ULL << (JennyParser::LeftBracket - 64))
        | (1ULL << (JennyParser::LeftBrace - 64))
        | (1ULL << (JennyParser::Plus - 64))
        | (1ULL << (JennyParser::Minus - 64))
        | (1ULL << (JennyParser::Star - 64))
        | (1ULL << (JennyParser::And - 64))
        | (1ULL << (JennyParser::Or - 64))
        | (1ULL << (JennyParser::Tilde - 64))
        | (1ULL << (JennyParser::PlusPlus - 64))
        | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
        | (1ULL << (JennyParser::Identifier - 128))
        | (1ULL << (JennyParser::Integerliteral - 128))
        | (1ULL << (JennyParser::Characterliteral - 128))
        | (1ULL << (JennyParser::Floatingliteral - 128))
        | (1ULL << (JennyParser::Stringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
        | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(538);
        expressionlist();
      }
      setState(541);
      match(JennyParser::RightParen);
      break;
    }

    case 3: {
      setState(543);
      typenamespecifier();
      setState(544);
      match(JennyParser::LeftParen);
      setState(546);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__0)
        | (1ULL << JennyParser::T__1)
        | (1ULL << JennyParser::Alignof)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Const_cast)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Delete)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Dynamic_cast)
        | (1ULL << JennyParser::False)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::New)
        | (1ULL << JennyParser::Noexcept)
        | (1ULL << JennyParser::Nullptr)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Reinterpret_cast)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
        | (1ULL << (JennyParser::This - 64))
        | (1ULL << (JennyParser::Throw - 64))
        | (1ULL << (JennyParser::True - 64))
        | (1ULL << (JennyParser::Typeid_ - 64))
        | (1ULL << (JennyParser::Typename_ - 64))
        | (1ULL << (JennyParser::Unsigned - 64))
        | (1ULL << (JennyParser::Void - 64))
        | (1ULL << (JennyParser::Wchar - 64))
        | (1ULL << (JennyParser::LeftParen - 64))
        | (1ULL << (JennyParser::LeftBracket - 64))
        | (1ULL << (JennyParser::LeftBrace - 64))
        | (1ULL << (JennyParser::Plus - 64))
        | (1ULL << (JennyParser::Minus - 64))
        | (1ULL << (JennyParser::Star - 64))
        | (1ULL << (JennyParser::And - 64))
        | (1ULL << (JennyParser::Or - 64))
        | (1ULL << (JennyParser::Tilde - 64))
        | (1ULL << (JennyParser::PlusPlus - 64))
        | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
        | (1ULL << (JennyParser::Identifier - 128))
        | (1ULL << (JennyParser::Integerliteral - 128))
        | (1ULL << (JennyParser::Characterliteral - 128))
        | (1ULL << (JennyParser::Floatingliteral - 128))
        | (1ULL << (JennyParser::Stringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
        | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(545);
        expressionlist();
      }
      setState(548);
      match(JennyParser::RightParen);
      break;
    }

    case 4: {
      setState(550);
      simpletypespecifier();
      setState(551);
      bracedinitlist();
      break;
    }

    case 5: {
      setState(553);
      typenamespecifier();
      setState(554);
      bracedinitlist();
      break;
    }

    case 6: {
      setState(556);
      match(JennyParser::Dynamic_cast);
      setState(557);
      match(JennyParser::Less);
      setState(558);
      thetypeid();
      setState(559);
      match(JennyParser::Greater);
      setState(560);
      match(JennyParser::LeftParen);
      setState(561);
      expression(0);
      setState(562);
      match(JennyParser::RightParen);
      break;
    }

    case 7: {
      setState(564);
      match(JennyParser::Static_cast);
      setState(565);
      match(JennyParser::Less);
      setState(566);
      thetypeid();
      setState(567);
      match(JennyParser::Greater);
      setState(568);
      match(JennyParser::LeftParen);
      setState(569);
      expression(0);
      setState(570);
      match(JennyParser::RightParen);
      break;
    }

    case 8: {
      setState(572);
      match(JennyParser::Reinterpret_cast);
      setState(573);
      match(JennyParser::Less);
      setState(574);
      thetypeid();
      setState(575);
      match(JennyParser::Greater);
      setState(576);
      match(JennyParser::LeftParen);
      setState(577);
      expression(0);
      setState(578);
      match(JennyParser::RightParen);
      break;
    }

    case 9: {
      setState(580);
      match(JennyParser::Const_cast);
      setState(581);
      match(JennyParser::Less);
      setState(582);
      thetypeid();
      setState(583);
      match(JennyParser::Greater);
      setState(584);
      match(JennyParser::LeftParen);
      setState(585);
      expression(0);
      setState(586);
      match(JennyParser::RightParen);
      break;
    }

    case 10: {
      setState(588);
      typeidofthetypeid();
      setState(589);
      match(JennyParser::LeftParen);
      setState(590);
      expression(0);
      setState(591);
      match(JennyParser::RightParen);
      break;
    }

    case 11: {
      setState(593);
      typeidofthetypeid();
      setState(594);
      match(JennyParser::LeftParen);
      setState(595);
      thetypeid();
      setState(596);
      match(JennyParser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(640);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(638);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(600);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(601);
          match(JennyParser::LeftBracket);
          setState(602);
          expression(0);
          setState(603);
          match(JennyParser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(605);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(606);
          match(JennyParser::LeftBracket);
          setState(607);
          bracedinitlist();
          setState(608);
          match(JennyParser::RightBracket);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(610);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(611);
          match(JennyParser::LeftParen);
          setState(613);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JennyParser::T__0)
            | (1ULL << JennyParser::T__1)
            | (1ULL << JennyParser::Alignof)
            | (1ULL << JennyParser::Auto)
            | (1ULL << JennyParser::Bool)
            | (1ULL << JennyParser::Char)
            | (1ULL << JennyParser::Char16)
            | (1ULL << JennyParser::Char32)
            | (1ULL << JennyParser::Const_cast)
            | (1ULL << JennyParser::Decltype)
            | (1ULL << JennyParser::Delete)
            | (1ULL << JennyParser::Double)
            | (1ULL << JennyParser::Dynamic_cast)
            | (1ULL << JennyParser::False)
            | (1ULL << JennyParser::Float)
            | (1ULL << JennyParser::Int)
            | (1ULL << JennyParser::Long)
            | (1ULL << JennyParser::New)
            | (1ULL << JennyParser::Noexcept)
            | (1ULL << JennyParser::Nullptr)
            | (1ULL << JennyParser::Operator)
            | (1ULL << JennyParser::Reinterpret_cast)
            | (1ULL << JennyParser::Short)
            | (1ULL << JennyParser::Signed)
            | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
            | (1ULL << (JennyParser::This - 64))
            | (1ULL << (JennyParser::Throw - 64))
            | (1ULL << (JennyParser::True - 64))
            | (1ULL << (JennyParser::Typeid_ - 64))
            | (1ULL << (JennyParser::Typename_ - 64))
            | (1ULL << (JennyParser::Unsigned - 64))
            | (1ULL << (JennyParser::Void - 64))
            | (1ULL << (JennyParser::Wchar - 64))
            | (1ULL << (JennyParser::LeftParen - 64))
            | (1ULL << (JennyParser::LeftBracket - 64))
            | (1ULL << (JennyParser::LeftBrace - 64))
            | (1ULL << (JennyParser::Plus - 64))
            | (1ULL << (JennyParser::Minus - 64))
            | (1ULL << (JennyParser::Star - 64))
            | (1ULL << (JennyParser::And - 64))
            | (1ULL << (JennyParser::Or - 64))
            | (1ULL << (JennyParser::Tilde - 64))
            | (1ULL << (JennyParser::PlusPlus - 64))
            | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
            | (1ULL << (JennyParser::Identifier - 128))
            | (1ULL << (JennyParser::Integerliteral - 128))
            | (1ULL << (JennyParser::Characterliteral - 128))
            | (1ULL << (JennyParser::Floatingliteral - 128))
            | (1ULL << (JennyParser::Stringliteral - 128))
            | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
            | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
            | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
            | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
            setState(612);
            expressionlist();
          }
          setState(615);
          match(JennyParser::RightParen);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(616);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(617);
          match(JennyParser::Dot);
          setState(619);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == JennyParser::Template) {
            setState(618);
            match(JennyParser::Template);
          }
          setState(621);
          idexpression();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(622);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(623);
          match(JennyParser::Arrow);
          setState(625);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == JennyParser::Template) {
            setState(624);
            match(JennyParser::Template);
          }
          setState(627);
          idexpression();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(628);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(629);
          match(JennyParser::Dot);
          setState(630);
          pseudodestructorname();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(631);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(632);
          match(JennyParser::Arrow);
          setState(633);
          pseudodestructorname();
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(634);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(635);
          match(JennyParser::PlusPlus);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<PostfixexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixexpression);
          setState(636);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(637);
          match(JennyParser::MinusMinus);
          break;
        }

        } 
      }
      setState(642);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeidofexprContext ------------------------------------------------------------------

JennyParser::TypeidofexprContext::TypeidofexprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TypeidofexprContext::Typeid_() {
  return getToken(JennyParser::Typeid_, 0);
}


size_t JennyParser::TypeidofexprContext::getRuleIndex() const {
  return JennyParser::RuleTypeidofexpr;
}

void JennyParser::TypeidofexprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeidofexpr(this);
}

void JennyParser::TypeidofexprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeidofexpr(this);
}


antlrcpp::Any JennyParser::TypeidofexprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTypeidofexpr(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TypeidofexprContext* JennyParser::typeidofexpr() {
  TypeidofexprContext *_localctx = _tracker.createInstance<TypeidofexprContext>(_ctx, getState());
  enterRule(_localctx, 32, JennyParser::RuleTypeidofexpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(643);
    match(JennyParser::Typeid_);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeidofthetypeidContext ------------------------------------------------------------------

JennyParser::TypeidofthetypeidContext::TypeidofthetypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TypeidofthetypeidContext::Typeid_() {
  return getToken(JennyParser::Typeid_, 0);
}


size_t JennyParser::TypeidofthetypeidContext::getRuleIndex() const {
  return JennyParser::RuleTypeidofthetypeid;
}

void JennyParser::TypeidofthetypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeidofthetypeid(this);
}

void JennyParser::TypeidofthetypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeidofthetypeid(this);
}


antlrcpp::Any JennyParser::TypeidofthetypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTypeidofthetypeid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TypeidofthetypeidContext* JennyParser::typeidofthetypeid() {
  TypeidofthetypeidContext *_localctx = _tracker.createInstance<TypeidofthetypeidContext>(_ctx, getState());
  enterRule(_localctx, 34, JennyParser::RuleTypeidofthetypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(645);
    match(JennyParser::Typeid_);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionlistContext ------------------------------------------------------------------

JennyParser::ExpressionlistContext::ExpressionlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::InitializerlistContext* JennyParser::ExpressionlistContext::initializerlist() {
  return getRuleContext<JennyParser::InitializerlistContext>(0);
}


size_t JennyParser::ExpressionlistContext::getRuleIndex() const {
  return JennyParser::RuleExpressionlist;
}

void JennyParser::ExpressionlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionlist(this);
}

void JennyParser::ExpressionlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionlist(this);
}


antlrcpp::Any JennyParser::ExpressionlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitExpressionlist(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ExpressionlistContext* JennyParser::expressionlist() {
  ExpressionlistContext *_localctx = _tracker.createInstance<ExpressionlistContext>(_ctx, getState());
  enterRule(_localctx, 36, JennyParser::RuleExpressionlist);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(647);
    initializerlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudodestructornameContext ------------------------------------------------------------------

JennyParser::PseudodestructornameContext::PseudodestructornameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JennyParser::ThetypenameContext *> JennyParser::PseudodestructornameContext::thetypename() {
  return getRuleContexts<JennyParser::ThetypenameContext>();
}

JennyParser::ThetypenameContext* JennyParser::PseudodestructornameContext::thetypename(size_t i) {
  return getRuleContext<JennyParser::ThetypenameContext>(i);
}

JennyParser::NestednamespecifierContext* JennyParser::PseudodestructornameContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}

tree::TerminalNode* JennyParser::PseudodestructornameContext::Template() {
  return getToken(JennyParser::Template, 0);
}

JennyParser::SimpletemplateidContext* JennyParser::PseudodestructornameContext::simpletemplateid() {
  return getRuleContext<JennyParser::SimpletemplateidContext>(0);
}

JennyParser::DecltypespecifierContext* JennyParser::PseudodestructornameContext::decltypespecifier() {
  return getRuleContext<JennyParser::DecltypespecifierContext>(0);
}


size_t JennyParser::PseudodestructornameContext::getRuleIndex() const {
  return JennyParser::RulePseudodestructorname;
}

void JennyParser::PseudodestructornameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPseudodestructorname(this);
}

void JennyParser::PseudodestructornameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPseudodestructorname(this);
}


antlrcpp::Any JennyParser::PseudodestructornameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitPseudodestructorname(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::PseudodestructornameContext* JennyParser::pseudodestructorname() {
  PseudodestructornameContext *_localctx = _tracker.createInstance<PseudodestructornameContext>(_ctx, getState());
  enterRule(_localctx, 38, JennyParser::RulePseudodestructorname);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(671);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(650);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(649);
        nestednamespecifier(0);
        break;
      }

      }
      setState(652);
      thetypename();
      setState(653);
      match(JennyParser::Doublecolon);
      setState(654);
      match(JennyParser::Tilde);
      setState(655);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(657);
      nestednamespecifier(0);
      setState(658);
      match(JennyParser::Template);
      setState(659);
      simpletemplateid();
      setState(660);
      match(JennyParser::Doublecolon);
      setState(661);
      match(JennyParser::Tilde);
      setState(662);
      thetypename();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(665);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Decltype || _la == JennyParser::Doublecolon

      || _la == JennyParser::Identifier) {
        setState(664);
        nestednamespecifier(0);
      }
      setState(667);
      match(JennyParser::Tilde);
      setState(668);
      thetypename();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(669);
      match(JennyParser::Tilde);
      setState(670);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryexpressionContext ------------------------------------------------------------------

JennyParser::UnaryexpressionContext::UnaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::PostfixexpressionContext* JennyParser::UnaryexpressionContext::postfixexpression() {
  return getRuleContext<JennyParser::PostfixexpressionContext>(0);
}

JennyParser::CastexpressionContext* JennyParser::UnaryexpressionContext::castexpression() {
  return getRuleContext<JennyParser::CastexpressionContext>(0);
}

JennyParser::UnaryoperatorContext* JennyParser::UnaryexpressionContext::unaryoperator() {
  return getRuleContext<JennyParser::UnaryoperatorContext>(0);
}

tree::TerminalNode* JennyParser::UnaryexpressionContext::Sizeof() {
  return getToken(JennyParser::Sizeof, 0);
}

JennyParser::UnaryexpressionContext* JennyParser::UnaryexpressionContext::unaryexpression() {
  return getRuleContext<JennyParser::UnaryexpressionContext>(0);
}

JennyParser::ThetypeidContext* JennyParser::UnaryexpressionContext::thetypeid() {
  return getRuleContext<JennyParser::ThetypeidContext>(0);
}

tree::TerminalNode* JennyParser::UnaryexpressionContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

tree::TerminalNode* JennyParser::UnaryexpressionContext::Alignof() {
  return getToken(JennyParser::Alignof, 0);
}

JennyParser::NoexceptexpressionContext* JennyParser::UnaryexpressionContext::noexceptexpression() {
  return getRuleContext<JennyParser::NoexceptexpressionContext>(0);
}

JennyParser::NewexpressionContext* JennyParser::UnaryexpressionContext::newexpression() {
  return getRuleContext<JennyParser::NewexpressionContext>(0);
}

JennyParser::DeleteexpressionContext* JennyParser::UnaryexpressionContext::deleteexpression() {
  return getRuleContext<JennyParser::DeleteexpressionContext>(0);
}


size_t JennyParser::UnaryexpressionContext::getRuleIndex() const {
  return JennyParser::RuleUnaryexpression;
}

void JennyParser::UnaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryexpression(this);
}

void JennyParser::UnaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryexpression(this);
}


antlrcpp::Any JennyParser::UnaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitUnaryexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::UnaryexpressionContext* JennyParser::unaryexpression() {
  UnaryexpressionContext *_localctx = _tracker.createInstance<UnaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, JennyParser::RuleUnaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(701);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(673);
      postfixexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(674);
      match(JennyParser::PlusPlus);
      setState(675);
      castexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(676);
      match(JennyParser::MinusMinus);
      setState(677);
      castexpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(678);
      unaryoperator();
      setState(679);
      castexpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(681);
      match(JennyParser::Sizeof);
      setState(682);
      unaryexpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(683);
      match(JennyParser::Sizeof);
      setState(684);
      match(JennyParser::LeftParen);
      setState(685);
      thetypeid();
      setState(686);
      match(JennyParser::RightParen);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(688);
      match(JennyParser::Sizeof);
      setState(689);
      match(JennyParser::Ellipsis);
      setState(690);
      match(JennyParser::LeftParen);
      setState(691);
      match(JennyParser::Identifier);
      setState(692);
      match(JennyParser::RightParen);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(693);
      match(JennyParser::Alignof);
      setState(694);
      match(JennyParser::LeftParen);
      setState(695);
      thetypeid();
      setState(696);
      match(JennyParser::RightParen);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(698);
      noexceptexpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(699);
      newexpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(700);
      deleteexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryoperatorContext ------------------------------------------------------------------

JennyParser::UnaryoperatorContext::UnaryoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JennyParser::UnaryoperatorContext::getRuleIndex() const {
  return JennyParser::RuleUnaryoperator;
}

void JennyParser::UnaryoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryoperator(this);
}

void JennyParser::UnaryoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryoperator(this);
}


antlrcpp::Any JennyParser::UnaryoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitUnaryoperator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::UnaryoperatorContext* JennyParser::unaryoperator() {
  UnaryoperatorContext *_localctx = _tracker.createInstance<UnaryoperatorContext>(_ctx, getState());
  enterRule(_localctx, 42, JennyParser::RuleUnaryoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(703);
    _la = _input->LA(1);
    if (!(_la == JennyParser::T__0

    || _la == JennyParser::T__1 || ((((_la - 90) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 90)) & ((1ULL << (JennyParser::Plus - 90))
      | (1ULL << (JennyParser::Minus - 90))
      | (1ULL << (JennyParser::Star - 90))
      | (1ULL << (JennyParser::And - 90))
      | (1ULL << (JennyParser::Or - 90))
      | (1ULL << (JennyParser::Tilde - 90)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewexpressionContext ------------------------------------------------------------------

JennyParser::NewexpressionContext::NewexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::NewexpressionContext::New() {
  return getToken(JennyParser::New, 0);
}

JennyParser::NewtypeidContext* JennyParser::NewexpressionContext::newtypeid() {
  return getRuleContext<JennyParser::NewtypeidContext>(0);
}

JennyParser::NewplacementContext* JennyParser::NewexpressionContext::newplacement() {
  return getRuleContext<JennyParser::NewplacementContext>(0);
}

JennyParser::NewinitializerContext* JennyParser::NewexpressionContext::newinitializer() {
  return getRuleContext<JennyParser::NewinitializerContext>(0);
}

JennyParser::ThetypeidContext* JennyParser::NewexpressionContext::thetypeid() {
  return getRuleContext<JennyParser::ThetypeidContext>(0);
}


size_t JennyParser::NewexpressionContext::getRuleIndex() const {
  return JennyParser::RuleNewexpression;
}

void JennyParser::NewexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewexpression(this);
}

void JennyParser::NewexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewexpression(this);
}


antlrcpp::Any JennyParser::NewexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNewexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NewexpressionContext* JennyParser::newexpression() {
  NewexpressionContext *_localctx = _tracker.createInstance<NewexpressionContext>(_ctx, getState());
  enterRule(_localctx, 44, JennyParser::RuleNewexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(729);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(706);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Doublecolon) {
        setState(705);
        match(JennyParser::Doublecolon);
      }
      setState(708);
      match(JennyParser::New);
      setState(710);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::LeftParen) {
        setState(709);
        newplacement();
      }
      setState(712);
      newtypeid();
      setState(714);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(713);
        newinitializer();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(717);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Doublecolon) {
        setState(716);
        match(JennyParser::Doublecolon);
      }
      setState(719);
      match(JennyParser::New);
      setState(721);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(720);
        newplacement();
        break;
      }

      }
      setState(723);
      match(JennyParser::LeftParen);
      setState(724);
      thetypeid();
      setState(725);
      match(JennyParser::RightParen);
      setState(727);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(726);
        newinitializer();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewplacementContext ------------------------------------------------------------------

JennyParser::NewplacementContext::NewplacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ExpressionlistContext* JennyParser::NewplacementContext::expressionlist() {
  return getRuleContext<JennyParser::ExpressionlistContext>(0);
}


size_t JennyParser::NewplacementContext::getRuleIndex() const {
  return JennyParser::RuleNewplacement;
}

void JennyParser::NewplacementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewplacement(this);
}

void JennyParser::NewplacementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewplacement(this);
}


antlrcpp::Any JennyParser::NewplacementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNewplacement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NewplacementContext* JennyParser::newplacement() {
  NewplacementContext *_localctx = _tracker.createInstance<NewplacementContext>(_ctx, getState());
  enterRule(_localctx, 46, JennyParser::RuleNewplacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(731);
    match(JennyParser::LeftParen);
    setState(732);
    expressionlist();
    setState(733);
    match(JennyParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewtypeidContext ------------------------------------------------------------------

JennyParser::NewtypeidContext::NewtypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TypespecifierseqContext* JennyParser::NewtypeidContext::typespecifierseq() {
  return getRuleContext<JennyParser::TypespecifierseqContext>(0);
}

JennyParser::NewdeclaratorContext* JennyParser::NewtypeidContext::newdeclarator() {
  return getRuleContext<JennyParser::NewdeclaratorContext>(0);
}


size_t JennyParser::NewtypeidContext::getRuleIndex() const {
  return JennyParser::RuleNewtypeid;
}

void JennyParser::NewtypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewtypeid(this);
}

void JennyParser::NewtypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewtypeid(this);
}


antlrcpp::Any JennyParser::NewtypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNewtypeid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NewtypeidContext* JennyParser::newtypeid() {
  NewtypeidContext *_localctx = _tracker.createInstance<NewtypeidContext>(_ctx, getState());
  enterRule(_localctx, 48, JennyParser::RuleNewtypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(735);
    typespecifierseq();
    setState(737);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(736);
      newdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewdeclaratorContext ------------------------------------------------------------------

JennyParser::NewdeclaratorContext::NewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::PtroperatorContext* JennyParser::NewdeclaratorContext::ptroperator() {
  return getRuleContext<JennyParser::PtroperatorContext>(0);
}

JennyParser::NewdeclaratorContext* JennyParser::NewdeclaratorContext::newdeclarator() {
  return getRuleContext<JennyParser::NewdeclaratorContext>(0);
}

JennyParser::NoptrnewdeclaratorContext* JennyParser::NewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<JennyParser::NoptrnewdeclaratorContext>(0);
}


size_t JennyParser::NewdeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleNewdeclarator;
}

void JennyParser::NewdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewdeclarator(this);
}

void JennyParser::NewdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewdeclarator(this);
}


antlrcpp::Any JennyParser::NewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNewdeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NewdeclaratorContext* JennyParser::newdeclarator() {
  NewdeclaratorContext *_localctx = _tracker.createInstance<NewdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 50, JennyParser::RuleNewdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(744);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::T__2:
      case JennyParser::Decltype:
      case JennyParser::Star:
      case JennyParser::And:
      case JennyParser::Doublecolon:
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(739);
        ptroperator();
        setState(741);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          setState(740);
          newdeclarator();
          break;
        }

        }
        break;
      }

      case JennyParser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(743);
        noptrnewdeclarator(0);
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

//----------------- NoptrnewdeclaratorContext ------------------------------------------------------------------

JennyParser::NoptrnewdeclaratorContext::NoptrnewdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ExpressionContext* JennyParser::NoptrnewdeclaratorContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::NoptrnewdeclaratorContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::NoptrnewdeclaratorContext* JennyParser::NoptrnewdeclaratorContext::noptrnewdeclarator() {
  return getRuleContext<JennyParser::NoptrnewdeclaratorContext>(0);
}

JennyParser::ConstantexpressionContext* JennyParser::NoptrnewdeclaratorContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}


size_t JennyParser::NoptrnewdeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleNoptrnewdeclarator;
}

void JennyParser::NoptrnewdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrnewdeclarator(this);
}

void JennyParser::NoptrnewdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrnewdeclarator(this);
}


antlrcpp::Any JennyParser::NoptrnewdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNoptrnewdeclarator(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::NoptrnewdeclaratorContext* JennyParser::noptrnewdeclarator() {
   return noptrnewdeclarator(0);
}

JennyParser::NoptrnewdeclaratorContext* JennyParser::noptrnewdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::NoptrnewdeclaratorContext *_localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(_ctx, parentState);
  JennyParser::NoptrnewdeclaratorContext *previousContext = _localctx;
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, JennyParser::RuleNoptrnewdeclarator, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(747);
    match(JennyParser::LeftBracket);
    setState(748);
    expression(0);
    setState(749);
    match(JennyParser::RightBracket);
    setState(751);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(750);
      attributespecifierseq(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(762);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoptrnewdeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoptrnewdeclarator);
        setState(753);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(754);
        match(JennyParser::LeftBracket);
        setState(755);
        constantexpression();
        setState(756);
        match(JennyParser::RightBracket);
        setState(758);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
        case 1: {
          setState(757);
          attributespecifierseq(0);
          break;
        }

        } 
      }
      setState(764);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NewinitializerContext ------------------------------------------------------------------

JennyParser::NewinitializerContext::NewinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ExpressionlistContext* JennyParser::NewinitializerContext::expressionlist() {
  return getRuleContext<JennyParser::ExpressionlistContext>(0);
}

JennyParser::BracedinitlistContext* JennyParser::NewinitializerContext::bracedinitlist() {
  return getRuleContext<JennyParser::BracedinitlistContext>(0);
}


size_t JennyParser::NewinitializerContext::getRuleIndex() const {
  return JennyParser::RuleNewinitializer;
}

void JennyParser::NewinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewinitializer(this);
}

void JennyParser::NewinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewinitializer(this);
}


antlrcpp::Any JennyParser::NewinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNewinitializer(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NewinitializerContext* JennyParser::newinitializer() {
  NewinitializerContext *_localctx = _tracker.createInstance<NewinitializerContext>(_ctx, getState());
  enterRule(_localctx, 54, JennyParser::RuleNewinitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(771);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(765);
        match(JennyParser::LeftParen);
        setState(767);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << JennyParser::T__0)
          | (1ULL << JennyParser::T__1)
          | (1ULL << JennyParser::Alignof)
          | (1ULL << JennyParser::Auto)
          | (1ULL << JennyParser::Bool)
          | (1ULL << JennyParser::Char)
          | (1ULL << JennyParser::Char16)
          | (1ULL << JennyParser::Char32)
          | (1ULL << JennyParser::Const_cast)
          | (1ULL << JennyParser::Decltype)
          | (1ULL << JennyParser::Delete)
          | (1ULL << JennyParser::Double)
          | (1ULL << JennyParser::Dynamic_cast)
          | (1ULL << JennyParser::False)
          | (1ULL << JennyParser::Float)
          | (1ULL << JennyParser::Int)
          | (1ULL << JennyParser::Long)
          | (1ULL << JennyParser::New)
          | (1ULL << JennyParser::Noexcept)
          | (1ULL << JennyParser::Nullptr)
          | (1ULL << JennyParser::Operator)
          | (1ULL << JennyParser::Reinterpret_cast)
          | (1ULL << JennyParser::Short)
          | (1ULL << JennyParser::Signed)
          | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
          | (1ULL << (JennyParser::This - 64))
          | (1ULL << (JennyParser::Throw - 64))
          | (1ULL << (JennyParser::True - 64))
          | (1ULL << (JennyParser::Typeid_ - 64))
          | (1ULL << (JennyParser::Typename_ - 64))
          | (1ULL << (JennyParser::Unsigned - 64))
          | (1ULL << (JennyParser::Void - 64))
          | (1ULL << (JennyParser::Wchar - 64))
          | (1ULL << (JennyParser::LeftParen - 64))
          | (1ULL << (JennyParser::LeftBracket - 64))
          | (1ULL << (JennyParser::LeftBrace - 64))
          | (1ULL << (JennyParser::Plus - 64))
          | (1ULL << (JennyParser::Minus - 64))
          | (1ULL << (JennyParser::Star - 64))
          | (1ULL << (JennyParser::And - 64))
          | (1ULL << (JennyParser::Or - 64))
          | (1ULL << (JennyParser::Tilde - 64))
          | (1ULL << (JennyParser::PlusPlus - 64))
          | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
          | (1ULL << (JennyParser::Identifier - 128))
          | (1ULL << (JennyParser::Integerliteral - 128))
          | (1ULL << (JennyParser::Characterliteral - 128))
          | (1ULL << (JennyParser::Floatingliteral - 128))
          | (1ULL << (JennyParser::Stringliteral - 128))
          | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
          | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
          | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
          | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
          setState(766);
          expressionlist();
        }
        setState(769);
        match(JennyParser::RightParen);
        break;
      }

      case JennyParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(770);
        bracedinitlist();
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

//----------------- DeleteexpressionContext ------------------------------------------------------------------

JennyParser::DeleteexpressionContext::DeleteexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::DeleteexpressionContext::Delete() {
  return getToken(JennyParser::Delete, 0);
}

JennyParser::CastexpressionContext* JennyParser::DeleteexpressionContext::castexpression() {
  return getRuleContext<JennyParser::CastexpressionContext>(0);
}


size_t JennyParser::DeleteexpressionContext::getRuleIndex() const {
  return JennyParser::RuleDeleteexpression;
}

void JennyParser::DeleteexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteexpression(this);
}

void JennyParser::DeleteexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteexpression(this);
}


antlrcpp::Any JennyParser::DeleteexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDeleteexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::DeleteexpressionContext* JennyParser::deleteexpression() {
  DeleteexpressionContext *_localctx = _tracker.createInstance<DeleteexpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, JennyParser::RuleDeleteexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(785);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(774);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Doublecolon) {
        setState(773);
        match(JennyParser::Doublecolon);
      }
      setState(776);
      match(JennyParser::Delete);
      setState(777);
      castexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(779);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Doublecolon) {
        setState(778);
        match(JennyParser::Doublecolon);
      }
      setState(781);
      match(JennyParser::Delete);
      setState(782);
      match(JennyParser::LeftBracket);
      setState(783);
      match(JennyParser::RightBracket);
      setState(784);
      castexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoexceptexpressionContext ------------------------------------------------------------------

JennyParser::NoexceptexpressionContext::NoexceptexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::NoexceptexpressionContext::Noexcept() {
  return getToken(JennyParser::Noexcept, 0);
}

JennyParser::ExpressionContext* JennyParser::NoexceptexpressionContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}


size_t JennyParser::NoexceptexpressionContext::getRuleIndex() const {
  return JennyParser::RuleNoexceptexpression;
}

void JennyParser::NoexceptexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoexceptexpression(this);
}

void JennyParser::NoexceptexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoexceptexpression(this);
}


antlrcpp::Any JennyParser::NoexceptexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNoexceptexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NoexceptexpressionContext* JennyParser::noexceptexpression() {
  NoexceptexpressionContext *_localctx = _tracker.createInstance<NoexceptexpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, JennyParser::RuleNoexceptexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(787);
    match(JennyParser::Noexcept);
    setState(788);
    match(JennyParser::LeftParen);
    setState(789);
    expression(0);
    setState(790);
    match(JennyParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastexpressionContext ------------------------------------------------------------------

JennyParser::CastexpressionContext::CastexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::UnaryexpressionContext* JennyParser::CastexpressionContext::unaryexpression() {
  return getRuleContext<JennyParser::UnaryexpressionContext>(0);
}

JennyParser::ThetypeidContext* JennyParser::CastexpressionContext::thetypeid() {
  return getRuleContext<JennyParser::ThetypeidContext>(0);
}

JennyParser::CastexpressionContext* JennyParser::CastexpressionContext::castexpression() {
  return getRuleContext<JennyParser::CastexpressionContext>(0);
}


size_t JennyParser::CastexpressionContext::getRuleIndex() const {
  return JennyParser::RuleCastexpression;
}

void JennyParser::CastexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastexpression(this);
}

void JennyParser::CastexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastexpression(this);
}


antlrcpp::Any JennyParser::CastexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitCastexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::CastexpressionContext* JennyParser::castexpression() {
  CastexpressionContext *_localctx = _tracker.createInstance<CastexpressionContext>(_ctx, getState());
  enterRule(_localctx, 60, JennyParser::RuleCastexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(798);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(792);
      unaryexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(793);
      match(JennyParser::LeftParen);
      setState(794);
      thetypeid();
      setState(795);
      match(JennyParser::RightParen);
      setState(796);
      castexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PmexpressionContext ------------------------------------------------------------------

JennyParser::PmexpressionContext::PmexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::CastexpressionContext* JennyParser::PmexpressionContext::castexpression() {
  return getRuleContext<JennyParser::CastexpressionContext>(0);
}

JennyParser::PmexpressionContext* JennyParser::PmexpressionContext::pmexpression() {
  return getRuleContext<JennyParser::PmexpressionContext>(0);
}


size_t JennyParser::PmexpressionContext::getRuleIndex() const {
  return JennyParser::RulePmexpression;
}

void JennyParser::PmexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPmexpression(this);
}

void JennyParser::PmexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPmexpression(this);
}


antlrcpp::Any JennyParser::PmexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitPmexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::PmexpressionContext* JennyParser::pmexpression() {
   return pmexpression(0);
}

JennyParser::PmexpressionContext* JennyParser::pmexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::PmexpressionContext *_localctx = _tracker.createInstance<PmexpressionContext>(_ctx, parentState);
  JennyParser::PmexpressionContext *previousContext = _localctx;
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, JennyParser::RulePmexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(801);
    castexpression();
    _ctx->stop = _input->LT(-1);
    setState(811);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(809);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(803);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(804);
          match(JennyParser::DotStar);
          setState(805);
          castexpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PmexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePmexpression);
          setState(806);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(807);
          match(JennyParser::ArrowStar);
          setState(808);
          castexpression();
          break;
        }

        } 
      }
      setState(813);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeexpressionContext ------------------------------------------------------------------

JennyParser::MultiplicativeexpressionContext::MultiplicativeexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::PmexpressionContext* JennyParser::MultiplicativeexpressionContext::pmexpression() {
  return getRuleContext<JennyParser::PmexpressionContext>(0);
}

JennyParser::MultiplicativeexpressionContext* JennyParser::MultiplicativeexpressionContext::multiplicativeexpression() {
  return getRuleContext<JennyParser::MultiplicativeexpressionContext>(0);
}


size_t JennyParser::MultiplicativeexpressionContext::getRuleIndex() const {
  return JennyParser::RuleMultiplicativeexpression;
}

void JennyParser::MultiplicativeexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeexpression(this);
}

void JennyParser::MultiplicativeexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeexpression(this);
}


antlrcpp::Any JennyParser::MultiplicativeexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::MultiplicativeexpressionContext* JennyParser::multiplicativeexpression() {
   return multiplicativeexpression(0);
}

JennyParser::MultiplicativeexpressionContext* JennyParser::multiplicativeexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::MultiplicativeexpressionContext *_localctx = _tracker.createInstance<MultiplicativeexpressionContext>(_ctx, parentState);
  JennyParser::MultiplicativeexpressionContext *previousContext = _localctx;
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, JennyParser::RuleMultiplicativeexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(815);
    pmexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(828);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(826);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(817);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(818);
          match(JennyParser::Star);
          setState(819);
          pmexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(820);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(821);
          match(JennyParser::Div);
          setState(822);
          pmexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeexpression);
          setState(823);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(824);
          match(JennyParser::Mod);
          setState(825);
          pmexpression(0);
          break;
        }

        } 
      }
      setState(830);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveexpressionContext ------------------------------------------------------------------

JennyParser::AdditiveexpressionContext::AdditiveexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::MultiplicativeexpressionContext* JennyParser::AdditiveexpressionContext::multiplicativeexpression() {
  return getRuleContext<JennyParser::MultiplicativeexpressionContext>(0);
}

JennyParser::AdditiveexpressionContext* JennyParser::AdditiveexpressionContext::additiveexpression() {
  return getRuleContext<JennyParser::AdditiveexpressionContext>(0);
}


size_t JennyParser::AdditiveexpressionContext::getRuleIndex() const {
  return JennyParser::RuleAdditiveexpression;
}

void JennyParser::AdditiveexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveexpression(this);
}

void JennyParser::AdditiveexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveexpression(this);
}


antlrcpp::Any JennyParser::AdditiveexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAdditiveexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::AdditiveexpressionContext* JennyParser::additiveexpression() {
   return additiveexpression(0);
}

JennyParser::AdditiveexpressionContext* JennyParser::additiveexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::AdditiveexpressionContext *_localctx = _tracker.createInstance<AdditiveexpressionContext>(_ctx, parentState);
  JennyParser::AdditiveexpressionContext *previousContext = _localctx;
  size_t startState = 66;
  enterRecursionRule(_localctx, 66, JennyParser::RuleAdditiveexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(832);
    multiplicativeexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(842);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(840);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(834);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(835);
          match(JennyParser::Plus);
          setState(836);
          multiplicativeexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveexpression);
          setState(837);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(838);
          match(JennyParser::Minus);
          setState(839);
          multiplicativeexpression(0);
          break;
        }

        } 
      }
      setState(844);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftexpressionContext ------------------------------------------------------------------

JennyParser::ShiftexpressionContext::ShiftexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AdditiveexpressionContext* JennyParser::ShiftexpressionContext::additiveexpression() {
  return getRuleContext<JennyParser::AdditiveexpressionContext>(0);
}

JennyParser::ShiftexpressionContext* JennyParser::ShiftexpressionContext::shiftexpression() {
  return getRuleContext<JennyParser::ShiftexpressionContext>(0);
}

JennyParser::ShiftoperatorContext* JennyParser::ShiftexpressionContext::shiftoperator() {
  return getRuleContext<JennyParser::ShiftoperatorContext>(0);
}


size_t JennyParser::ShiftexpressionContext::getRuleIndex() const {
  return JennyParser::RuleShiftexpression;
}

void JennyParser::ShiftexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftexpression(this);
}

void JennyParser::ShiftexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftexpression(this);
}


antlrcpp::Any JennyParser::ShiftexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitShiftexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::ShiftexpressionContext* JennyParser::shiftexpression() {
   return shiftexpression(0);
}

JennyParser::ShiftexpressionContext* JennyParser::shiftexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::ShiftexpressionContext *_localctx = _tracker.createInstance<ShiftexpressionContext>(_ctx, parentState);
  JennyParser::ShiftexpressionContext *previousContext = _localctx;
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, JennyParser::RuleShiftexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(846);
    additiveexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(854);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ShiftexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleShiftexpression);
        setState(848);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(849);
        shiftoperator();
        setState(850);
        additiveexpression(0); 
      }
      setState(856);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftoperatorContext ------------------------------------------------------------------

JennyParser::ShiftoperatorContext::ShiftoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::ShiftoperatorContext::RightShift() {
  return getToken(JennyParser::RightShift, 0);
}

tree::TerminalNode* JennyParser::ShiftoperatorContext::LeftShift() {
  return getToken(JennyParser::LeftShift, 0);
}


size_t JennyParser::ShiftoperatorContext::getRuleIndex() const {
  return JennyParser::RuleShiftoperator;
}

void JennyParser::ShiftoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftoperator(this);
}

void JennyParser::ShiftoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftoperator(this);
}


antlrcpp::Any JennyParser::ShiftoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitShiftoperator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ShiftoperatorContext* JennyParser::shiftoperator() {
  ShiftoperatorContext *_localctx = _tracker.createInstance<ShiftoperatorContext>(_ctx, getState());
  enterRule(_localctx, 70, JennyParser::RuleShiftoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(857);
    _la = _input->LA(1);
    if (!(_la == JennyParser::LeftShift

    || _la == JennyParser::RightShift)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalexpressionContext ------------------------------------------------------------------

JennyParser::RelationalexpressionContext::RelationalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ShiftexpressionContext* JennyParser::RelationalexpressionContext::shiftexpression() {
  return getRuleContext<JennyParser::ShiftexpressionContext>(0);
}

JennyParser::RelationalexpressionContext* JennyParser::RelationalexpressionContext::relationalexpression() {
  return getRuleContext<JennyParser::RelationalexpressionContext>(0);
}


size_t JennyParser::RelationalexpressionContext::getRuleIndex() const {
  return JennyParser::RuleRelationalexpression;
}

void JennyParser::RelationalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalexpression(this);
}

void JennyParser::RelationalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalexpression(this);
}


antlrcpp::Any JennyParser::RelationalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitRelationalexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::RelationalexpressionContext* JennyParser::relationalexpression() {
   return relationalexpression(0);
}

JennyParser::RelationalexpressionContext* JennyParser::relationalexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::RelationalexpressionContext *_localctx = _tracker.createInstance<RelationalexpressionContext>(_ctx, parentState);
  JennyParser::RelationalexpressionContext *previousContext = _localctx;
  size_t startState = 72;
  enterRecursionRule(_localctx, 72, JennyParser::RuleRelationalexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(860);
    shiftexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(876);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(874);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(862);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(863);
          match(JennyParser::Less);
          setState(864);
          shiftexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(865);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(866);
          match(JennyParser::Greater);
          setState(867);
          shiftexpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(868);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(869);
          match(JennyParser::LessEqual);
          setState(870);
          shiftexpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalexpression);
          setState(871);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(872);
          match(JennyParser::GreaterEqual);
          setState(873);
          shiftexpression(0);
          break;
        }

        } 
      }
      setState(878);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityexpressionContext ------------------------------------------------------------------

JennyParser::EqualityexpressionContext::EqualityexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::RelationalexpressionContext* JennyParser::EqualityexpressionContext::relationalexpression() {
  return getRuleContext<JennyParser::RelationalexpressionContext>(0);
}

JennyParser::EqualityexpressionContext* JennyParser::EqualityexpressionContext::equalityexpression() {
  return getRuleContext<JennyParser::EqualityexpressionContext>(0);
}


size_t JennyParser::EqualityexpressionContext::getRuleIndex() const {
  return JennyParser::RuleEqualityexpression;
}

void JennyParser::EqualityexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityexpression(this);
}

void JennyParser::EqualityexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityexpression(this);
}


antlrcpp::Any JennyParser::EqualityexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEqualityexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::EqualityexpressionContext* JennyParser::equalityexpression() {
   return equalityexpression(0);
}

JennyParser::EqualityexpressionContext* JennyParser::equalityexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::EqualityexpressionContext *_localctx = _tracker.createInstance<EqualityexpressionContext>(_ctx, parentState);
  JennyParser::EqualityexpressionContext *previousContext = _localctx;
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, JennyParser::RuleEqualityexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(880);
    relationalexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(890);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(888);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(882);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(883);
          match(JennyParser::Equal);
          setState(884);
          relationalexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityexpression);
          setState(885);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(886);
          match(JennyParser::NotEqual);
          setState(887);
          relationalexpression(0);
          break;
        }

        } 
      }
      setState(892);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndexpressionContext ------------------------------------------------------------------

JennyParser::AndexpressionContext::AndexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::EqualityexpressionContext* JennyParser::AndexpressionContext::equalityexpression() {
  return getRuleContext<JennyParser::EqualityexpressionContext>(0);
}

JennyParser::AndexpressionContext* JennyParser::AndexpressionContext::andexpression() {
  return getRuleContext<JennyParser::AndexpressionContext>(0);
}


size_t JennyParser::AndexpressionContext::getRuleIndex() const {
  return JennyParser::RuleAndexpression;
}

void JennyParser::AndexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndexpression(this);
}

void JennyParser::AndexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndexpression(this);
}


antlrcpp::Any JennyParser::AndexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAndexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::AndexpressionContext* JennyParser::andexpression() {
   return andexpression(0);
}

JennyParser::AndexpressionContext* JennyParser::andexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::AndexpressionContext *_localctx = _tracker.createInstance<AndexpressionContext>(_ctx, parentState);
  JennyParser::AndexpressionContext *previousContext = _localctx;
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, JennyParser::RuleAndexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(894);
    equalityexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(901);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndexpression);
        setState(896);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(897);
        match(JennyParser::And);
        setState(898);
        equalityexpression(0); 
      }
      setState(903);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveorexpressionContext ------------------------------------------------------------------

JennyParser::ExclusiveorexpressionContext::ExclusiveorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AndexpressionContext* JennyParser::ExclusiveorexpressionContext::andexpression() {
  return getRuleContext<JennyParser::AndexpressionContext>(0);
}

JennyParser::ExclusiveorexpressionContext* JennyParser::ExclusiveorexpressionContext::exclusiveorexpression() {
  return getRuleContext<JennyParser::ExclusiveorexpressionContext>(0);
}


size_t JennyParser::ExclusiveorexpressionContext::getRuleIndex() const {
  return JennyParser::RuleExclusiveorexpression;
}

void JennyParser::ExclusiveorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveorexpression(this);
}

void JennyParser::ExclusiveorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveorexpression(this);
}


antlrcpp::Any JennyParser::ExclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitExclusiveorexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::ExclusiveorexpressionContext* JennyParser::exclusiveorexpression() {
   return exclusiveorexpression(0);
}

JennyParser::ExclusiveorexpressionContext* JennyParser::exclusiveorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::ExclusiveorexpressionContext *_localctx = _tracker.createInstance<ExclusiveorexpressionContext>(_ctx, parentState);
  JennyParser::ExclusiveorexpressionContext *previousContext = _localctx;
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, JennyParser::RuleExclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(905);
    andexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(912);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveorexpression);
        setState(907);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(908);
        match(JennyParser::Caret);
        setState(909);
        andexpression(0); 
      }
      setState(914);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveorexpressionContext ------------------------------------------------------------------

JennyParser::InclusiveorexpressionContext::InclusiveorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ExclusiveorexpressionContext* JennyParser::InclusiveorexpressionContext::exclusiveorexpression() {
  return getRuleContext<JennyParser::ExclusiveorexpressionContext>(0);
}

JennyParser::InclusiveorexpressionContext* JennyParser::InclusiveorexpressionContext::inclusiveorexpression() {
  return getRuleContext<JennyParser::InclusiveorexpressionContext>(0);
}


size_t JennyParser::InclusiveorexpressionContext::getRuleIndex() const {
  return JennyParser::RuleInclusiveorexpression;
}

void JennyParser::InclusiveorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveorexpression(this);
}

void JennyParser::InclusiveorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveorexpression(this);
}


antlrcpp::Any JennyParser::InclusiveorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitInclusiveorexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::InclusiveorexpressionContext* JennyParser::inclusiveorexpression() {
   return inclusiveorexpression(0);
}

JennyParser::InclusiveorexpressionContext* JennyParser::inclusiveorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::InclusiveorexpressionContext *_localctx = _tracker.createInstance<InclusiveorexpressionContext>(_ctx, parentState);
  JennyParser::InclusiveorexpressionContext *previousContext = _localctx;
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, JennyParser::RuleInclusiveorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(916);
    exclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(923);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveorexpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveorexpression);
        setState(918);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(919);
        match(JennyParser::Or);
        setState(920);
        exclusiveorexpression(0); 
      }
      setState(925);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalandexpressionContext ------------------------------------------------------------------

JennyParser::LogicalandexpressionContext::LogicalandexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::InclusiveorexpressionContext* JennyParser::LogicalandexpressionContext::inclusiveorexpression() {
  return getRuleContext<JennyParser::InclusiveorexpressionContext>(0);
}

JennyParser::LogicalandexpressionContext* JennyParser::LogicalandexpressionContext::logicalandexpression() {
  return getRuleContext<JennyParser::LogicalandexpressionContext>(0);
}


size_t JennyParser::LogicalandexpressionContext::getRuleIndex() const {
  return JennyParser::RuleLogicalandexpression;
}

void JennyParser::LogicalandexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalandexpression(this);
}

void JennyParser::LogicalandexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalandexpression(this);
}


antlrcpp::Any JennyParser::LogicalandexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLogicalandexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::LogicalandexpressionContext* JennyParser::logicalandexpression() {
   return logicalandexpression(0);
}

JennyParser::LogicalandexpressionContext* JennyParser::logicalandexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::LogicalandexpressionContext *_localctx = _tracker.createInstance<LogicalandexpressionContext>(_ctx, parentState);
  JennyParser::LogicalandexpressionContext *previousContext = _localctx;
  size_t startState = 82;
  enterRecursionRule(_localctx, 82, JennyParser::RuleLogicalandexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(927);
    inclusiveorexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(937);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(935);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
          setState(929);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(930);
          match(JennyParser::T__2);
          setState(931);
          inclusiveorexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<LogicalandexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalandexpression);
          setState(932);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(933);
          match(JennyParser::T__3);
          setState(934);
          inclusiveorexpression(0);
          break;
        }

        } 
      }
      setState(939);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalorexpressionContext ------------------------------------------------------------------

JennyParser::LogicalorexpressionContext::LogicalorexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::LogicalandexpressionContext* JennyParser::LogicalorexpressionContext::logicalandexpression() {
  return getRuleContext<JennyParser::LogicalandexpressionContext>(0);
}

JennyParser::LogicalorexpressionContext* JennyParser::LogicalorexpressionContext::logicalorexpression() {
  return getRuleContext<JennyParser::LogicalorexpressionContext>(0);
}


size_t JennyParser::LogicalorexpressionContext::getRuleIndex() const {
  return JennyParser::RuleLogicalorexpression;
}

void JennyParser::LogicalorexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalorexpression(this);
}

void JennyParser::LogicalorexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalorexpression(this);
}


antlrcpp::Any JennyParser::LogicalorexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLogicalorexpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::LogicalorexpressionContext* JennyParser::logicalorexpression() {
   return logicalorexpression(0);
}

JennyParser::LogicalorexpressionContext* JennyParser::logicalorexpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::LogicalorexpressionContext *_localctx = _tracker.createInstance<LogicalorexpressionContext>(_ctx, parentState);
  JennyParser::LogicalorexpressionContext *previousContext = _localctx;
  size_t startState = 84;
  enterRecursionRule(_localctx, 84, JennyParser::RuleLogicalorexpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(941);
    logicalandexpression(0);
    _ctx->stop = _input->LT(-1);
    setState(951);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(949);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
          setState(943);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(944);
          match(JennyParser::T__4);
          setState(945);
          logicalandexpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<LogicalorexpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleLogicalorexpression);
          setState(946);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(947);
          match(JennyParser::T__5);
          setState(948);
          logicalandexpression(0);
          break;
        }

        } 
      }
      setState(953);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalexpressionContext ------------------------------------------------------------------

JennyParser::ConditionalexpressionContext::ConditionalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::LogicalorexpressionContext* JennyParser::ConditionalexpressionContext::logicalorexpression() {
  return getRuleContext<JennyParser::LogicalorexpressionContext>(0);
}

JennyParser::ExpressionContext* JennyParser::ConditionalexpressionContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}

JennyParser::AssignmentexpressionContext* JennyParser::ConditionalexpressionContext::assignmentexpression() {
  return getRuleContext<JennyParser::AssignmentexpressionContext>(0);
}


size_t JennyParser::ConditionalexpressionContext::getRuleIndex() const {
  return JennyParser::RuleConditionalexpression;
}

void JennyParser::ConditionalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalexpression(this);
}

void JennyParser::ConditionalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalexpression(this);
}


antlrcpp::Any JennyParser::ConditionalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitConditionalexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ConditionalexpressionContext* JennyParser::conditionalexpression() {
  ConditionalexpressionContext *_localctx = _tracker.createInstance<ConditionalexpressionContext>(_ctx, getState());
  enterRule(_localctx, 86, JennyParser::RuleConditionalexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(961);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(954);
      logicalorexpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(955);
      logicalorexpression(0);
      setState(956);
      match(JennyParser::Question);
      setState(957);
      expression(0);
      setState(958);
      match(JennyParser::Colon);
      setState(959);
      assignmentexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentexpressionContext ------------------------------------------------------------------

JennyParser::AssignmentexpressionContext::AssignmentexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ConditionalexpressionContext* JennyParser::AssignmentexpressionContext::conditionalexpression() {
  return getRuleContext<JennyParser::ConditionalexpressionContext>(0);
}

JennyParser::LogicalorexpressionContext* JennyParser::AssignmentexpressionContext::logicalorexpression() {
  return getRuleContext<JennyParser::LogicalorexpressionContext>(0);
}

JennyParser::AssignmentoperatorContext* JennyParser::AssignmentexpressionContext::assignmentoperator() {
  return getRuleContext<JennyParser::AssignmentoperatorContext>(0);
}

JennyParser::InitializerclauseContext* JennyParser::AssignmentexpressionContext::initializerclause() {
  return getRuleContext<JennyParser::InitializerclauseContext>(0);
}

JennyParser::ThrowexpressionContext* JennyParser::AssignmentexpressionContext::throwexpression() {
  return getRuleContext<JennyParser::ThrowexpressionContext>(0);
}


size_t JennyParser::AssignmentexpressionContext::getRuleIndex() const {
  return JennyParser::RuleAssignmentexpression;
}

void JennyParser::AssignmentexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentexpression(this);
}

void JennyParser::AssignmentexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentexpression(this);
}


antlrcpp::Any JennyParser::AssignmentexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAssignmentexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AssignmentexpressionContext* JennyParser::assignmentexpression() {
  AssignmentexpressionContext *_localctx = _tracker.createInstance<AssignmentexpressionContext>(_ctx, getState());
  enterRule(_localctx, 88, JennyParser::RuleAssignmentexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(969);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(963);
      conditionalexpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(964);
      logicalorexpression(0);
      setState(965);
      assignmentoperator();
      setState(966);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(968);
      throwexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentoperatorContext ------------------------------------------------------------------

JennyParser::AssignmentoperatorContext::AssignmentoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::AssignmentoperatorContext::RightShiftAssign() {
  return getToken(JennyParser::RightShiftAssign, 0);
}

tree::TerminalNode* JennyParser::AssignmentoperatorContext::LeftShiftAssign() {
  return getToken(JennyParser::LeftShiftAssign, 0);
}


size_t JennyParser::AssignmentoperatorContext::getRuleIndex() const {
  return JennyParser::RuleAssignmentoperator;
}

void JennyParser::AssignmentoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentoperator(this);
}

void JennyParser::AssignmentoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentoperator(this);
}


antlrcpp::Any JennyParser::AssignmentoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAssignmentoperator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AssignmentoperatorContext* JennyParser::assignmentoperator() {
  AssignmentoperatorContext *_localctx = _tracker.createInstance<AssignmentoperatorContext>(_ctx, getState());
  enterRule(_localctx, 90, JennyParser::RuleAssignmentoperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(971);
    _la = _input->LA(1);
    if (!(((((_la - 100) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 100)) & ((1ULL << (JennyParser::Assign - 100))
      | (1ULL << (JennyParser::PlusAssign - 100))
      | (1ULL << (JennyParser::MinusAssign - 100))
      | (1ULL << (JennyParser::StarAssign - 100))
      | (1ULL << (JennyParser::DivAssign - 100))
      | (1ULL << (JennyParser::ModAssign - 100))
      | (1ULL << (JennyParser::XorAssign - 100))
      | (1ULL << (JennyParser::AndAssign - 100))
      | (1ULL << (JennyParser::OrAssign - 100))
      | (1ULL << (JennyParser::LeftShiftAssign - 100))
      | (1ULL << (JennyParser::RightShiftAssign - 100)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

JennyParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AssignmentexpressionContext* JennyParser::ExpressionContext::assignmentexpression() {
  return getRuleContext<JennyParser::AssignmentexpressionContext>(0);
}

JennyParser::ExpressionContext* JennyParser::ExpressionContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}


size_t JennyParser::ExpressionContext::getRuleIndex() const {
  return JennyParser::RuleExpression;
}

void JennyParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void JennyParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any JennyParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::ExpressionContext* JennyParser::expression() {
   return expression(0);
}

JennyParser::ExpressionContext* JennyParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  JennyParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 92;
  enterRecursionRule(_localctx, 92, JennyParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(974);
    assignmentexpression();
    _ctx->stop = _input->LT(-1);
    setState(981);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(976);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(977);
        match(JennyParser::Comma);
        setState(978);
        assignmentexpression(); 
      }
      setState(983);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantexpressionContext ------------------------------------------------------------------

JennyParser::ConstantexpressionContext::ConstantexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ConditionalexpressionContext* JennyParser::ConstantexpressionContext::conditionalexpression() {
  return getRuleContext<JennyParser::ConditionalexpressionContext>(0);
}


size_t JennyParser::ConstantexpressionContext::getRuleIndex() const {
  return JennyParser::RuleConstantexpression;
}

void JennyParser::ConstantexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantexpression(this);
}

void JennyParser::ConstantexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantexpression(this);
}


antlrcpp::Any JennyParser::ConstantexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitConstantexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ConstantexpressionContext* JennyParser::constantexpression() {
  ConstantexpressionContext *_localctx = _tracker.createInstance<ConstantexpressionContext>(_ctx, getState());
  enterRule(_localctx, 94, JennyParser::RuleConstantexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(984);
    conditionalexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

JennyParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::LabeledstatementContext* JennyParser::StatementContext::labeledstatement() {
  return getRuleContext<JennyParser::LabeledstatementContext>(0);
}

JennyParser::ExpressionstatementContext* JennyParser::StatementContext::expressionstatement() {
  return getRuleContext<JennyParser::ExpressionstatementContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::StatementContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::CompoundstatementContext* JennyParser::StatementContext::compoundstatement() {
  return getRuleContext<JennyParser::CompoundstatementContext>(0);
}

JennyParser::SelectionstatementContext* JennyParser::StatementContext::selectionstatement() {
  return getRuleContext<JennyParser::SelectionstatementContext>(0);
}

JennyParser::IterationstatementContext* JennyParser::StatementContext::iterationstatement() {
  return getRuleContext<JennyParser::IterationstatementContext>(0);
}

JennyParser::JumpstatementContext* JennyParser::StatementContext::jumpstatement() {
  return getRuleContext<JennyParser::JumpstatementContext>(0);
}

JennyParser::DeclarationstatementContext* JennyParser::StatementContext::declarationstatement() {
  return getRuleContext<JennyParser::DeclarationstatementContext>(0);
}

JennyParser::TryblockContext* JennyParser::StatementContext::tryblock() {
  return getRuleContext<JennyParser::TryblockContext>(0);
}


size_t JennyParser::StatementContext::getRuleIndex() const {
  return JennyParser::RuleStatement;
}

void JennyParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void JennyParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any JennyParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::StatementContext* JennyParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 96, JennyParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1012);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(986);
      labeledstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(988);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
      case 1: {
        setState(987);
        attributespecifierseq(0);
        break;
      }

      }
      setState(990);
      expressionstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(992);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(991);
        attributespecifierseq(0);
      }
      setState(994);
      compoundstatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(996);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(995);
        attributespecifierseq(0);
      }
      setState(998);
      selectionstatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1000);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(999);
        attributespecifierseq(0);
      }
      setState(1002);
      iterationstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1004);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1003);
        attributespecifierseq(0);
      }
      setState(1006);
      jumpstatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1007);
      declarationstatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1009);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1008);
        attributespecifierseq(0);
      }
      setState(1011);
      tryblock();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledstatementContext ------------------------------------------------------------------

JennyParser::LabeledstatementContext::LabeledstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::LabeledstatementContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::StatementContext* JennyParser::LabeledstatementContext::statement() {
  return getRuleContext<JennyParser::StatementContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::LabeledstatementContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* JennyParser::LabeledstatementContext::Case() {
  return getToken(JennyParser::Case, 0);
}

JennyParser::ConstantexpressionContext* JennyParser::LabeledstatementContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* JennyParser::LabeledstatementContext::Default() {
  return getToken(JennyParser::Default, 0);
}


size_t JennyParser::LabeledstatementContext::getRuleIndex() const {
  return JennyParser::RuleLabeledstatement;
}

void JennyParser::LabeledstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledstatement(this);
}

void JennyParser::LabeledstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledstatement(this);
}


antlrcpp::Any JennyParser::LabeledstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLabeledstatement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::LabeledstatementContext* JennyParser::labeledstatement() {
  LabeledstatementContext *_localctx = _tracker.createInstance<LabeledstatementContext>(_ctx, getState());
  enterRule(_localctx, 98, JennyParser::RuleLabeledstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1034);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1015);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1014);
        attributespecifierseq(0);
      }
      setState(1017);
      match(JennyParser::Identifier);
      setState(1018);
      match(JennyParser::Colon);
      setState(1019);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1021);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1020);
        attributespecifierseq(0);
      }
      setState(1023);
      match(JennyParser::Case);
      setState(1024);
      constantexpression();
      setState(1025);
      match(JennyParser::Colon);
      setState(1026);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1029);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1028);
        attributespecifierseq(0);
      }
      setState(1031);
      match(JennyParser::Default);
      setState(1032);
      match(JennyParser::Colon);
      setState(1033);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionstatementContext ------------------------------------------------------------------

JennyParser::ExpressionstatementContext::ExpressionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ExpressionContext* JennyParser::ExpressionstatementContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}


size_t JennyParser::ExpressionstatementContext::getRuleIndex() const {
  return JennyParser::RuleExpressionstatement;
}

void JennyParser::ExpressionstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionstatement(this);
}

void JennyParser::ExpressionstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionstatement(this);
}


antlrcpp::Any JennyParser::ExpressionstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitExpressionstatement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ExpressionstatementContext* JennyParser::expressionstatement() {
  ExpressionstatementContext *_localctx = _tracker.createInstance<ExpressionstatementContext>(_ctx, getState());
  enterRule(_localctx, 100, JennyParser::RuleExpressionstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1037);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JennyParser::T__0)
      | (1ULL << JennyParser::T__1)
      | (1ULL << JennyParser::Alignof)
      | (1ULL << JennyParser::Auto)
      | (1ULL << JennyParser::Bool)
      | (1ULL << JennyParser::Char)
      | (1ULL << JennyParser::Char16)
      | (1ULL << JennyParser::Char32)
      | (1ULL << JennyParser::Const_cast)
      | (1ULL << JennyParser::Decltype)
      | (1ULL << JennyParser::Delete)
      | (1ULL << JennyParser::Double)
      | (1ULL << JennyParser::Dynamic_cast)
      | (1ULL << JennyParser::False)
      | (1ULL << JennyParser::Float)
      | (1ULL << JennyParser::Int)
      | (1ULL << JennyParser::Long)
      | (1ULL << JennyParser::New)
      | (1ULL << JennyParser::Noexcept)
      | (1ULL << JennyParser::Nullptr)
      | (1ULL << JennyParser::Operator)
      | (1ULL << JennyParser::Reinterpret_cast)
      | (1ULL << JennyParser::Short)
      | (1ULL << JennyParser::Signed)
      | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
      | (1ULL << (JennyParser::This - 64))
      | (1ULL << (JennyParser::Throw - 64))
      | (1ULL << (JennyParser::True - 64))
      | (1ULL << (JennyParser::Typeid_ - 64))
      | (1ULL << (JennyParser::Typename_ - 64))
      | (1ULL << (JennyParser::Unsigned - 64))
      | (1ULL << (JennyParser::Void - 64))
      | (1ULL << (JennyParser::Wchar - 64))
      | (1ULL << (JennyParser::LeftParen - 64))
      | (1ULL << (JennyParser::LeftBracket - 64))
      | (1ULL << (JennyParser::Plus - 64))
      | (1ULL << (JennyParser::Minus - 64))
      | (1ULL << (JennyParser::Star - 64))
      | (1ULL << (JennyParser::And - 64))
      | (1ULL << (JennyParser::Or - 64))
      | (1ULL << (JennyParser::Tilde - 64))
      | (1ULL << (JennyParser::PlusPlus - 64))
      | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
      | (1ULL << (JennyParser::Identifier - 128))
      | (1ULL << (JennyParser::Integerliteral - 128))
      | (1ULL << (JennyParser::Characterliteral - 128))
      | (1ULL << (JennyParser::Floatingliteral - 128))
      | (1ULL << (JennyParser::Stringliteral - 128))
      | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
      | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
      | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
      | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
      setState(1036);
      expression(0);
    }
    setState(1039);
    match(JennyParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundstatementContext ------------------------------------------------------------------

JennyParser::CompoundstatementContext::CompoundstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::StatementseqContext* JennyParser::CompoundstatementContext::statementseq() {
  return getRuleContext<JennyParser::StatementseqContext>(0);
}


size_t JennyParser::CompoundstatementContext::getRuleIndex() const {
  return JennyParser::RuleCompoundstatement;
}

void JennyParser::CompoundstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundstatement(this);
}

void JennyParser::CompoundstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundstatement(this);
}


antlrcpp::Any JennyParser::CompoundstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitCompoundstatement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::CompoundstatementContext* JennyParser::compoundstatement() {
  CompoundstatementContext *_localctx = _tracker.createInstance<CompoundstatementContext>(_ctx, getState());
  enterRule(_localctx, 102, JennyParser::RuleCompoundstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1041);
    match(JennyParser::LeftBrace);
    setState(1043);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JennyParser::T__0)
      | (1ULL << JennyParser::T__1)
      | (1ULL << JennyParser::T__2)
      | (1ULL << JennyParser::Alignas)
      | (1ULL << JennyParser::Alignof)
      | (1ULL << JennyParser::Asm)
      | (1ULL << JennyParser::Auto)
      | (1ULL << JennyParser::Bool)
      | (1ULL << JennyParser::Break)
      | (1ULL << JennyParser::Case)
      | (1ULL << JennyParser::Char)
      | (1ULL << JennyParser::Char16)
      | (1ULL << JennyParser::Char32)
      | (1ULL << JennyParser::Class)
      | (1ULL << JennyParser::Const)
      | (1ULL << JennyParser::Constexpr)
      | (1ULL << JennyParser::Const_cast)
      | (1ULL << JennyParser::Continue)
      | (1ULL << JennyParser::Decltype)
      | (1ULL << JennyParser::Default)
      | (1ULL << JennyParser::Delete)
      | (1ULL << JennyParser::Do)
      | (1ULL << JennyParser::Double)
      | (1ULL << JennyParser::Dynamic_cast)
      | (1ULL << JennyParser::Enum)
      | (1ULL << JennyParser::Explicit)
      | (1ULL << JennyParser::Extern)
      | (1ULL << JennyParser::False)
      | (1ULL << JennyParser::Float)
      | (1ULL << JennyParser::For)
      | (1ULL << JennyParser::Friend)
      | (1ULL << JennyParser::Goto)
      | (1ULL << JennyParser::If)
      | (1ULL << JennyParser::Inline)
      | (1ULL << JennyParser::Int)
      | (1ULL << JennyParser::Long)
      | (1ULL << JennyParser::Mutable)
      | (1ULL << JennyParser::Namespace)
      | (1ULL << JennyParser::New)
      | (1ULL << JennyParser::Noexcept)
      | (1ULL << JennyParser::Nullptr)
      | (1ULL << JennyParser::Operator)
      | (1ULL << JennyParser::Register)
      | (1ULL << JennyParser::Reinterpret_cast)
      | (1ULL << JennyParser::Return)
      | (1ULL << JennyParser::Short)
      | (1ULL << JennyParser::Signed)
      | (1ULL << JennyParser::Sizeof)
      | (1ULL << JennyParser::Static)
      | (1ULL << JennyParser::Static_assert))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
      | (1ULL << (JennyParser::Struct - 64))
      | (1ULL << (JennyParser::Switch - 64))
      | (1ULL << (JennyParser::This - 64))
      | (1ULL << (JennyParser::Thread_local - 64))
      | (1ULL << (JennyParser::Throw - 64))
      | (1ULL << (JennyParser::True - 64))
      | (1ULL << (JennyParser::Try - 64))
      | (1ULL << (JennyParser::Typedef - 64))
      | (1ULL << (JennyParser::Typeid_ - 64))
      | (1ULL << (JennyParser::Typename_ - 64))
      | (1ULL << (JennyParser::Union - 64))
      | (1ULL << (JennyParser::Unsigned - 64))
      | (1ULL << (JennyParser::Using - 64))
      | (1ULL << (JennyParser::Virtual - 64))
      | (1ULL << (JennyParser::Void - 64))
      | (1ULL << (JennyParser::Volatile - 64))
      | (1ULL << (JennyParser::Wchar - 64))
      | (1ULL << (JennyParser::While - 64))
      | (1ULL << (JennyParser::LeftParen - 64))
      | (1ULL << (JennyParser::LeftBracket - 64))
      | (1ULL << (JennyParser::LeftBrace - 64))
      | (1ULL << (JennyParser::Plus - 64))
      | (1ULL << (JennyParser::Minus - 64))
      | (1ULL << (JennyParser::Star - 64))
      | (1ULL << (JennyParser::And - 64))
      | (1ULL << (JennyParser::Or - 64))
      | (1ULL << (JennyParser::Tilde - 64))
      | (1ULL << (JennyParser::PlusPlus - 64))
      | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
      | (1ULL << (JennyParser::Semi - 128))
      | (1ULL << (JennyParser::Ellipsis - 128))
      | (1ULL << (JennyParser::Identifier - 128))
      | (1ULL << (JennyParser::Integerliteral - 128))
      | (1ULL << (JennyParser::Characterliteral - 128))
      | (1ULL << (JennyParser::Floatingliteral - 128))
      | (1ULL << (JennyParser::Stringliteral - 128))
      | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
      | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
      | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
      | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
      setState(1042);
      statementseq(0);
    }
    setState(1045);
    match(JennyParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementseqContext ------------------------------------------------------------------

JennyParser::StatementseqContext::StatementseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::StatementContext* JennyParser::StatementseqContext::statement() {
  return getRuleContext<JennyParser::StatementContext>(0);
}

JennyParser::StatementseqContext* JennyParser::StatementseqContext::statementseq() {
  return getRuleContext<JennyParser::StatementseqContext>(0);
}


size_t JennyParser::StatementseqContext::getRuleIndex() const {
  return JennyParser::RuleStatementseq;
}

void JennyParser::StatementseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementseq(this);
}

void JennyParser::StatementseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementseq(this);
}


antlrcpp::Any JennyParser::StatementseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitStatementseq(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::StatementseqContext* JennyParser::statementseq() {
   return statementseq(0);
}

JennyParser::StatementseqContext* JennyParser::statementseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::StatementseqContext *_localctx = _tracker.createInstance<StatementseqContext>(_ctx, parentState);
  JennyParser::StatementseqContext *previousContext = _localctx;
  size_t startState = 104;
  enterRecursionRule(_localctx, 104, JennyParser::RuleStatementseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1048);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(1054);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementseq);
        setState(1050);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1051);
        statement(); 
      }
      setState(1056);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SelectionstatementContext ------------------------------------------------------------------

JennyParser::SelectionstatementContext::SelectionstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::SelectionstatementContext::If() {
  return getToken(JennyParser::If, 0);
}

JennyParser::ConditionContext* JennyParser::SelectionstatementContext::condition() {
  return getRuleContext<JennyParser::ConditionContext>(0);
}

std::vector<JennyParser::StatementContext *> JennyParser::SelectionstatementContext::statement() {
  return getRuleContexts<JennyParser::StatementContext>();
}

JennyParser::StatementContext* JennyParser::SelectionstatementContext::statement(size_t i) {
  return getRuleContext<JennyParser::StatementContext>(i);
}

tree::TerminalNode* JennyParser::SelectionstatementContext::Else() {
  return getToken(JennyParser::Else, 0);
}

tree::TerminalNode* JennyParser::SelectionstatementContext::Switch() {
  return getToken(JennyParser::Switch, 0);
}


size_t JennyParser::SelectionstatementContext::getRuleIndex() const {
  return JennyParser::RuleSelectionstatement;
}

void JennyParser::SelectionstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionstatement(this);
}

void JennyParser::SelectionstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionstatement(this);
}


antlrcpp::Any JennyParser::SelectionstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitSelectionstatement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::SelectionstatementContext* JennyParser::selectionstatement() {
  SelectionstatementContext *_localctx = _tracker.createInstance<SelectionstatementContext>(_ctx, getState());
  enterRule(_localctx, 106, JennyParser::RuleSelectionstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1077);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1057);
      match(JennyParser::If);
      setState(1058);
      match(JennyParser::LeftParen);
      setState(1059);
      condition();
      setState(1060);
      match(JennyParser::RightParen);
      setState(1061);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1063);
      match(JennyParser::If);
      setState(1064);
      match(JennyParser::LeftParen);
      setState(1065);
      condition();
      setState(1066);
      match(JennyParser::RightParen);
      setState(1067);
      statement();
      setState(1068);
      match(JennyParser::Else);
      setState(1069);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1071);
      match(JennyParser::Switch);
      setState(1072);
      match(JennyParser::LeftParen);
      setState(1073);
      condition();
      setState(1074);
      match(JennyParser::RightParen);
      setState(1075);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

JennyParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ExpressionContext* JennyParser::ConditionContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}

JennyParser::DeclspecifierseqContext* JennyParser::ConditionContext::declspecifierseq() {
  return getRuleContext<JennyParser::DeclspecifierseqContext>(0);
}

JennyParser::DeclaratorContext* JennyParser::ConditionContext::declarator() {
  return getRuleContext<JennyParser::DeclaratorContext>(0);
}

JennyParser::InitializerclauseContext* JennyParser::ConditionContext::initializerclause() {
  return getRuleContext<JennyParser::InitializerclauseContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::ConditionContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::BracedinitlistContext* JennyParser::ConditionContext::bracedinitlist() {
  return getRuleContext<JennyParser::BracedinitlistContext>(0);
}


size_t JennyParser::ConditionContext::getRuleIndex() const {
  return JennyParser::RuleCondition;
}

void JennyParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void JennyParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any JennyParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ConditionContext* JennyParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 108, JennyParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1095);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1079);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1081);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1080);
        attributespecifierseq(0);
      }
      setState(1083);
      declspecifierseq();
      setState(1084);
      declarator();
      setState(1085);
      match(JennyParser::Assign);
      setState(1086);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1089);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1088);
        attributespecifierseq(0);
      }
      setState(1091);
      declspecifierseq();
      setState(1092);
      declarator();
      setState(1093);
      bracedinitlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationstatementContext ------------------------------------------------------------------

JennyParser::IterationstatementContext::IterationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::IterationstatementContext::While() {
  return getToken(JennyParser::While, 0);
}

JennyParser::ConditionContext* JennyParser::IterationstatementContext::condition() {
  return getRuleContext<JennyParser::ConditionContext>(0);
}

JennyParser::StatementContext* JennyParser::IterationstatementContext::statement() {
  return getRuleContext<JennyParser::StatementContext>(0);
}

tree::TerminalNode* JennyParser::IterationstatementContext::Do() {
  return getToken(JennyParser::Do, 0);
}

JennyParser::ExpressionContext* JennyParser::IterationstatementContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}

tree::TerminalNode* JennyParser::IterationstatementContext::For() {
  return getToken(JennyParser::For, 0);
}

JennyParser::ForinitstatementContext* JennyParser::IterationstatementContext::forinitstatement() {
  return getRuleContext<JennyParser::ForinitstatementContext>(0);
}

JennyParser::ForrangedeclarationContext* JennyParser::IterationstatementContext::forrangedeclaration() {
  return getRuleContext<JennyParser::ForrangedeclarationContext>(0);
}

JennyParser::ForrangeinitializerContext* JennyParser::IterationstatementContext::forrangeinitializer() {
  return getRuleContext<JennyParser::ForrangeinitializerContext>(0);
}


size_t JennyParser::IterationstatementContext::getRuleIndex() const {
  return JennyParser::RuleIterationstatement;
}

void JennyParser::IterationstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationstatement(this);
}

void JennyParser::IterationstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationstatement(this);
}


antlrcpp::Any JennyParser::IterationstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitIterationstatement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::IterationstatementContext* JennyParser::iterationstatement() {
  IterationstatementContext *_localctx = _tracker.createInstance<IterationstatementContext>(_ctx, getState());
  enterRule(_localctx, 110, JennyParser::RuleIterationstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1132);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1097);
      match(JennyParser::While);
      setState(1098);
      match(JennyParser::LeftParen);
      setState(1099);
      condition();
      setState(1100);
      match(JennyParser::RightParen);
      setState(1101);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1103);
      match(JennyParser::Do);
      setState(1104);
      statement();
      setState(1105);
      match(JennyParser::While);
      setState(1106);
      match(JennyParser::LeftParen);
      setState(1107);
      expression(0);
      setState(1108);
      match(JennyParser::RightParen);
      setState(1109);
      match(JennyParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1111);
      match(JennyParser::For);
      setState(1112);
      match(JennyParser::LeftParen);
      setState(1113);
      forinitstatement();
      setState(1115);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__0)
        | (1ULL << JennyParser::T__1)
        | (1ULL << JennyParser::Alignas)
        | (1ULL << JennyParser::Alignof)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Class)
        | (1ULL << JennyParser::Const)
        | (1ULL << JennyParser::Constexpr)
        | (1ULL << JennyParser::Const_cast)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Delete)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Dynamic_cast)
        | (1ULL << JennyParser::Enum)
        | (1ULL << JennyParser::Explicit)
        | (1ULL << JennyParser::Extern)
        | (1ULL << JennyParser::False)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Friend)
        | (1ULL << JennyParser::Inline)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::Mutable)
        | (1ULL << JennyParser::New)
        | (1ULL << JennyParser::Noexcept)
        | (1ULL << JennyParser::Nullptr)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Register)
        | (1ULL << JennyParser::Reinterpret_cast)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Sizeof)
        | (1ULL << JennyParser::Static))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
        | (1ULL << (JennyParser::Struct - 64))
        | (1ULL << (JennyParser::This - 64))
        | (1ULL << (JennyParser::Thread_local - 64))
        | (1ULL << (JennyParser::Throw - 64))
        | (1ULL << (JennyParser::True - 64))
        | (1ULL << (JennyParser::Typedef - 64))
        | (1ULL << (JennyParser::Typeid_ - 64))
        | (1ULL << (JennyParser::Typename_ - 64))
        | (1ULL << (JennyParser::Union - 64))
        | (1ULL << (JennyParser::Unsigned - 64))
        | (1ULL << (JennyParser::Virtual - 64))
        | (1ULL << (JennyParser::Void - 64))
        | (1ULL << (JennyParser::Volatile - 64))
        | (1ULL << (JennyParser::Wchar - 64))
        | (1ULL << (JennyParser::LeftParen - 64))
        | (1ULL << (JennyParser::LeftBracket - 64))
        | (1ULL << (JennyParser::Plus - 64))
        | (1ULL << (JennyParser::Minus - 64))
        | (1ULL << (JennyParser::Star - 64))
        | (1ULL << (JennyParser::And - 64))
        | (1ULL << (JennyParser::Or - 64))
        | (1ULL << (JennyParser::Tilde - 64))
        | (1ULL << (JennyParser::PlusPlus - 64))
        | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
        | (1ULL << (JennyParser::Identifier - 128))
        | (1ULL << (JennyParser::Integerliteral - 128))
        | (1ULL << (JennyParser::Characterliteral - 128))
        | (1ULL << (JennyParser::Floatingliteral - 128))
        | (1ULL << (JennyParser::Stringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
        | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(1114);
        condition();
      }
      setState(1117);
      match(JennyParser::Semi);
      setState(1119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__0)
        | (1ULL << JennyParser::T__1)
        | (1ULL << JennyParser::Alignof)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Const_cast)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Delete)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Dynamic_cast)
        | (1ULL << JennyParser::False)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::New)
        | (1ULL << JennyParser::Noexcept)
        | (1ULL << JennyParser::Nullptr)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Reinterpret_cast)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
        | (1ULL << (JennyParser::This - 64))
        | (1ULL << (JennyParser::Throw - 64))
        | (1ULL << (JennyParser::True - 64))
        | (1ULL << (JennyParser::Typeid_ - 64))
        | (1ULL << (JennyParser::Typename_ - 64))
        | (1ULL << (JennyParser::Unsigned - 64))
        | (1ULL << (JennyParser::Void - 64))
        | (1ULL << (JennyParser::Wchar - 64))
        | (1ULL << (JennyParser::LeftParen - 64))
        | (1ULL << (JennyParser::LeftBracket - 64))
        | (1ULL << (JennyParser::Plus - 64))
        | (1ULL << (JennyParser::Minus - 64))
        | (1ULL << (JennyParser::Star - 64))
        | (1ULL << (JennyParser::And - 64))
        | (1ULL << (JennyParser::Or - 64))
        | (1ULL << (JennyParser::Tilde - 64))
        | (1ULL << (JennyParser::PlusPlus - 64))
        | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
        | (1ULL << (JennyParser::Identifier - 128))
        | (1ULL << (JennyParser::Integerliteral - 128))
        | (1ULL << (JennyParser::Characterliteral - 128))
        | (1ULL << (JennyParser::Floatingliteral - 128))
        | (1ULL << (JennyParser::Stringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
        | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(1118);
        expression(0);
      }
      setState(1121);
      match(JennyParser::RightParen);
      setState(1122);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1124);
      match(JennyParser::For);
      setState(1125);
      match(JennyParser::LeftParen);
      setState(1126);
      forrangedeclaration();
      setState(1127);
      match(JennyParser::Colon);
      setState(1128);
      forrangeinitializer();
      setState(1129);
      match(JennyParser::RightParen);
      setState(1130);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForinitstatementContext ------------------------------------------------------------------

JennyParser::ForinitstatementContext::ForinitstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ExpressionstatementContext* JennyParser::ForinitstatementContext::expressionstatement() {
  return getRuleContext<JennyParser::ExpressionstatementContext>(0);
}

JennyParser::SimpledeclarationContext* JennyParser::ForinitstatementContext::simpledeclaration() {
  return getRuleContext<JennyParser::SimpledeclarationContext>(0);
}


size_t JennyParser::ForinitstatementContext::getRuleIndex() const {
  return JennyParser::RuleForinitstatement;
}

void JennyParser::ForinitstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForinitstatement(this);
}

void JennyParser::ForinitstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForinitstatement(this);
}


antlrcpp::Any JennyParser::ForinitstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitForinitstatement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ForinitstatementContext* JennyParser::forinitstatement() {
  ForinitstatementContext *_localctx = _tracker.createInstance<ForinitstatementContext>(_ctx, getState());
  enterRule(_localctx, 112, JennyParser::RuleForinitstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1134);
      expressionstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1135);
      simpledeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForrangedeclarationContext ------------------------------------------------------------------

JennyParser::ForrangedeclarationContext::ForrangedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclspecifierseqContext* JennyParser::ForrangedeclarationContext::declspecifierseq() {
  return getRuleContext<JennyParser::DeclspecifierseqContext>(0);
}

JennyParser::DeclaratorContext* JennyParser::ForrangedeclarationContext::declarator() {
  return getRuleContext<JennyParser::DeclaratorContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::ForrangedeclarationContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}


size_t JennyParser::ForrangedeclarationContext::getRuleIndex() const {
  return JennyParser::RuleForrangedeclaration;
}

void JennyParser::ForrangedeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForrangedeclaration(this);
}

void JennyParser::ForrangedeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForrangedeclaration(this);
}


antlrcpp::Any JennyParser::ForrangedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitForrangedeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ForrangedeclarationContext* JennyParser::forrangedeclaration() {
  ForrangedeclarationContext *_localctx = _tracker.createInstance<ForrangedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 114, JennyParser::RuleForrangedeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
      setState(1138);
      attributespecifierseq(0);
    }
    setState(1141);
    declspecifierseq();
    setState(1142);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForrangeinitializerContext ------------------------------------------------------------------

JennyParser::ForrangeinitializerContext::ForrangeinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ExpressionContext* JennyParser::ForrangeinitializerContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}

JennyParser::BracedinitlistContext* JennyParser::ForrangeinitializerContext::bracedinitlist() {
  return getRuleContext<JennyParser::BracedinitlistContext>(0);
}


size_t JennyParser::ForrangeinitializerContext::getRuleIndex() const {
  return JennyParser::RuleForrangeinitializer;
}

void JennyParser::ForrangeinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForrangeinitializer(this);
}

void JennyParser::ForrangeinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForrangeinitializer(this);
}


antlrcpp::Any JennyParser::ForrangeinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitForrangeinitializer(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ForrangeinitializerContext* JennyParser::forrangeinitializer() {
  ForrangeinitializerContext *_localctx = _tracker.createInstance<ForrangeinitializerContext>(_ctx, getState());
  enterRule(_localctx, 116, JennyParser::RuleForrangeinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::T__0:
      case JennyParser::T__1:
      case JennyParser::Alignof:
      case JennyParser::Auto:
      case JennyParser::Bool:
      case JennyParser::Char:
      case JennyParser::Char16:
      case JennyParser::Char32:
      case JennyParser::Const_cast:
      case JennyParser::Decltype:
      case JennyParser::Delete:
      case JennyParser::Double:
      case JennyParser::Dynamic_cast:
      case JennyParser::False:
      case JennyParser::Float:
      case JennyParser::Int:
      case JennyParser::Long:
      case JennyParser::New:
      case JennyParser::Noexcept:
      case JennyParser::Nullptr:
      case JennyParser::Operator:
      case JennyParser::Reinterpret_cast:
      case JennyParser::Short:
      case JennyParser::Signed:
      case JennyParser::Sizeof:
      case JennyParser::Static_cast:
      case JennyParser::This:
      case JennyParser::Throw:
      case JennyParser::True:
      case JennyParser::Typeid_:
      case JennyParser::Typename_:
      case JennyParser::Unsigned:
      case JennyParser::Void:
      case JennyParser::Wchar:
      case JennyParser::LeftParen:
      case JennyParser::LeftBracket:
      case JennyParser::Plus:
      case JennyParser::Minus:
      case JennyParser::Star:
      case JennyParser::And:
      case JennyParser::Or:
      case JennyParser::Tilde:
      case JennyParser::PlusPlus:
      case JennyParser::MinusMinus:
      case JennyParser::Doublecolon:
      case JennyParser::Identifier:
      case JennyParser::Integerliteral:
      case JennyParser::Characterliteral:
      case JennyParser::Floatingliteral:
      case JennyParser::Stringliteral:
      case JennyParser::Userdefinedintegerliteral:
      case JennyParser::Userdefinedfloatingliteral:
      case JennyParser::Userdefinedstringliteral:
      case JennyParser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(1144);
        expression(0);
        break;
      }

      case JennyParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1145);
        bracedinitlist();
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

//----------------- JumpstatementContext ------------------------------------------------------------------

JennyParser::JumpstatementContext::JumpstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::JumpstatementContext::Break() {
  return getToken(JennyParser::Break, 0);
}

tree::TerminalNode* JennyParser::JumpstatementContext::Continue() {
  return getToken(JennyParser::Continue, 0);
}

tree::TerminalNode* JennyParser::JumpstatementContext::Return() {
  return getToken(JennyParser::Return, 0);
}

JennyParser::ExpressionContext* JennyParser::JumpstatementContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}

JennyParser::BracedinitlistContext* JennyParser::JumpstatementContext::bracedinitlist() {
  return getRuleContext<JennyParser::BracedinitlistContext>(0);
}

tree::TerminalNode* JennyParser::JumpstatementContext::Goto() {
  return getToken(JennyParser::Goto, 0);
}

tree::TerminalNode* JennyParser::JumpstatementContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::JumpstatementContext::getRuleIndex() const {
  return JennyParser::RuleJumpstatement;
}

void JennyParser::JumpstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpstatement(this);
}

void JennyParser::JumpstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpstatement(this);
}


antlrcpp::Any JennyParser::JumpstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitJumpstatement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::JumpstatementContext* JennyParser::jumpstatement() {
  JumpstatementContext *_localctx = _tracker.createInstance<JumpstatementContext>(_ctx, getState());
  enterRule(_localctx, 118, JennyParser::RuleJumpstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1148);
      match(JennyParser::Break);
      setState(1149);
      match(JennyParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1150);
      match(JennyParser::Continue);
      setState(1151);
      match(JennyParser::Semi);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1152);
      match(JennyParser::Return);
      setState(1154);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__0)
        | (1ULL << JennyParser::T__1)
        | (1ULL << JennyParser::Alignof)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Const_cast)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Delete)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Dynamic_cast)
        | (1ULL << JennyParser::False)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::New)
        | (1ULL << JennyParser::Noexcept)
        | (1ULL << JennyParser::Nullptr)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Reinterpret_cast)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
        | (1ULL << (JennyParser::This - 64))
        | (1ULL << (JennyParser::Throw - 64))
        | (1ULL << (JennyParser::True - 64))
        | (1ULL << (JennyParser::Typeid_ - 64))
        | (1ULL << (JennyParser::Typename_ - 64))
        | (1ULL << (JennyParser::Unsigned - 64))
        | (1ULL << (JennyParser::Void - 64))
        | (1ULL << (JennyParser::Wchar - 64))
        | (1ULL << (JennyParser::LeftParen - 64))
        | (1ULL << (JennyParser::LeftBracket - 64))
        | (1ULL << (JennyParser::Plus - 64))
        | (1ULL << (JennyParser::Minus - 64))
        | (1ULL << (JennyParser::Star - 64))
        | (1ULL << (JennyParser::And - 64))
        | (1ULL << (JennyParser::Or - 64))
        | (1ULL << (JennyParser::Tilde - 64))
        | (1ULL << (JennyParser::PlusPlus - 64))
        | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
        | (1ULL << (JennyParser::Identifier - 128))
        | (1ULL << (JennyParser::Integerliteral - 128))
        | (1ULL << (JennyParser::Characterliteral - 128))
        | (1ULL << (JennyParser::Floatingliteral - 128))
        | (1ULL << (JennyParser::Stringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
        | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(1153);
        expression(0);
      }
      setState(1156);
      match(JennyParser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1157);
      match(JennyParser::Return);
      setState(1158);
      bracedinitlist();
      setState(1159);
      match(JennyParser::Semi);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1161);
      match(JennyParser::Goto);
      setState(1162);
      match(JennyParser::Identifier);
      setState(1163);
      match(JennyParser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationstatementContext ------------------------------------------------------------------

JennyParser::DeclarationstatementContext::DeclarationstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::BlockdeclarationContext* JennyParser::DeclarationstatementContext::blockdeclaration() {
  return getRuleContext<JennyParser::BlockdeclarationContext>(0);
}


size_t JennyParser::DeclarationstatementContext::getRuleIndex() const {
  return JennyParser::RuleDeclarationstatement;
}

void JennyParser::DeclarationstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationstatement(this);
}

void JennyParser::DeclarationstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationstatement(this);
}


antlrcpp::Any JennyParser::DeclarationstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDeclarationstatement(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::DeclarationstatementContext* JennyParser::declarationstatement() {
  DeclarationstatementContext *_localctx = _tracker.createInstance<DeclarationstatementContext>(_ctx, getState());
  enterRule(_localctx, 120, JennyParser::RuleDeclarationstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1166);
    blockdeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationseqContext ------------------------------------------------------------------

JennyParser::DeclarationseqContext::DeclarationseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclarationContext* JennyParser::DeclarationseqContext::declaration() {
  return getRuleContext<JennyParser::DeclarationContext>(0);
}

JennyParser::DeclarationseqContext* JennyParser::DeclarationseqContext::declarationseq() {
  return getRuleContext<JennyParser::DeclarationseqContext>(0);
}


size_t JennyParser::DeclarationseqContext::getRuleIndex() const {
  return JennyParser::RuleDeclarationseq;
}

void JennyParser::DeclarationseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationseq(this);
}

void JennyParser::DeclarationseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationseq(this);
}


antlrcpp::Any JennyParser::DeclarationseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDeclarationseq(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::DeclarationseqContext* JennyParser::declarationseq() {
   return declarationseq(0);
}

JennyParser::DeclarationseqContext* JennyParser::declarationseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::DeclarationseqContext *_localctx = _tracker.createInstance<DeclarationseqContext>(_ctx, parentState);
  JennyParser::DeclarationseqContext *previousContext = _localctx;
  size_t startState = 122;
  enterRecursionRule(_localctx, 122, JennyParser::RuleDeclarationseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1169);
    declaration();
    _ctx->stop = _input->LT(-1);
    setState(1175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclarationseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclarationseq);
        setState(1171);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1172);
        declaration(); 
      }
      setState(1177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

JennyParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::BlockdeclarationContext* JennyParser::DeclarationContext::blockdeclaration() {
  return getRuleContext<JennyParser::BlockdeclarationContext>(0);
}

JennyParser::FunctiondefinitionContext* JennyParser::DeclarationContext::functiondefinition() {
  return getRuleContext<JennyParser::FunctiondefinitionContext>(0);
}

JennyParser::TemplatedeclarationContext* JennyParser::DeclarationContext::templatedeclaration() {
  return getRuleContext<JennyParser::TemplatedeclarationContext>(0);
}

JennyParser::ExplicitinstantiationContext* JennyParser::DeclarationContext::explicitinstantiation() {
  return getRuleContext<JennyParser::ExplicitinstantiationContext>(0);
}

JennyParser::ExplicitspecializationContext* JennyParser::DeclarationContext::explicitspecialization() {
  return getRuleContext<JennyParser::ExplicitspecializationContext>(0);
}

JennyParser::LinkagespecificationContext* JennyParser::DeclarationContext::linkagespecification() {
  return getRuleContext<JennyParser::LinkagespecificationContext>(0);
}

JennyParser::NamespacedefinitionContext* JennyParser::DeclarationContext::namespacedefinition() {
  return getRuleContext<JennyParser::NamespacedefinitionContext>(0);
}

JennyParser::EmptydeclarationContext* JennyParser::DeclarationContext::emptydeclaration() {
  return getRuleContext<JennyParser::EmptydeclarationContext>(0);
}

JennyParser::AttributedeclarationContext* JennyParser::DeclarationContext::attributedeclaration() {
  return getRuleContext<JennyParser::AttributedeclarationContext>(0);
}


size_t JennyParser::DeclarationContext::getRuleIndex() const {
  return JennyParser::RuleDeclaration;
}

void JennyParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void JennyParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any JennyParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::DeclarationContext* JennyParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 124, JennyParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1178);
      blockdeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1179);
      functiondefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1180);
      templatedeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1181);
      explicitinstantiation();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1182);
      explicitspecialization();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1183);
      linkagespecification();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1184);
      namespacedefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1185);
      emptydeclaration();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1186);
      attributedeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockdeclarationContext ------------------------------------------------------------------

JennyParser::BlockdeclarationContext::BlockdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::SimpledeclarationContext* JennyParser::BlockdeclarationContext::simpledeclaration() {
  return getRuleContext<JennyParser::SimpledeclarationContext>(0);
}

JennyParser::AsmdefinitionContext* JennyParser::BlockdeclarationContext::asmdefinition() {
  return getRuleContext<JennyParser::AsmdefinitionContext>(0);
}

JennyParser::NamespacealiasdefinitionContext* JennyParser::BlockdeclarationContext::namespacealiasdefinition() {
  return getRuleContext<JennyParser::NamespacealiasdefinitionContext>(0);
}

JennyParser::UsingdeclarationContext* JennyParser::BlockdeclarationContext::usingdeclaration() {
  return getRuleContext<JennyParser::UsingdeclarationContext>(0);
}

JennyParser::UsingdirectiveContext* JennyParser::BlockdeclarationContext::usingdirective() {
  return getRuleContext<JennyParser::UsingdirectiveContext>(0);
}

JennyParser::Static_assertdeclarationContext* JennyParser::BlockdeclarationContext::static_assertdeclaration() {
  return getRuleContext<JennyParser::Static_assertdeclarationContext>(0);
}

JennyParser::AliasdeclarationContext* JennyParser::BlockdeclarationContext::aliasdeclaration() {
  return getRuleContext<JennyParser::AliasdeclarationContext>(0);
}

JennyParser::OpaqueenumdeclarationContext* JennyParser::BlockdeclarationContext::opaqueenumdeclaration() {
  return getRuleContext<JennyParser::OpaqueenumdeclarationContext>(0);
}


size_t JennyParser::BlockdeclarationContext::getRuleIndex() const {
  return JennyParser::RuleBlockdeclaration;
}

void JennyParser::BlockdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockdeclaration(this);
}

void JennyParser::BlockdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockdeclaration(this);
}


antlrcpp::Any JennyParser::BlockdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBlockdeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::BlockdeclarationContext* JennyParser::blockdeclaration() {
  BlockdeclarationContext *_localctx = _tracker.createInstance<BlockdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 126, JennyParser::RuleBlockdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1189);
      simpledeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1190);
      asmdefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1191);
      namespacealiasdefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1192);
      usingdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1193);
      usingdirective();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1194);
      static_assertdeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1195);
      aliasdeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1196);
      opaqueenumdeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasdeclarationContext ------------------------------------------------------------------

JennyParser::AliasdeclarationContext::AliasdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::AliasdeclarationContext::Using() {
  return getToken(JennyParser::Using, 0);
}

tree::TerminalNode* JennyParser::AliasdeclarationContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::ThetypeidContext* JennyParser::AliasdeclarationContext::thetypeid() {
  return getRuleContext<JennyParser::ThetypeidContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::AliasdeclarationContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}


size_t JennyParser::AliasdeclarationContext::getRuleIndex() const {
  return JennyParser::RuleAliasdeclaration;
}

void JennyParser::AliasdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasdeclaration(this);
}

void JennyParser::AliasdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasdeclaration(this);
}


antlrcpp::Any JennyParser::AliasdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAliasdeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AliasdeclarationContext* JennyParser::aliasdeclaration() {
  AliasdeclarationContext *_localctx = _tracker.createInstance<AliasdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 128, JennyParser::RuleAliasdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1199);
    match(JennyParser::Using);
    setState(1200);
    match(JennyParser::Identifier);
    setState(1202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
      setState(1201);
      attributespecifierseq(0);
    }
    setState(1204);
    match(JennyParser::Assign);
    setState(1205);
    thetypeid();
    setState(1206);
    match(JennyParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpledeclarationContext ------------------------------------------------------------------

JennyParser::SimpledeclarationContext::SimpledeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclspecifierseqContext* JennyParser::SimpledeclarationContext::declspecifierseq() {
  return getRuleContext<JennyParser::DeclspecifierseqContext>(0);
}

JennyParser::InitdeclaratorlistContext* JennyParser::SimpledeclarationContext::initdeclaratorlist() {
  return getRuleContext<JennyParser::InitdeclaratorlistContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::SimpledeclarationContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}


size_t JennyParser::SimpledeclarationContext::getRuleIndex() const {
  return JennyParser::RuleSimpledeclaration;
}

void JennyParser::SimpledeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpledeclaration(this);
}

void JennyParser::SimpledeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpledeclaration(this);
}


antlrcpp::Any JennyParser::SimpledeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitSimpledeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::SimpledeclarationContext* JennyParser::simpledeclaration() {
  SimpledeclarationContext *_localctx = _tracker.createInstance<SimpledeclarationContext>(_ctx, getState());
  enterRule(_localctx, 130, JennyParser::RuleSimpledeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1222);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::T__2:
      case JennyParser::Auto:
      case JennyParser::Bool:
      case JennyParser::Char:
      case JennyParser::Char16:
      case JennyParser::Char32:
      case JennyParser::Class:
      case JennyParser::Const:
      case JennyParser::Constexpr:
      case JennyParser::Decltype:
      case JennyParser::Double:
      case JennyParser::Enum:
      case JennyParser::Explicit:
      case JennyParser::Extern:
      case JennyParser::Float:
      case JennyParser::Friend:
      case JennyParser::Inline:
      case JennyParser::Int:
      case JennyParser::Long:
      case JennyParser::Mutable:
      case JennyParser::Operator:
      case JennyParser::Register:
      case JennyParser::Short:
      case JennyParser::Signed:
      case JennyParser::Static:
      case JennyParser::Struct:
      case JennyParser::Thread_local:
      case JennyParser::Typedef:
      case JennyParser::Typename_:
      case JennyParser::Union:
      case JennyParser::Unsigned:
      case JennyParser::Virtual:
      case JennyParser::Void:
      case JennyParser::Volatile:
      case JennyParser::Wchar:
      case JennyParser::LeftParen:
      case JennyParser::Star:
      case JennyParser::And:
      case JennyParser::Tilde:
      case JennyParser::Doublecolon:
      case JennyParser::Semi:
      case JennyParser::Ellipsis:
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1209);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
        case 1: {
          setState(1208);
          declspecifierseq();
          break;
        }

        }
        setState(1212);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << JennyParser::T__2)
          | (1ULL << JennyParser::Decltype)
          | (1ULL << JennyParser::Operator))) != 0) || ((((_la - 84) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 84)) & ((1ULL << (JennyParser::LeftParen - 84))
          | (1ULL << (JennyParser::Star - 84))
          | (1ULL << (JennyParser::And - 84))
          | (1ULL << (JennyParser::Tilde - 84))
          | (1ULL << (JennyParser::Doublecolon - 84))
          | (1ULL << (JennyParser::Ellipsis - 84))
          | (1ULL << (JennyParser::Identifier - 84)))) != 0)) {
          setState(1211);
          initdeclaratorlist(0);
        }
        setState(1214);
        match(JennyParser::Semi);
        break;
      }

      case JennyParser::Alignas:
      case JennyParser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1215);
        attributespecifierseq(0);
        setState(1217);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
        case 1: {
          setState(1216);
          declspecifierseq();
          break;
        }

        }
        setState(1219);
        initdeclaratorlist(0);
        setState(1220);
        match(JennyParser::Semi);
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

//----------------- Static_assertdeclarationContext ------------------------------------------------------------------

JennyParser::Static_assertdeclarationContext::Static_assertdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::Static_assertdeclarationContext::Static_assert() {
  return getToken(JennyParser::Static_assert, 0);
}

JennyParser::ConstantexpressionContext* JennyParser::Static_assertdeclarationContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* JennyParser::Static_assertdeclarationContext::Stringliteral() {
  return getToken(JennyParser::Stringliteral, 0);
}


size_t JennyParser::Static_assertdeclarationContext::getRuleIndex() const {
  return JennyParser::RuleStatic_assertdeclaration;
}

void JennyParser::Static_assertdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatic_assertdeclaration(this);
}

void JennyParser::Static_assertdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatic_assertdeclaration(this);
}


antlrcpp::Any JennyParser::Static_assertdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitStatic_assertdeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::Static_assertdeclarationContext* JennyParser::static_assertdeclaration() {
  Static_assertdeclarationContext *_localctx = _tracker.createInstance<Static_assertdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 132, JennyParser::RuleStatic_assertdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1224);
    match(JennyParser::Static_assert);
    setState(1225);
    match(JennyParser::LeftParen);
    setState(1226);
    constantexpression();
    setState(1227);
    match(JennyParser::Comma);
    setState(1228);
    match(JennyParser::Stringliteral);
    setState(1229);
    match(JennyParser::RightParen);
    setState(1230);
    match(JennyParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptydeclarationContext ------------------------------------------------------------------

JennyParser::EmptydeclarationContext::EmptydeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JennyParser::EmptydeclarationContext::getRuleIndex() const {
  return JennyParser::RuleEmptydeclaration;
}

void JennyParser::EmptydeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptydeclaration(this);
}

void JennyParser::EmptydeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptydeclaration(this);
}


antlrcpp::Any JennyParser::EmptydeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEmptydeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::EmptydeclarationContext* JennyParser::emptydeclaration() {
  EmptydeclarationContext *_localctx = _tracker.createInstance<EmptydeclarationContext>(_ctx, getState());
  enterRule(_localctx, 134, JennyParser::RuleEmptydeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1232);
    match(JennyParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributedeclarationContext ------------------------------------------------------------------

JennyParser::AttributedeclarationContext::AttributedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AttributespecifierseqContext* JennyParser::AttributedeclarationContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}


size_t JennyParser::AttributedeclarationContext::getRuleIndex() const {
  return JennyParser::RuleAttributedeclaration;
}

void JennyParser::AttributedeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributedeclaration(this);
}

void JennyParser::AttributedeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributedeclaration(this);
}


antlrcpp::Any JennyParser::AttributedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAttributedeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AttributedeclarationContext* JennyParser::attributedeclaration() {
  AttributedeclarationContext *_localctx = _tracker.createInstance<AttributedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 136, JennyParser::RuleAttributedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1234);
    attributespecifierseq(0);
    setState(1235);
    match(JennyParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclspecifierContext ------------------------------------------------------------------

JennyParser::DeclspecifierContext::DeclspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::StorageclassspecifierContext* JennyParser::DeclspecifierContext::storageclassspecifier() {
  return getRuleContext<JennyParser::StorageclassspecifierContext>(0);
}

JennyParser::TypespecifierContext* JennyParser::DeclspecifierContext::typespecifier() {
  return getRuleContext<JennyParser::TypespecifierContext>(0);
}

JennyParser::FunctionspecifierContext* JennyParser::DeclspecifierContext::functionspecifier() {
  return getRuleContext<JennyParser::FunctionspecifierContext>(0);
}

tree::TerminalNode* JennyParser::DeclspecifierContext::Friend() {
  return getToken(JennyParser::Friend, 0);
}

tree::TerminalNode* JennyParser::DeclspecifierContext::Typedef() {
  return getToken(JennyParser::Typedef, 0);
}

tree::TerminalNode* JennyParser::DeclspecifierContext::Constexpr() {
  return getToken(JennyParser::Constexpr, 0);
}


size_t JennyParser::DeclspecifierContext::getRuleIndex() const {
  return JennyParser::RuleDeclspecifier;
}

void JennyParser::DeclspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclspecifier(this);
}

void JennyParser::DeclspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclspecifier(this);
}


antlrcpp::Any JennyParser::DeclspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDeclspecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::DeclspecifierContext* JennyParser::declspecifier() {
  DeclspecifierContext *_localctx = _tracker.createInstance<DeclspecifierContext>(_ctx, getState());
  enterRule(_localctx, 138, JennyParser::RuleDeclspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Extern:
      case JennyParser::Mutable:
      case JennyParser::Register:
      case JennyParser::Static:
      case JennyParser::Thread_local: {
        enterOuterAlt(_localctx, 1);
        setState(1237);
        storageclassspecifier();
        break;
      }

      case JennyParser::Auto:
      case JennyParser::Bool:
      case JennyParser::Char:
      case JennyParser::Char16:
      case JennyParser::Char32:
      case JennyParser::Class:
      case JennyParser::Const:
      case JennyParser::Decltype:
      case JennyParser::Double:
      case JennyParser::Enum:
      case JennyParser::Float:
      case JennyParser::Int:
      case JennyParser::Long:
      case JennyParser::Short:
      case JennyParser::Signed:
      case JennyParser::Struct:
      case JennyParser::Typename_:
      case JennyParser::Union:
      case JennyParser::Unsigned:
      case JennyParser::Void:
      case JennyParser::Volatile:
      case JennyParser::Wchar:
      case JennyParser::Doublecolon:
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1238);
        typespecifier();
        break;
      }

      case JennyParser::Explicit:
      case JennyParser::Inline:
      case JennyParser::Virtual: {
        enterOuterAlt(_localctx, 3);
        setState(1239);
        functionspecifier();
        break;
      }

      case JennyParser::Friend: {
        enterOuterAlt(_localctx, 4);
        setState(1240);
        match(JennyParser::Friend);
        break;
      }

      case JennyParser::Typedef: {
        enterOuterAlt(_localctx, 5);
        setState(1241);
        match(JennyParser::Typedef);
        break;
      }

      case JennyParser::Constexpr: {
        enterOuterAlt(_localctx, 6);
        setState(1242);
        match(JennyParser::Constexpr);
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

//----------------- DeclspecifierseqContext ------------------------------------------------------------------

JennyParser::DeclspecifierseqContext::DeclspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclspecifierContext* JennyParser::DeclspecifierseqContext::declspecifier() {
  return getRuleContext<JennyParser::DeclspecifierContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::DeclspecifierseqContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::DeclspecifierseqContext* JennyParser::DeclspecifierseqContext::declspecifierseq() {
  return getRuleContext<JennyParser::DeclspecifierseqContext>(0);
}


size_t JennyParser::DeclspecifierseqContext::getRuleIndex() const {
  return JennyParser::RuleDeclspecifierseq;
}

void JennyParser::DeclspecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclspecifierseq(this);
}

void JennyParser::DeclspecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclspecifierseq(this);
}


antlrcpp::Any JennyParser::DeclspecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDeclspecifierseq(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::DeclspecifierseqContext* JennyParser::declspecifierseq() {
  DeclspecifierseqContext *_localctx = _tracker.createInstance<DeclspecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 140, JennyParser::RuleDeclspecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1245);
      declspecifier();
      setState(1247);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
      case 1: {
        setState(1246);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1249);
      declspecifier();
      setState(1250);
      declspecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageclassspecifierContext ------------------------------------------------------------------

JennyParser::StorageclassspecifierContext::StorageclassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::StorageclassspecifierContext::Register() {
  return getToken(JennyParser::Register, 0);
}

tree::TerminalNode* JennyParser::StorageclassspecifierContext::Static() {
  return getToken(JennyParser::Static, 0);
}

tree::TerminalNode* JennyParser::StorageclassspecifierContext::Thread_local() {
  return getToken(JennyParser::Thread_local, 0);
}

tree::TerminalNode* JennyParser::StorageclassspecifierContext::Extern() {
  return getToken(JennyParser::Extern, 0);
}

tree::TerminalNode* JennyParser::StorageclassspecifierContext::Mutable() {
  return getToken(JennyParser::Mutable, 0);
}


size_t JennyParser::StorageclassspecifierContext::getRuleIndex() const {
  return JennyParser::RuleStorageclassspecifier;
}

void JennyParser::StorageclassspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageclassspecifier(this);
}

void JennyParser::StorageclassspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageclassspecifier(this);
}


antlrcpp::Any JennyParser::StorageclassspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitStorageclassspecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::StorageclassspecifierContext* JennyParser::storageclassspecifier() {
  StorageclassspecifierContext *_localctx = _tracker.createInstance<StorageclassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 142, JennyParser::RuleStorageclassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1254);
    _la = _input->LA(1);
    if (!(((((_la - 35) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 35)) & ((1ULL << (JennyParser::Extern - 35))
      | (1ULL << (JennyParser::Mutable - 35))
      | (1ULL << (JennyParser::Register - 35))
      | (1ULL << (JennyParser::Static - 35))
      | (1ULL << (JennyParser::Thread_local - 35)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionspecifierContext ------------------------------------------------------------------

JennyParser::FunctionspecifierContext::FunctionspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::FunctionspecifierContext::Inline() {
  return getToken(JennyParser::Inline, 0);
}

tree::TerminalNode* JennyParser::FunctionspecifierContext::Virtual() {
  return getToken(JennyParser::Virtual, 0);
}

tree::TerminalNode* JennyParser::FunctionspecifierContext::Explicit() {
  return getToken(JennyParser::Explicit, 0);
}


size_t JennyParser::FunctionspecifierContext::getRuleIndex() const {
  return JennyParser::RuleFunctionspecifier;
}

void JennyParser::FunctionspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionspecifier(this);
}

void JennyParser::FunctionspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionspecifier(this);
}


antlrcpp::Any JennyParser::FunctionspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitFunctionspecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::FunctionspecifierContext* JennyParser::functionspecifier() {
  FunctionspecifierContext *_localctx = _tracker.createInstance<FunctionspecifierContext>(_ctx, getState());
  enterRule(_localctx, 144, JennyParser::RuleFunctionspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1256);
    _la = _input->LA(1);
    if (!(((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & ((1ULL << (JennyParser::Explicit - 33))
      | (1ULL << (JennyParser::Inline - 33))
      | (1ULL << (JennyParser::Virtual - 33)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefnameContext ------------------------------------------------------------------

JennyParser::TypedefnameContext::TypedefnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TypedefnameContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::TypedefnameContext::getRuleIndex() const {
  return JennyParser::RuleTypedefname;
}

void JennyParser::TypedefnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefname(this);
}

void JennyParser::TypedefnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefname(this);
}


antlrcpp::Any JennyParser::TypedefnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTypedefname(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TypedefnameContext* JennyParser::typedefname() {
  TypedefnameContext *_localctx = _tracker.createInstance<TypedefnameContext>(_ctx, getState());
  enterRule(_localctx, 146, JennyParser::RuleTypedefname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1258);
    match(JennyParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypespecifierContext ------------------------------------------------------------------

JennyParser::TypespecifierContext::TypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TrailingtypespecifierContext* JennyParser::TypespecifierContext::trailingtypespecifier() {
  return getRuleContext<JennyParser::TrailingtypespecifierContext>(0);
}

JennyParser::ClassspecifierContext* JennyParser::TypespecifierContext::classspecifier() {
  return getRuleContext<JennyParser::ClassspecifierContext>(0);
}

JennyParser::EnumspecifierContext* JennyParser::TypespecifierContext::enumspecifier() {
  return getRuleContext<JennyParser::EnumspecifierContext>(0);
}


size_t JennyParser::TypespecifierContext::getRuleIndex() const {
  return JennyParser::RuleTypespecifier;
}

void JennyParser::TypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypespecifier(this);
}

void JennyParser::TypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypespecifier(this);
}


antlrcpp::Any JennyParser::TypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTypespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TypespecifierContext* JennyParser::typespecifier() {
  TypespecifierContext *_localctx = _tracker.createInstance<TypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 148, JennyParser::RuleTypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1263);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1260);
      trailingtypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1261);
      classspecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1262);
      enumspecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierContext ------------------------------------------------------------------

JennyParser::TrailingtypespecifierContext::TrailingtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::SimpletypespecifierContext* JennyParser::TrailingtypespecifierContext::simpletypespecifier() {
  return getRuleContext<JennyParser::SimpletypespecifierContext>(0);
}

JennyParser::ElaboratedtypespecifierContext* JennyParser::TrailingtypespecifierContext::elaboratedtypespecifier() {
  return getRuleContext<JennyParser::ElaboratedtypespecifierContext>(0);
}

JennyParser::TypenamespecifierContext* JennyParser::TrailingtypespecifierContext::typenamespecifier() {
  return getRuleContext<JennyParser::TypenamespecifierContext>(0);
}

JennyParser::CvqualifierContext* JennyParser::TrailingtypespecifierContext::cvqualifier() {
  return getRuleContext<JennyParser::CvqualifierContext>(0);
}


size_t JennyParser::TrailingtypespecifierContext::getRuleIndex() const {
  return JennyParser::RuleTrailingtypespecifier;
}

void JennyParser::TrailingtypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingtypespecifier(this);
}

void JennyParser::TrailingtypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingtypespecifier(this);
}


antlrcpp::Any JennyParser::TrailingtypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTrailingtypespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TrailingtypespecifierContext* JennyParser::trailingtypespecifier() {
  TrailingtypespecifierContext *_localctx = _tracker.createInstance<TrailingtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 150, JennyParser::RuleTrailingtypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1269);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Auto:
      case JennyParser::Bool:
      case JennyParser::Char:
      case JennyParser::Char16:
      case JennyParser::Char32:
      case JennyParser::Decltype:
      case JennyParser::Double:
      case JennyParser::Float:
      case JennyParser::Int:
      case JennyParser::Long:
      case JennyParser::Short:
      case JennyParser::Signed:
      case JennyParser::Unsigned:
      case JennyParser::Void:
      case JennyParser::Wchar:
      case JennyParser::Doublecolon:
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1265);
        simpletypespecifier();
        break;
      }

      case JennyParser::Class:
      case JennyParser::Enum:
      case JennyParser::Struct:
      case JennyParser::Union: {
        enterOuterAlt(_localctx, 2);
        setState(1266);
        elaboratedtypespecifier();
        break;
      }

      case JennyParser::Typename_: {
        enterOuterAlt(_localctx, 3);
        setState(1267);
        typenamespecifier();
        break;
      }

      case JennyParser::Const:
      case JennyParser::Volatile: {
        enterOuterAlt(_localctx, 4);
        setState(1268);
        cvqualifier();
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

//----------------- TypespecifierseqContext ------------------------------------------------------------------

JennyParser::TypespecifierseqContext::TypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TypespecifierContext* JennyParser::TypespecifierseqContext::typespecifier() {
  return getRuleContext<JennyParser::TypespecifierContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::TypespecifierseqContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::TypespecifierseqContext* JennyParser::TypespecifierseqContext::typespecifierseq() {
  return getRuleContext<JennyParser::TypespecifierseqContext>(0);
}


size_t JennyParser::TypespecifierseqContext::getRuleIndex() const {
  return JennyParser::RuleTypespecifierseq;
}

void JennyParser::TypespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypespecifierseq(this);
}

void JennyParser::TypespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypespecifierseq(this);
}


antlrcpp::Any JennyParser::TypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTypespecifierseq(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TypespecifierseqContext* JennyParser::typespecifierseq() {
  TypespecifierseqContext *_localctx = _tracker.createInstance<TypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 152, JennyParser::RuleTypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1278);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1271);
      typespecifier();
      setState(1273);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx)) {
      case 1: {
        setState(1272);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1275);
      typespecifier();
      setState(1276);
      typespecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingtypespecifierseqContext ------------------------------------------------------------------

JennyParser::TrailingtypespecifierseqContext::TrailingtypespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TrailingtypespecifierContext* JennyParser::TrailingtypespecifierseqContext::trailingtypespecifier() {
  return getRuleContext<JennyParser::TrailingtypespecifierContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::TrailingtypespecifierseqContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::TrailingtypespecifierseqContext* JennyParser::TrailingtypespecifierseqContext::trailingtypespecifierseq() {
  return getRuleContext<JennyParser::TrailingtypespecifierseqContext>(0);
}


size_t JennyParser::TrailingtypespecifierseqContext::getRuleIndex() const {
  return JennyParser::RuleTrailingtypespecifierseq;
}

void JennyParser::TrailingtypespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingtypespecifierseq(this);
}

void JennyParser::TrailingtypespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingtypespecifierseq(this);
}


antlrcpp::Any JennyParser::TrailingtypespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTrailingtypespecifierseq(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TrailingtypespecifierseqContext* JennyParser::trailingtypespecifierseq() {
  TrailingtypespecifierseqContext *_localctx = _tracker.createInstance<TrailingtypespecifierseqContext>(_ctx, getState());
  enterRule(_localctx, 154, JennyParser::RuleTrailingtypespecifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1287);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1280);
      trailingtypespecifier();
      setState(1282);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
      case 1: {
        setState(1281);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1284);
      trailingtypespecifier();
      setState(1285);
      trailingtypespecifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletypespecifierContext ------------------------------------------------------------------

JennyParser::SimpletypespecifierContext::SimpletypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ThetypenameContext* JennyParser::SimpletypespecifierContext::thetypename() {
  return getRuleContext<JennyParser::ThetypenameContext>(0);
}

JennyParser::NestednamespecifierContext* JennyParser::SimpletypespecifierContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Template() {
  return getToken(JennyParser::Template, 0);
}

JennyParser::SimpletemplateidContext* JennyParser::SimpletypespecifierContext::simpletemplateid() {
  return getRuleContext<JennyParser::SimpletemplateidContext>(0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Char() {
  return getToken(JennyParser::Char, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Char16() {
  return getToken(JennyParser::Char16, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Char32() {
  return getToken(JennyParser::Char32, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Wchar() {
  return getToken(JennyParser::Wchar, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Bool() {
  return getToken(JennyParser::Bool, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Short() {
  return getToken(JennyParser::Short, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Int() {
  return getToken(JennyParser::Int, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Long() {
  return getToken(JennyParser::Long, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Signed() {
  return getToken(JennyParser::Signed, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Unsigned() {
  return getToken(JennyParser::Unsigned, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Float() {
  return getToken(JennyParser::Float, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Double() {
  return getToken(JennyParser::Double, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Void() {
  return getToken(JennyParser::Void, 0);
}

tree::TerminalNode* JennyParser::SimpletypespecifierContext::Auto() {
  return getToken(JennyParser::Auto, 0);
}

JennyParser::DecltypespecifierContext* JennyParser::SimpletypespecifierContext::decltypespecifier() {
  return getRuleContext<JennyParser::DecltypespecifierContext>(0);
}


size_t JennyParser::SimpletypespecifierContext::getRuleIndex() const {
  return JennyParser::RuleSimpletypespecifier;
}

void JennyParser::SimpletypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpletypespecifier(this);
}

void JennyParser::SimpletypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpletypespecifier(this);
}


antlrcpp::Any JennyParser::SimpletypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitSimpletypespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::SimpletypespecifierContext* JennyParser::simpletypespecifier() {
  SimpletypespecifierContext *_localctx = _tracker.createInstance<SimpletypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 156, JennyParser::RuleSimpletypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1312);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1290);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
      case 1: {
        setState(1289);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1292);
      thetypename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1293);
      nestednamespecifier(0);
      setState(1294);
      match(JennyParser::Template);
      setState(1295);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1297);
      match(JennyParser::Char);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1298);
      match(JennyParser::Char16);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1299);
      match(JennyParser::Char32);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1300);
      match(JennyParser::Wchar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1301);
      match(JennyParser::Bool);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1302);
      match(JennyParser::Short);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1303);
      match(JennyParser::Int);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1304);
      match(JennyParser::Long);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1305);
      match(JennyParser::Signed);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1306);
      match(JennyParser::Unsigned);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1307);
      match(JennyParser::Float);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1308);
      match(JennyParser::Double);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1309);
      match(JennyParser::Void);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1310);
      match(JennyParser::Auto);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1311);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypenameContext ------------------------------------------------------------------

JennyParser::ThetypenameContext::ThetypenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ClassnameContext* JennyParser::ThetypenameContext::classname() {
  return getRuleContext<JennyParser::ClassnameContext>(0);
}

JennyParser::EnumnameContext* JennyParser::ThetypenameContext::enumname() {
  return getRuleContext<JennyParser::EnumnameContext>(0);
}

JennyParser::TypedefnameContext* JennyParser::ThetypenameContext::typedefname() {
  return getRuleContext<JennyParser::TypedefnameContext>(0);
}

JennyParser::SimpletemplateidContext* JennyParser::ThetypenameContext::simpletemplateid() {
  return getRuleContext<JennyParser::SimpletemplateidContext>(0);
}


size_t JennyParser::ThetypenameContext::getRuleIndex() const {
  return JennyParser::RuleThetypename;
}

void JennyParser::ThetypenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThetypename(this);
}

void JennyParser::ThetypenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThetypename(this);
}


antlrcpp::Any JennyParser::ThetypenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitThetypename(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ThetypenameContext* JennyParser::thetypename() {
  ThetypenameContext *_localctx = _tracker.createInstance<ThetypenameContext>(_ctx, getState());
  enterRule(_localctx, 158, JennyParser::RuleThetypename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1318);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1314);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1315);
      enumname();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1316);
      typedefname();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1317);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecltypespecifierContext ------------------------------------------------------------------

JennyParser::DecltypespecifierContext::DecltypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::DecltypespecifierContext::Decltype() {
  return getToken(JennyParser::Decltype, 0);
}

JennyParser::ExpressionContext* JennyParser::DecltypespecifierContext::expression() {
  return getRuleContext<JennyParser::ExpressionContext>(0);
}

tree::TerminalNode* JennyParser::DecltypespecifierContext::Auto() {
  return getToken(JennyParser::Auto, 0);
}


size_t JennyParser::DecltypespecifierContext::getRuleIndex() const {
  return JennyParser::RuleDecltypespecifier;
}

void JennyParser::DecltypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecltypespecifier(this);
}

void JennyParser::DecltypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecltypespecifier(this);
}


antlrcpp::Any JennyParser::DecltypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDecltypespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::DecltypespecifierContext* JennyParser::decltypespecifier() {
  DecltypespecifierContext *_localctx = _tracker.createInstance<DecltypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 160, JennyParser::RuleDecltypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1320);
      match(JennyParser::Decltype);
      setState(1321);
      match(JennyParser::LeftParen);
      setState(1322);
      expression(0);
      setState(1323);
      match(JennyParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1325);
      match(JennyParser::Decltype);
      setState(1326);
      match(JennyParser::LeftParen);
      setState(1327);
      match(JennyParser::Auto);
      setState(1328);
      match(JennyParser::RightParen);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElaboratedtypespecifierContext ------------------------------------------------------------------

JennyParser::ElaboratedtypespecifierContext::ElaboratedtypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ClasskeyContext* JennyParser::ElaboratedtypespecifierContext::classkey() {
  return getRuleContext<JennyParser::ClasskeyContext>(0);
}

tree::TerminalNode* JennyParser::ElaboratedtypespecifierContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::AttributespecifierseqContext* JennyParser::ElaboratedtypespecifierContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::NestednamespecifierContext* JennyParser::ElaboratedtypespecifierContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}

JennyParser::SimpletemplateidContext* JennyParser::ElaboratedtypespecifierContext::simpletemplateid() {
  return getRuleContext<JennyParser::SimpletemplateidContext>(0);
}

tree::TerminalNode* JennyParser::ElaboratedtypespecifierContext::Template() {
  return getToken(JennyParser::Template, 0);
}

tree::TerminalNode* JennyParser::ElaboratedtypespecifierContext::Enum() {
  return getToken(JennyParser::Enum, 0);
}


size_t JennyParser::ElaboratedtypespecifierContext::getRuleIndex() const {
  return JennyParser::RuleElaboratedtypespecifier;
}

void JennyParser::ElaboratedtypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElaboratedtypespecifier(this);
}

void JennyParser::ElaboratedtypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElaboratedtypespecifier(this);
}


antlrcpp::Any JennyParser::ElaboratedtypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitElaboratedtypespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ElaboratedtypespecifierContext* JennyParser::elaboratedtypespecifier() {
  ElaboratedtypespecifierContext *_localctx = _tracker.createInstance<ElaboratedtypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 162, JennyParser::RuleElaboratedtypespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1355);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1331);
      classkey();
      setState(1333);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1332);
        attributespecifierseq(0);
      }
      setState(1336);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
      case 1: {
        setState(1335);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1338);
      match(JennyParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1340);
      classkey();
      setState(1341);
      simpletemplateid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1343);
      classkey();
      setState(1344);
      nestednamespecifier(0);
      setState(1346);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Template) {
        setState(1345);
        match(JennyParser::Template);
      }
      setState(1348);
      simpletemplateid();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1350);
      match(JennyParser::Enum);
      setState(1352);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
      case 1: {
        setState(1351);
        nestednamespecifier(0);
        break;
      }

      }
      setState(1354);
      match(JennyParser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumnameContext ------------------------------------------------------------------

JennyParser::EnumnameContext::EnumnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::EnumnameContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::EnumnameContext::getRuleIndex() const {
  return JennyParser::RuleEnumname;
}

void JennyParser::EnumnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumname(this);
}

void JennyParser::EnumnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumname(this);
}


antlrcpp::Any JennyParser::EnumnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEnumname(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::EnumnameContext* JennyParser::enumname() {
  EnumnameContext *_localctx = _tracker.createInstance<EnumnameContext>(_ctx, getState());
  enterRule(_localctx, 164, JennyParser::RuleEnumname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1357);
    match(JennyParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumspecifierContext ------------------------------------------------------------------

JennyParser::EnumspecifierContext::EnumspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::EnumheadContext* JennyParser::EnumspecifierContext::enumhead() {
  return getRuleContext<JennyParser::EnumheadContext>(0);
}

JennyParser::EnumeratorlistContext* JennyParser::EnumspecifierContext::enumeratorlist() {
  return getRuleContext<JennyParser::EnumeratorlistContext>(0);
}


size_t JennyParser::EnumspecifierContext::getRuleIndex() const {
  return JennyParser::RuleEnumspecifier;
}

void JennyParser::EnumspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumspecifier(this);
}

void JennyParser::EnumspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumspecifier(this);
}


antlrcpp::Any JennyParser::EnumspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEnumspecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::EnumspecifierContext* JennyParser::enumspecifier() {
  EnumspecifierContext *_localctx = _tracker.createInstance<EnumspecifierContext>(_ctx, getState());
  enterRule(_localctx, 166, JennyParser::RuleEnumspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1372);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1359);
      enumhead();
      setState(1360);
      match(JennyParser::LeftBrace);
      setState(1362);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Identifier) {
        setState(1361);
        enumeratorlist(0);
      }
      setState(1364);
      match(JennyParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1366);
      enumhead();
      setState(1367);
      match(JennyParser::LeftBrace);
      setState(1368);
      enumeratorlist(0);
      setState(1369);
      match(JennyParser::Comma);
      setState(1370);
      match(JennyParser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumheadContext ------------------------------------------------------------------

JennyParser::EnumheadContext::EnumheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::EnumkeyContext* JennyParser::EnumheadContext::enumkey() {
  return getRuleContext<JennyParser::EnumkeyContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::EnumheadContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* JennyParser::EnumheadContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::EnumbaseContext* JennyParser::EnumheadContext::enumbase() {
  return getRuleContext<JennyParser::EnumbaseContext>(0);
}

JennyParser::NestednamespecifierContext* JennyParser::EnumheadContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}


size_t JennyParser::EnumheadContext::getRuleIndex() const {
  return JennyParser::RuleEnumhead;
}

void JennyParser::EnumheadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumhead(this);
}

void JennyParser::EnumheadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumhead(this);
}


antlrcpp::Any JennyParser::EnumheadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEnumhead(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::EnumheadContext* JennyParser::enumhead() {
  EnumheadContext *_localctx = _tracker.createInstance<EnumheadContext>(_ctx, getState());
  enterRule(_localctx, 168, JennyParser::RuleEnumhead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1393);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1374);
      enumkey();
      setState(1376);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1375);
        attributespecifierseq(0);
      }
      setState(1379);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Identifier) {
        setState(1378);
        match(JennyParser::Identifier);
      }
      setState(1382);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Colon) {
        setState(1381);
        enumbase();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1384);
      enumkey();
      setState(1386);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1385);
        attributespecifierseq(0);
      }
      setState(1388);
      nestednamespecifier(0);
      setState(1389);
      match(JennyParser::Identifier);
      setState(1391);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Colon) {
        setState(1390);
        enumbase();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaqueenumdeclarationContext ------------------------------------------------------------------

JennyParser::OpaqueenumdeclarationContext::OpaqueenumdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::EnumkeyContext* JennyParser::OpaqueenumdeclarationContext::enumkey() {
  return getRuleContext<JennyParser::EnumkeyContext>(0);
}

tree::TerminalNode* JennyParser::OpaqueenumdeclarationContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::AttributespecifierseqContext* JennyParser::OpaqueenumdeclarationContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::EnumbaseContext* JennyParser::OpaqueenumdeclarationContext::enumbase() {
  return getRuleContext<JennyParser::EnumbaseContext>(0);
}


size_t JennyParser::OpaqueenumdeclarationContext::getRuleIndex() const {
  return JennyParser::RuleOpaqueenumdeclaration;
}

void JennyParser::OpaqueenumdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpaqueenumdeclaration(this);
}

void JennyParser::OpaqueenumdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpaqueenumdeclaration(this);
}


antlrcpp::Any JennyParser::OpaqueenumdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitOpaqueenumdeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::OpaqueenumdeclarationContext* JennyParser::opaqueenumdeclaration() {
  OpaqueenumdeclarationContext *_localctx = _tracker.createInstance<OpaqueenumdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 170, JennyParser::RuleOpaqueenumdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1395);
    enumkey();
    setState(1397);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
      setState(1396);
      attributespecifierseq(0);
    }
    setState(1399);
    match(JennyParser::Identifier);
    setState(1401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Colon) {
      setState(1400);
      enumbase();
    }
    setState(1403);
    match(JennyParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumkeyContext ------------------------------------------------------------------

JennyParser::EnumkeyContext::EnumkeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::EnumkeyContext::Enum() {
  return getToken(JennyParser::Enum, 0);
}

tree::TerminalNode* JennyParser::EnumkeyContext::Class() {
  return getToken(JennyParser::Class, 0);
}

tree::TerminalNode* JennyParser::EnumkeyContext::Struct() {
  return getToken(JennyParser::Struct, 0);
}


size_t JennyParser::EnumkeyContext::getRuleIndex() const {
  return JennyParser::RuleEnumkey;
}

void JennyParser::EnumkeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumkey(this);
}

void JennyParser::EnumkeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumkey(this);
}


antlrcpp::Any JennyParser::EnumkeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEnumkey(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::EnumkeyContext* JennyParser::enumkey() {
  EnumkeyContext *_localctx = _tracker.createInstance<EnumkeyContext>(_ctx, getState());
  enterRule(_localctx, 172, JennyParser::RuleEnumkey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1410);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1405);
      match(JennyParser::Enum);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1406);
      match(JennyParser::Enum);
      setState(1407);
      match(JennyParser::Class);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1408);
      match(JennyParser::Enum);
      setState(1409);
      match(JennyParser::Struct);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumbaseContext ------------------------------------------------------------------

JennyParser::EnumbaseContext::EnumbaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TypespecifierseqContext* JennyParser::EnumbaseContext::typespecifierseq() {
  return getRuleContext<JennyParser::TypespecifierseqContext>(0);
}


size_t JennyParser::EnumbaseContext::getRuleIndex() const {
  return JennyParser::RuleEnumbase;
}

void JennyParser::EnumbaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumbase(this);
}

void JennyParser::EnumbaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumbase(this);
}


antlrcpp::Any JennyParser::EnumbaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEnumbase(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::EnumbaseContext* JennyParser::enumbase() {
  EnumbaseContext *_localctx = _tracker.createInstance<EnumbaseContext>(_ctx, getState());
  enterRule(_localctx, 174, JennyParser::RuleEnumbase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1412);
    match(JennyParser::Colon);
    setState(1413);
    typespecifierseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorlistContext ------------------------------------------------------------------

JennyParser::EnumeratorlistContext::EnumeratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::EnumeratordefinitionContext* JennyParser::EnumeratorlistContext::enumeratordefinition() {
  return getRuleContext<JennyParser::EnumeratordefinitionContext>(0);
}

JennyParser::EnumeratorlistContext* JennyParser::EnumeratorlistContext::enumeratorlist() {
  return getRuleContext<JennyParser::EnumeratorlistContext>(0);
}


size_t JennyParser::EnumeratorlistContext::getRuleIndex() const {
  return JennyParser::RuleEnumeratorlist;
}

void JennyParser::EnumeratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorlist(this);
}

void JennyParser::EnumeratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorlist(this);
}


antlrcpp::Any JennyParser::EnumeratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEnumeratorlist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::EnumeratorlistContext* JennyParser::enumeratorlist() {
   return enumeratorlist(0);
}

JennyParser::EnumeratorlistContext* JennyParser::enumeratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::EnumeratorlistContext *_localctx = _tracker.createInstance<EnumeratorlistContext>(_ctx, parentState);
  JennyParser::EnumeratorlistContext *previousContext = _localctx;
  size_t startState = 176;
  enterRecursionRule(_localctx, 176, JennyParser::RuleEnumeratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1416);
    enumeratordefinition();
    _ctx->stop = _input->LT(-1);
    setState(1423);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EnumeratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEnumeratorlist);
        setState(1418);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1419);
        match(JennyParser::Comma);
        setState(1420);
        enumeratordefinition(); 
      }
      setState(1425);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EnumeratordefinitionContext ------------------------------------------------------------------

JennyParser::EnumeratordefinitionContext::EnumeratordefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::EnumeratorContext* JennyParser::EnumeratordefinitionContext::enumerator() {
  return getRuleContext<JennyParser::EnumeratorContext>(0);
}

JennyParser::ConstantexpressionContext* JennyParser::EnumeratordefinitionContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}


size_t JennyParser::EnumeratordefinitionContext::getRuleIndex() const {
  return JennyParser::RuleEnumeratordefinition;
}

void JennyParser::EnumeratordefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratordefinition(this);
}

void JennyParser::EnumeratordefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratordefinition(this);
}


antlrcpp::Any JennyParser::EnumeratordefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEnumeratordefinition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::EnumeratordefinitionContext* JennyParser::enumeratordefinition() {
  EnumeratordefinitionContext *_localctx = _tracker.createInstance<EnumeratordefinitionContext>(_ctx, getState());
  enterRule(_localctx, 178, JennyParser::RuleEnumeratordefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1431);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1426);
      enumerator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1427);
      enumerator();
      setState(1428);
      match(JennyParser::Assign);
      setState(1429);
      constantexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

JennyParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::EnumeratorContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::EnumeratorContext::getRuleIndex() const {
  return JennyParser::RuleEnumerator;
}

void JennyParser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void JennyParser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}


antlrcpp::Any JennyParser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::EnumeratorContext* JennyParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 180, JennyParser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1433);
    match(JennyParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacenameContext ------------------------------------------------------------------

JennyParser::NamespacenameContext::NamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::OriginalnamespacenameContext* JennyParser::NamespacenameContext::originalnamespacename() {
  return getRuleContext<JennyParser::OriginalnamespacenameContext>(0);
}

JennyParser::NamespacealiasContext* JennyParser::NamespacenameContext::namespacealias() {
  return getRuleContext<JennyParser::NamespacealiasContext>(0);
}


size_t JennyParser::NamespacenameContext::getRuleIndex() const {
  return JennyParser::RuleNamespacename;
}

void JennyParser::NamespacenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacename(this);
}

void JennyParser::NamespacenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacename(this);
}


antlrcpp::Any JennyParser::NamespacenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNamespacename(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NamespacenameContext* JennyParser::namespacename() {
  NamespacenameContext *_localctx = _tracker.createInstance<NamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 182, JennyParser::RuleNamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1435);
      originalnamespacename();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1436);
      namespacealias();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacenameContext ------------------------------------------------------------------

JennyParser::OriginalnamespacenameContext::OriginalnamespacenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::OriginalnamespacenameContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::OriginalnamespacenameContext::getRuleIndex() const {
  return JennyParser::RuleOriginalnamespacename;
}

void JennyParser::OriginalnamespacenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalnamespacename(this);
}

void JennyParser::OriginalnamespacenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalnamespacename(this);
}


antlrcpp::Any JennyParser::OriginalnamespacenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitOriginalnamespacename(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::OriginalnamespacenameContext* JennyParser::originalnamespacename() {
  OriginalnamespacenameContext *_localctx = _tracker.createInstance<OriginalnamespacenameContext>(_ctx, getState());
  enterRule(_localctx, 184, JennyParser::RuleOriginalnamespacename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1439);
    match(JennyParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacedefinitionContext ------------------------------------------------------------------

JennyParser::NamespacedefinitionContext::NamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::NamednamespacedefinitionContext* JennyParser::NamespacedefinitionContext::namednamespacedefinition() {
  return getRuleContext<JennyParser::NamednamespacedefinitionContext>(0);
}

JennyParser::UnnamednamespacedefinitionContext* JennyParser::NamespacedefinitionContext::unnamednamespacedefinition() {
  return getRuleContext<JennyParser::UnnamednamespacedefinitionContext>(0);
}


size_t JennyParser::NamespacedefinitionContext::getRuleIndex() const {
  return JennyParser::RuleNamespacedefinition;
}

void JennyParser::NamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacedefinition(this);
}

void JennyParser::NamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacedefinition(this);
}


antlrcpp::Any JennyParser::NamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NamespacedefinitionContext* JennyParser::namespacedefinition() {
  NamespacedefinitionContext *_localctx = _tracker.createInstance<NamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 186, JennyParser::RuleNamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1443);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1441);
      namednamespacedefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1442);
      unnamednamespacedefinition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamednamespacedefinitionContext ------------------------------------------------------------------

JennyParser::NamednamespacedefinitionContext::NamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::OriginalnamespacedefinitionContext* JennyParser::NamednamespacedefinitionContext::originalnamespacedefinition() {
  return getRuleContext<JennyParser::OriginalnamespacedefinitionContext>(0);
}

JennyParser::ExtensionnamespacedefinitionContext* JennyParser::NamednamespacedefinitionContext::extensionnamespacedefinition() {
  return getRuleContext<JennyParser::ExtensionnamespacedefinitionContext>(0);
}


size_t JennyParser::NamednamespacedefinitionContext::getRuleIndex() const {
  return JennyParser::RuleNamednamespacedefinition;
}

void JennyParser::NamednamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamednamespacedefinition(this);
}

void JennyParser::NamednamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamednamespacedefinition(this);
}


antlrcpp::Any JennyParser::NamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNamednamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NamednamespacedefinitionContext* JennyParser::namednamespacedefinition() {
  NamednamespacedefinitionContext *_localctx = _tracker.createInstance<NamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 188, JennyParser::RuleNamednamespacedefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 141, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1445);
      originalnamespacedefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1446);
      extensionnamespacedefinition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OriginalnamespacedefinitionContext ------------------------------------------------------------------

JennyParser::OriginalnamespacedefinitionContext::OriginalnamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::OriginalnamespacedefinitionContext::Namespace() {
  return getToken(JennyParser::Namespace, 0);
}

tree::TerminalNode* JennyParser::OriginalnamespacedefinitionContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::NamespacebodyContext* JennyParser::OriginalnamespacedefinitionContext::namespacebody() {
  return getRuleContext<JennyParser::NamespacebodyContext>(0);
}

tree::TerminalNode* JennyParser::OriginalnamespacedefinitionContext::Inline() {
  return getToken(JennyParser::Inline, 0);
}


size_t JennyParser::OriginalnamespacedefinitionContext::getRuleIndex() const {
  return JennyParser::RuleOriginalnamespacedefinition;
}

void JennyParser::OriginalnamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOriginalnamespacedefinition(this);
}

void JennyParser::OriginalnamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOriginalnamespacedefinition(this);
}


antlrcpp::Any JennyParser::OriginalnamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitOriginalnamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::OriginalnamespacedefinitionContext* JennyParser::originalnamespacedefinition() {
  OriginalnamespacedefinitionContext *_localctx = _tracker.createInstance<OriginalnamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 190, JennyParser::RuleOriginalnamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Inline) {
      setState(1449);
      match(JennyParser::Inline);
    }
    setState(1452);
    match(JennyParser::Namespace);
    setState(1453);
    match(JennyParser::Identifier);
    setState(1454);
    match(JennyParser::LeftBrace);
    setState(1455);
    namespacebody();
    setState(1456);
    match(JennyParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExtensionnamespacedefinitionContext ------------------------------------------------------------------

JennyParser::ExtensionnamespacedefinitionContext::ExtensionnamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::ExtensionnamespacedefinitionContext::Namespace() {
  return getToken(JennyParser::Namespace, 0);
}

JennyParser::OriginalnamespacenameContext* JennyParser::ExtensionnamespacedefinitionContext::originalnamespacename() {
  return getRuleContext<JennyParser::OriginalnamespacenameContext>(0);
}

JennyParser::NamespacebodyContext* JennyParser::ExtensionnamespacedefinitionContext::namespacebody() {
  return getRuleContext<JennyParser::NamespacebodyContext>(0);
}

tree::TerminalNode* JennyParser::ExtensionnamespacedefinitionContext::Inline() {
  return getToken(JennyParser::Inline, 0);
}


size_t JennyParser::ExtensionnamespacedefinitionContext::getRuleIndex() const {
  return JennyParser::RuleExtensionnamespacedefinition;
}

void JennyParser::ExtensionnamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtensionnamespacedefinition(this);
}

void JennyParser::ExtensionnamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtensionnamespacedefinition(this);
}


antlrcpp::Any JennyParser::ExtensionnamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitExtensionnamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ExtensionnamespacedefinitionContext* JennyParser::extensionnamespacedefinition() {
  ExtensionnamespacedefinitionContext *_localctx = _tracker.createInstance<ExtensionnamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 192, JennyParser::RuleExtensionnamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1459);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Inline) {
      setState(1458);
      match(JennyParser::Inline);
    }
    setState(1461);
    match(JennyParser::Namespace);
    setState(1462);
    originalnamespacename();
    setState(1463);
    match(JennyParser::LeftBrace);
    setState(1464);
    namespacebody();
    setState(1465);
    match(JennyParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnnamednamespacedefinitionContext ------------------------------------------------------------------

JennyParser::UnnamednamespacedefinitionContext::UnnamednamespacedefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::UnnamednamespacedefinitionContext::Namespace() {
  return getToken(JennyParser::Namespace, 0);
}

JennyParser::NamespacebodyContext* JennyParser::UnnamednamespacedefinitionContext::namespacebody() {
  return getRuleContext<JennyParser::NamespacebodyContext>(0);
}

tree::TerminalNode* JennyParser::UnnamednamespacedefinitionContext::Inline() {
  return getToken(JennyParser::Inline, 0);
}


size_t JennyParser::UnnamednamespacedefinitionContext::getRuleIndex() const {
  return JennyParser::RuleUnnamednamespacedefinition;
}

void JennyParser::UnnamednamespacedefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnnamednamespacedefinition(this);
}

void JennyParser::UnnamednamespacedefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnnamednamespacedefinition(this);
}


antlrcpp::Any JennyParser::UnnamednamespacedefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitUnnamednamespacedefinition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::UnnamednamespacedefinitionContext* JennyParser::unnamednamespacedefinition() {
  UnnamednamespacedefinitionContext *_localctx = _tracker.createInstance<UnnamednamespacedefinitionContext>(_ctx, getState());
  enterRule(_localctx, 194, JennyParser::RuleUnnamednamespacedefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Inline) {
      setState(1467);
      match(JennyParser::Inline);
    }
    setState(1470);
    match(JennyParser::Namespace);
    setState(1471);
    match(JennyParser::LeftBrace);
    setState(1472);
    namespacebody();
    setState(1473);
    match(JennyParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacebodyContext ------------------------------------------------------------------

JennyParser::NamespacebodyContext::NamespacebodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclarationseqContext* JennyParser::NamespacebodyContext::declarationseq() {
  return getRuleContext<JennyParser::DeclarationseqContext>(0);
}


size_t JennyParser::NamespacebodyContext::getRuleIndex() const {
  return JennyParser::RuleNamespacebody;
}

void JennyParser::NamespacebodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacebody(this);
}

void JennyParser::NamespacebodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacebody(this);
}


antlrcpp::Any JennyParser::NamespacebodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNamespacebody(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NamespacebodyContext* JennyParser::namespacebody() {
  NamespacebodyContext *_localctx = _tracker.createInstance<NamespacebodyContext>(_ctx, getState());
  enterRule(_localctx, 196, JennyParser::RuleNamespacebody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1476);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JennyParser::T__2)
      | (1ULL << JennyParser::Alignas)
      | (1ULL << JennyParser::Asm)
      | (1ULL << JennyParser::Auto)
      | (1ULL << JennyParser::Bool)
      | (1ULL << JennyParser::Char)
      | (1ULL << JennyParser::Char16)
      | (1ULL << JennyParser::Char32)
      | (1ULL << JennyParser::Class)
      | (1ULL << JennyParser::Const)
      | (1ULL << JennyParser::Constexpr)
      | (1ULL << JennyParser::Decltype)
      | (1ULL << JennyParser::Double)
      | (1ULL << JennyParser::Enum)
      | (1ULL << JennyParser::Explicit)
      | (1ULL << JennyParser::Extern)
      | (1ULL << JennyParser::Float)
      | (1ULL << JennyParser::Friend)
      | (1ULL << JennyParser::Inline)
      | (1ULL << JennyParser::Int)
      | (1ULL << JennyParser::Long)
      | (1ULL << JennyParser::Mutable)
      | (1ULL << JennyParser::Namespace)
      | (1ULL << JennyParser::Operator)
      | (1ULL << JennyParser::Register)
      | (1ULL << JennyParser::Short)
      | (1ULL << JennyParser::Signed)
      | (1ULL << JennyParser::Static)
      | (1ULL << JennyParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (JennyParser::Struct - 65))
      | (1ULL << (JennyParser::Template - 65))
      | (1ULL << (JennyParser::Thread_local - 65))
      | (1ULL << (JennyParser::Typedef - 65))
      | (1ULL << (JennyParser::Typename_ - 65))
      | (1ULL << (JennyParser::Union - 65))
      | (1ULL << (JennyParser::Unsigned - 65))
      | (1ULL << (JennyParser::Using - 65))
      | (1ULL << (JennyParser::Virtual - 65))
      | (1ULL << (JennyParser::Void - 65))
      | (1ULL << (JennyParser::Volatile - 65))
      | (1ULL << (JennyParser::Wchar - 65))
      | (1ULL << (JennyParser::LeftParen - 65))
      | (1ULL << (JennyParser::LeftBracket - 65))
      | (1ULL << (JennyParser::Star - 65))
      | (1ULL << (JennyParser::And - 65))
      | (1ULL << (JennyParser::Tilde - 65))
      | (1ULL << (JennyParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (JennyParser::Semi - 129))
      | (1ULL << (JennyParser::Ellipsis - 129))
      | (1ULL << (JennyParser::Identifier - 129)))) != 0)) {
      setState(1475);
      declarationseq(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacealiasContext ------------------------------------------------------------------

JennyParser::NamespacealiasContext::NamespacealiasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::NamespacealiasContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::NamespacealiasContext::getRuleIndex() const {
  return JennyParser::RuleNamespacealias;
}

void JennyParser::NamespacealiasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacealias(this);
}

void JennyParser::NamespacealiasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacealias(this);
}


antlrcpp::Any JennyParser::NamespacealiasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNamespacealias(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NamespacealiasContext* JennyParser::namespacealias() {
  NamespacealiasContext *_localctx = _tracker.createInstance<NamespacealiasContext>(_ctx, getState());
  enterRule(_localctx, 198, JennyParser::RuleNamespacealias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1478);
    match(JennyParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespacealiasdefinitionContext ------------------------------------------------------------------

JennyParser::NamespacealiasdefinitionContext::NamespacealiasdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::NamespacealiasdefinitionContext::Namespace() {
  return getToken(JennyParser::Namespace, 0);
}

tree::TerminalNode* JennyParser::NamespacealiasdefinitionContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::QualifiednamespacespecifierContext* JennyParser::NamespacealiasdefinitionContext::qualifiednamespacespecifier() {
  return getRuleContext<JennyParser::QualifiednamespacespecifierContext>(0);
}


size_t JennyParser::NamespacealiasdefinitionContext::getRuleIndex() const {
  return JennyParser::RuleNamespacealiasdefinition;
}

void JennyParser::NamespacealiasdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespacealiasdefinition(this);
}

void JennyParser::NamespacealiasdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespacealiasdefinition(this);
}


antlrcpp::Any JennyParser::NamespacealiasdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNamespacealiasdefinition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NamespacealiasdefinitionContext* JennyParser::namespacealiasdefinition() {
  NamespacealiasdefinitionContext *_localctx = _tracker.createInstance<NamespacealiasdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 200, JennyParser::RuleNamespacealiasdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1480);
    match(JennyParser::Namespace);
    setState(1481);
    match(JennyParser::Identifier);
    setState(1482);
    match(JennyParser::Assign);
    setState(1483);
    qualifiednamespacespecifier();
    setState(1484);
    match(JennyParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiednamespacespecifierContext ------------------------------------------------------------------

JennyParser::QualifiednamespacespecifierContext::QualifiednamespacespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::NamespacenameContext* JennyParser::QualifiednamespacespecifierContext::namespacename() {
  return getRuleContext<JennyParser::NamespacenameContext>(0);
}

JennyParser::NestednamespecifierContext* JennyParser::QualifiednamespacespecifierContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}


size_t JennyParser::QualifiednamespacespecifierContext::getRuleIndex() const {
  return JennyParser::RuleQualifiednamespacespecifier;
}

void JennyParser::QualifiednamespacespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiednamespacespecifier(this);
}

void JennyParser::QualifiednamespacespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiednamespacespecifier(this);
}


antlrcpp::Any JennyParser::QualifiednamespacespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitQualifiednamespacespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::QualifiednamespacespecifierContext* JennyParser::qualifiednamespacespecifier() {
  QualifiednamespacespecifierContext *_localctx = _tracker.createInstance<QualifiednamespacespecifierContext>(_ctx, getState());
  enterRule(_localctx, 202, JennyParser::RuleQualifiednamespacespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1487);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx)) {
    case 1: {
      setState(1486);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1489);
    namespacename();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingdeclarationContext ------------------------------------------------------------------

JennyParser::UsingdeclarationContext::UsingdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::UsingdeclarationContext::Using() {
  return getToken(JennyParser::Using, 0);
}

JennyParser::NestednamespecifierContext* JennyParser::UsingdeclarationContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}

JennyParser::UnqualifiedidContext* JennyParser::UsingdeclarationContext::unqualifiedid() {
  return getRuleContext<JennyParser::UnqualifiedidContext>(0);
}

tree::TerminalNode* JennyParser::UsingdeclarationContext::Typename_() {
  return getToken(JennyParser::Typename_, 0);
}


size_t JennyParser::UsingdeclarationContext::getRuleIndex() const {
  return JennyParser::RuleUsingdeclaration;
}

void JennyParser::UsingdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingdeclaration(this);
}

void JennyParser::UsingdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingdeclaration(this);
}


antlrcpp::Any JennyParser::UsingdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitUsingdeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::UsingdeclarationContext* JennyParser::usingdeclaration() {
  UsingdeclarationContext *_localctx = _tracker.createInstance<UsingdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 204, JennyParser::RuleUsingdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1491);
      match(JennyParser::Using);
      setState(1493);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Typename_) {
        setState(1492);
        match(JennyParser::Typename_);
      }
      setState(1495);
      nestednamespecifier(0);
      setState(1496);
      unqualifiedid();
      setState(1497);
      match(JennyParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1499);
      match(JennyParser::Using);
      setState(1500);
      match(JennyParser::Doublecolon);
      setState(1501);
      unqualifiedid();
      setState(1502);
      match(JennyParser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingdirectiveContext ------------------------------------------------------------------

JennyParser::UsingdirectiveContext::UsingdirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::UsingdirectiveContext::Using() {
  return getToken(JennyParser::Using, 0);
}

tree::TerminalNode* JennyParser::UsingdirectiveContext::Namespace() {
  return getToken(JennyParser::Namespace, 0);
}

JennyParser::NamespacenameContext* JennyParser::UsingdirectiveContext::namespacename() {
  return getRuleContext<JennyParser::NamespacenameContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::UsingdirectiveContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::NestednamespecifierContext* JennyParser::UsingdirectiveContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}


size_t JennyParser::UsingdirectiveContext::getRuleIndex() const {
  return JennyParser::RuleUsingdirective;
}

void JennyParser::UsingdirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingdirective(this);
}

void JennyParser::UsingdirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingdirective(this);
}


antlrcpp::Any JennyParser::UsingdirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitUsingdirective(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::UsingdirectiveContext* JennyParser::usingdirective() {
  UsingdirectiveContext *_localctx = _tracker.createInstance<UsingdirectiveContext>(_ctx, getState());
  enterRule(_localctx, 206, JennyParser::RuleUsingdirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1507);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
      setState(1506);
      attributespecifierseq(0);
    }
    setState(1509);
    match(JennyParser::Using);
    setState(1510);
    match(JennyParser::Namespace);
    setState(1512);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx)) {
    case 1: {
      setState(1511);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1514);
    namespacename();
    setState(1515);
    match(JennyParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmdefinitionContext ------------------------------------------------------------------

JennyParser::AsmdefinitionContext::AsmdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::AsmdefinitionContext::Asm() {
  return getToken(JennyParser::Asm, 0);
}

tree::TerminalNode* JennyParser::AsmdefinitionContext::Stringliteral() {
  return getToken(JennyParser::Stringliteral, 0);
}


size_t JennyParser::AsmdefinitionContext::getRuleIndex() const {
  return JennyParser::RuleAsmdefinition;
}

void JennyParser::AsmdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsmdefinition(this);
}

void JennyParser::AsmdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsmdefinition(this);
}


antlrcpp::Any JennyParser::AsmdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAsmdefinition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AsmdefinitionContext* JennyParser::asmdefinition() {
  AsmdefinitionContext *_localctx = _tracker.createInstance<AsmdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 208, JennyParser::RuleAsmdefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1517);
    match(JennyParser::Asm);
    setState(1518);
    match(JennyParser::LeftParen);
    setState(1519);
    match(JennyParser::Stringliteral);
    setState(1520);
    match(JennyParser::RightParen);
    setState(1521);
    match(JennyParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkagespecificationContext ------------------------------------------------------------------

JennyParser::LinkagespecificationContext::LinkagespecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::LinkagespecificationContext::Extern() {
  return getToken(JennyParser::Extern, 0);
}

tree::TerminalNode* JennyParser::LinkagespecificationContext::Stringliteral() {
  return getToken(JennyParser::Stringliteral, 0);
}

JennyParser::DeclarationseqContext* JennyParser::LinkagespecificationContext::declarationseq() {
  return getRuleContext<JennyParser::DeclarationseqContext>(0);
}

JennyParser::DeclarationContext* JennyParser::LinkagespecificationContext::declaration() {
  return getRuleContext<JennyParser::DeclarationContext>(0);
}


size_t JennyParser::LinkagespecificationContext::getRuleIndex() const {
  return JennyParser::RuleLinkagespecification;
}

void JennyParser::LinkagespecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLinkagespecification(this);
}

void JennyParser::LinkagespecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLinkagespecification(this);
}


antlrcpp::Any JennyParser::LinkagespecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLinkagespecification(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::LinkagespecificationContext* JennyParser::linkagespecification() {
  LinkagespecificationContext *_localctx = _tracker.createInstance<LinkagespecificationContext>(_ctx, getState());
  enterRule(_localctx, 210, JennyParser::RuleLinkagespecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1533);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1523);
      match(JennyParser::Extern);
      setState(1524);
      match(JennyParser::Stringliteral);
      setState(1525);
      match(JennyParser::LeftBrace);
      setState(1527);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__2)
        | (1ULL << JennyParser::Alignas)
        | (1ULL << JennyParser::Asm)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Class)
        | (1ULL << JennyParser::Const)
        | (1ULL << JennyParser::Constexpr)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Enum)
        | (1ULL << JennyParser::Explicit)
        | (1ULL << JennyParser::Extern)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Friend)
        | (1ULL << JennyParser::Inline)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::Mutable)
        | (1ULL << JennyParser::Namespace)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Register)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Static)
        | (1ULL << JennyParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (JennyParser::Struct - 65))
        | (1ULL << (JennyParser::Template - 65))
        | (1ULL << (JennyParser::Thread_local - 65))
        | (1ULL << (JennyParser::Typedef - 65))
        | (1ULL << (JennyParser::Typename_ - 65))
        | (1ULL << (JennyParser::Union - 65))
        | (1ULL << (JennyParser::Unsigned - 65))
        | (1ULL << (JennyParser::Using - 65))
        | (1ULL << (JennyParser::Virtual - 65))
        | (1ULL << (JennyParser::Void - 65))
        | (1ULL << (JennyParser::Volatile - 65))
        | (1ULL << (JennyParser::Wchar - 65))
        | (1ULL << (JennyParser::LeftParen - 65))
        | (1ULL << (JennyParser::LeftBracket - 65))
        | (1ULL << (JennyParser::Star - 65))
        | (1ULL << (JennyParser::And - 65))
        | (1ULL << (JennyParser::Tilde - 65))
        | (1ULL << (JennyParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (JennyParser::Semi - 129))
        | (1ULL << (JennyParser::Ellipsis - 129))
        | (1ULL << (JennyParser::Identifier - 129)))) != 0)) {
        setState(1526);
        declarationseq(0);
      }
      setState(1529);
      match(JennyParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1530);
      match(JennyParser::Extern);
      setState(1531);
      match(JennyParser::Stringliteral);
      setState(1532);
      declaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributespecifierseqContext ------------------------------------------------------------------

JennyParser::AttributespecifierseqContext::AttributespecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AttributespecifierContext* JennyParser::AttributespecifierseqContext::attributespecifier() {
  return getRuleContext<JennyParser::AttributespecifierContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::AttributespecifierseqContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}


size_t JennyParser::AttributespecifierseqContext::getRuleIndex() const {
  return JennyParser::RuleAttributespecifierseq;
}

void JennyParser::AttributespecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributespecifierseq(this);
}

void JennyParser::AttributespecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributespecifierseq(this);
}


antlrcpp::Any JennyParser::AttributespecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAttributespecifierseq(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::AttributespecifierseqContext* JennyParser::attributespecifierseq() {
   return attributespecifierseq(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::attributespecifierseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::AttributespecifierseqContext *_localctx = _tracker.createInstance<AttributespecifierseqContext>(_ctx, parentState);
  JennyParser::AttributespecifierseqContext *previousContext = _localctx;
  size_t startState = 212;
  enterRecursionRule(_localctx, 212, JennyParser::RuleAttributespecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1536);
    attributespecifier();
    _ctx->stop = _input->LT(-1);
    setState(1542);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AttributespecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAttributespecifierseq);
        setState(1538);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1539);
        attributespecifier(); 
      }
      setState(1544);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributespecifierContext ------------------------------------------------------------------

JennyParser::AttributespecifierContext::AttributespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AttributelistContext* JennyParser::AttributespecifierContext::attributelist() {
  return getRuleContext<JennyParser::AttributelistContext>(0);
}

JennyParser::AlignmentspecifierContext* JennyParser::AttributespecifierContext::alignmentspecifier() {
  return getRuleContext<JennyParser::AlignmentspecifierContext>(0);
}


size_t JennyParser::AttributespecifierContext::getRuleIndex() const {
  return JennyParser::RuleAttributespecifier;
}

void JennyParser::AttributespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributespecifier(this);
}

void JennyParser::AttributespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributespecifier(this);
}


antlrcpp::Any JennyParser::AttributespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAttributespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AttributespecifierContext* JennyParser::attributespecifier() {
  AttributespecifierContext *_localctx = _tracker.createInstance<AttributespecifierContext>(_ctx, getState());
  enterRule(_localctx, 214, JennyParser::RuleAttributespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1552);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1545);
        match(JennyParser::LeftBracket);
        setState(1546);
        match(JennyParser::LeftBracket);
        setState(1547);
        attributelist(0);
        setState(1548);
        match(JennyParser::RightBracket);
        setState(1549);
        match(JennyParser::RightBracket);
        break;
      }

      case JennyParser::Alignas: {
        enterOuterAlt(_localctx, 2);
        setState(1551);
        alignmentspecifier();
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

//----------------- AlignmentspecifierContext ------------------------------------------------------------------

JennyParser::AlignmentspecifierContext::AlignmentspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::AlignmentspecifierContext::Alignas() {
  return getToken(JennyParser::Alignas, 0);
}

JennyParser::ThetypeidContext* JennyParser::AlignmentspecifierContext::thetypeid() {
  return getRuleContext<JennyParser::ThetypeidContext>(0);
}

JennyParser::ConstantexpressionContext* JennyParser::AlignmentspecifierContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}


size_t JennyParser::AlignmentspecifierContext::getRuleIndex() const {
  return JennyParser::RuleAlignmentspecifier;
}

void JennyParser::AlignmentspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlignmentspecifier(this);
}

void JennyParser::AlignmentspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlignmentspecifier(this);
}


antlrcpp::Any JennyParser::AlignmentspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAlignmentspecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AlignmentspecifierContext* JennyParser::alignmentspecifier() {
  AlignmentspecifierContext *_localctx = _tracker.createInstance<AlignmentspecifierContext>(_ctx, getState());
  enterRule(_localctx, 216, JennyParser::RuleAlignmentspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1570);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1554);
      match(JennyParser::Alignas);
      setState(1555);
      match(JennyParser::LeftParen);
      setState(1556);
      thetypeid();
      setState(1558);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Ellipsis) {
        setState(1557);
        match(JennyParser::Ellipsis);
      }
      setState(1560);
      match(JennyParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1562);
      match(JennyParser::Alignas);
      setState(1563);
      match(JennyParser::LeftParen);
      setState(1564);
      constantexpression();
      setState(1566);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Ellipsis) {
        setState(1565);
        match(JennyParser::Ellipsis);
      }
      setState(1568);
      match(JennyParser::RightParen);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributelistContext ------------------------------------------------------------------

JennyParser::AttributelistContext::AttributelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AttributeContext* JennyParser::AttributelistContext::attribute() {
  return getRuleContext<JennyParser::AttributeContext>(0);
}

JennyParser::AttributelistContext* JennyParser::AttributelistContext::attributelist() {
  return getRuleContext<JennyParser::AttributelistContext>(0);
}


size_t JennyParser::AttributelistContext::getRuleIndex() const {
  return JennyParser::RuleAttributelist;
}

void JennyParser::AttributelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributelist(this);
}

void JennyParser::AttributelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributelist(this);
}


antlrcpp::Any JennyParser::AttributelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAttributelist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::AttributelistContext* JennyParser::attributelist() {
   return attributelist(0);
}

JennyParser::AttributelistContext* JennyParser::attributelist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::AttributelistContext *_localctx = _tracker.createInstance<AttributelistContext>(_ctx, parentState);
  JennyParser::AttributelistContext *previousContext = _localctx;
  size_t startState = 218;
  enterRecursionRule(_localctx, 218, JennyParser::RuleAttributelist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1579);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx)) {
    case 1: {
      setState(1574);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
      case 1: {
        setState(1573);
        attribute();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1576);
      attribute();
      setState(1577);
      match(JennyParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1593);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1591);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 161, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1581);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1582);
          match(JennyParser::Comma);
          setState(1584);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx)) {
          case 1: {
            setState(1583);
            attribute();
            break;
          }

          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AttributelistContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributelist);
          setState(1586);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1587);
          match(JennyParser::Comma);
          setState(1588);
          attribute();
          setState(1589);
          match(JennyParser::Ellipsis);
          break;
        }

        } 
      }
      setState(1595);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

JennyParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AttributetokenContext* JennyParser::AttributeContext::attributetoken() {
  return getRuleContext<JennyParser::AttributetokenContext>(0);
}

JennyParser::AttributeargumentclauseContext* JennyParser::AttributeContext::attributeargumentclause() {
  return getRuleContext<JennyParser::AttributeargumentclauseContext>(0);
}


size_t JennyParser::AttributeContext::getRuleIndex() const {
  return JennyParser::RuleAttribute;
}

void JennyParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void JennyParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}


antlrcpp::Any JennyParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AttributeContext* JennyParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 220, JennyParser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1596);
    attributetoken();
    setState(1598);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
    case 1: {
      setState(1597);
      attributeargumentclause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributetokenContext ------------------------------------------------------------------

JennyParser::AttributetokenContext::AttributetokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::AttributetokenContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::AttributescopedtokenContext* JennyParser::AttributetokenContext::attributescopedtoken() {
  return getRuleContext<JennyParser::AttributescopedtokenContext>(0);
}


size_t JennyParser::AttributetokenContext::getRuleIndex() const {
  return JennyParser::RuleAttributetoken;
}

void JennyParser::AttributetokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributetoken(this);
}

void JennyParser::AttributetokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributetoken(this);
}


antlrcpp::Any JennyParser::AttributetokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAttributetoken(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AttributetokenContext* JennyParser::attributetoken() {
  AttributetokenContext *_localctx = _tracker.createInstance<AttributetokenContext>(_ctx, getState());
  enterRule(_localctx, 222, JennyParser::RuleAttributetoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1602);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1600);
      match(JennyParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1601);
      attributescopedtoken();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributescopedtokenContext ------------------------------------------------------------------

JennyParser::AttributescopedtokenContext::AttributescopedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AttributenamespaceContext* JennyParser::AttributescopedtokenContext::attributenamespace() {
  return getRuleContext<JennyParser::AttributenamespaceContext>(0);
}

tree::TerminalNode* JennyParser::AttributescopedtokenContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::AttributescopedtokenContext::getRuleIndex() const {
  return JennyParser::RuleAttributescopedtoken;
}

void JennyParser::AttributescopedtokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributescopedtoken(this);
}

void JennyParser::AttributescopedtokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributescopedtoken(this);
}


antlrcpp::Any JennyParser::AttributescopedtokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAttributescopedtoken(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AttributescopedtokenContext* JennyParser::attributescopedtoken() {
  AttributescopedtokenContext *_localctx = _tracker.createInstance<AttributescopedtokenContext>(_ctx, getState());
  enterRule(_localctx, 224, JennyParser::RuleAttributescopedtoken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1604);
    attributenamespace();
    setState(1605);
    match(JennyParser::Doublecolon);
    setState(1606);
    match(JennyParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributenamespaceContext ------------------------------------------------------------------

JennyParser::AttributenamespaceContext::AttributenamespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::AttributenamespaceContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::AttributenamespaceContext::getRuleIndex() const {
  return JennyParser::RuleAttributenamespace;
}

void JennyParser::AttributenamespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributenamespace(this);
}

void JennyParser::AttributenamespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributenamespace(this);
}


antlrcpp::Any JennyParser::AttributenamespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAttributenamespace(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AttributenamespaceContext* JennyParser::attributenamespace() {
  AttributenamespaceContext *_localctx = _tracker.createInstance<AttributenamespaceContext>(_ctx, getState());
  enterRule(_localctx, 226, JennyParser::RuleAttributenamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1608);
    match(JennyParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeargumentclauseContext ------------------------------------------------------------------

JennyParser::AttributeargumentclauseContext::AttributeargumentclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::BalancedtokenseqContext* JennyParser::AttributeargumentclauseContext::balancedtokenseq() {
  return getRuleContext<JennyParser::BalancedtokenseqContext>(0);
}


size_t JennyParser::AttributeargumentclauseContext::getRuleIndex() const {
  return JennyParser::RuleAttributeargumentclause;
}

void JennyParser::AttributeargumentclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeargumentclause(this);
}

void JennyParser::AttributeargumentclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeargumentclause(this);
}


antlrcpp::Any JennyParser::AttributeargumentclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAttributeargumentclause(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AttributeargumentclauseContext* JennyParser::attributeargumentclause() {
  AttributeargumentclauseContext *_localctx = _tracker.createInstance<AttributeargumentclauseContext>(_ctx, getState());
  enterRule(_localctx, 228, JennyParser::RuleAttributeargumentclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1610);
    match(JennyParser::LeftParen);
    setState(1611);
    balancedtokenseq(0);
    setState(1612);
    match(JennyParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedtokenseqContext ------------------------------------------------------------------

JennyParser::BalancedtokenseqContext::BalancedtokenseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::BalancedtokenContext* JennyParser::BalancedtokenseqContext::balancedtoken() {
  return getRuleContext<JennyParser::BalancedtokenContext>(0);
}

JennyParser::BalancedtokenseqContext* JennyParser::BalancedtokenseqContext::balancedtokenseq() {
  return getRuleContext<JennyParser::BalancedtokenseqContext>(0);
}


size_t JennyParser::BalancedtokenseqContext::getRuleIndex() const {
  return JennyParser::RuleBalancedtokenseq;
}

void JennyParser::BalancedtokenseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedtokenseq(this);
}

void JennyParser::BalancedtokenseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedtokenseq(this);
}


antlrcpp::Any JennyParser::BalancedtokenseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBalancedtokenseq(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::BalancedtokenseqContext* JennyParser::balancedtokenseq() {
   return balancedtokenseq(0);
}

JennyParser::BalancedtokenseqContext* JennyParser::balancedtokenseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::BalancedtokenseqContext *_localctx = _tracker.createInstance<BalancedtokenseqContext>(_ctx, parentState);
  JennyParser::BalancedtokenseqContext *previousContext = _localctx;
  size_t startState = 230;
  enterRecursionRule(_localctx, 230, JennyParser::RuleBalancedtokenseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1616);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      setState(1615);
      balancedtoken();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1622);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BalancedtokenseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBalancedtokenseq);
        setState(1618);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1619);
        balancedtoken(); 
      }
      setState(1624);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BalancedtokenContext ------------------------------------------------------------------

JennyParser::BalancedtokenContext::BalancedtokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::BalancedtokenseqContext* JennyParser::BalancedtokenContext::balancedtokenseq() {
  return getRuleContext<JennyParser::BalancedtokenseqContext>(0);
}


size_t JennyParser::BalancedtokenContext::getRuleIndex() const {
  return JennyParser::RuleBalancedtoken;
}

void JennyParser::BalancedtokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedtoken(this);
}

void JennyParser::BalancedtokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedtoken(this);
}


antlrcpp::Any JennyParser::BalancedtokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBalancedtoken(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::BalancedtokenContext* JennyParser::balancedtoken() {
  BalancedtokenContext *_localctx = _tracker.createInstance<BalancedtokenContext>(_ctx, getState());
  enterRule(_localctx, 232, JennyParser::RuleBalancedtoken);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1642);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::LeftParen: {
        enterOuterAlt(_localctx, 1);
        setState(1625);
        match(JennyParser::LeftParen);
        setState(1626);
        balancedtokenseq(0);
        setState(1627);
        match(JennyParser::RightParen);
        break;
      }

      case JennyParser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1629);
        match(JennyParser::LeftBracket);
        setState(1630);
        balancedtokenseq(0);
        setState(1631);
        match(JennyParser::RightBracket);
        break;
      }

      case JennyParser::LeftBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1633);
        match(JennyParser::LeftBrace);
        setState(1634);
        balancedtokenseq(0);
        setState(1635);
        match(JennyParser::RightBrace);
        break;
      }

      case JennyParser::T__0:
      case JennyParser::T__1:
      case JennyParser::T__2:
      case JennyParser::T__3:
      case JennyParser::T__4:
      case JennyParser::T__5:
      case JennyParser::MultiLineMacro:
      case JennyParser::Directive:
      case JennyParser::Alignas:
      case JennyParser::Alignof:
      case JennyParser::Asm:
      case JennyParser::Auto:
      case JennyParser::Bool:
      case JennyParser::Break:
      case JennyParser::Case:
      case JennyParser::Catch:
      case JennyParser::Char:
      case JennyParser::Char16:
      case JennyParser::Char32:
      case JennyParser::Class:
      case JennyParser::Const:
      case JennyParser::Constexpr:
      case JennyParser::Const_cast:
      case JennyParser::Continue:
      case JennyParser::Decltype:
      case JennyParser::Default:
      case JennyParser::Delete:
      case JennyParser::Do:
      case JennyParser::Double:
      case JennyParser::Dynamic_cast:
      case JennyParser::Else:
      case JennyParser::Enum:
      case JennyParser::Explicit:
      case JennyParser::Export:
      case JennyParser::Extern:
      case JennyParser::False:
      case JennyParser::Final:
      case JennyParser::Float:
      case JennyParser::For:
      case JennyParser::Friend:
      case JennyParser::Goto:
      case JennyParser::If:
      case JennyParser::Inline:
      case JennyParser::Int:
      case JennyParser::Long:
      case JennyParser::Mutable:
      case JennyParser::Namespace:
      case JennyParser::New:
      case JennyParser::Noexcept:
      case JennyParser::Nullptr:
      case JennyParser::Operator:
      case JennyParser::Override:
      case JennyParser::Private:
      case JennyParser::Protected:
      case JennyParser::Public:
      case JennyParser::Register:
      case JennyParser::Reinterpret_cast:
      case JennyParser::Return:
      case JennyParser::Short:
      case JennyParser::Signed:
      case JennyParser::Sizeof:
      case JennyParser::Static:
      case JennyParser::Static_assert:
      case JennyParser::Static_cast:
      case JennyParser::Struct:
      case JennyParser::Switch:
      case JennyParser::Template:
      case JennyParser::This:
      case JennyParser::Thread_local:
      case JennyParser::Throw:
      case JennyParser::True:
      case JennyParser::Try:
      case JennyParser::Typedef:
      case JennyParser::Typeid_:
      case JennyParser::Typename_:
      case JennyParser::Union:
      case JennyParser::Unsigned:
      case JennyParser::Using:
      case JennyParser::Virtual:
      case JennyParser::Void:
      case JennyParser::Volatile:
      case JennyParser::Wchar:
      case JennyParser::While:
      case JennyParser::Plus:
      case JennyParser::Minus:
      case JennyParser::Star:
      case JennyParser::Div:
      case JennyParser::Mod:
      case JennyParser::Caret:
      case JennyParser::And:
      case JennyParser::Or:
      case JennyParser::Tilde:
      case JennyParser::Not:
      case JennyParser::Assign:
      case JennyParser::Less:
      case JennyParser::Greater:
      case JennyParser::PlusAssign:
      case JennyParser::MinusAssign:
      case JennyParser::StarAssign:
      case JennyParser::DivAssign:
      case JennyParser::ModAssign:
      case JennyParser::XorAssign:
      case JennyParser::AndAssign:
      case JennyParser::OrAssign:
      case JennyParser::LeftShift:
      case JennyParser::RightShift:
      case JennyParser::LeftShiftAssign:
      case JennyParser::RightShiftAssign:
      case JennyParser::Equal:
      case JennyParser::NotEqual:
      case JennyParser::LessEqual:
      case JennyParser::GreaterEqual:
      case JennyParser::AndAnd:
      case JennyParser::OrOr:
      case JennyParser::PlusPlus:
      case JennyParser::MinusMinus:
      case JennyParser::Comma:
      case JennyParser::ArrowStar:
      case JennyParser::Arrow:
      case JennyParser::Question:
      case JennyParser::Colon:
      case JennyParser::Doublecolon:
      case JennyParser::Semi:
      case JennyParser::Dot:
      case JennyParser::DotStar:
      case JennyParser::Ellipsis:
      case JennyParser::Identifier:
      case JennyParser::Integerliteral:
      case JennyParser::Decimalliteral:
      case JennyParser::Octalliteral:
      case JennyParser::Hexadecimalliteral:
      case JennyParser::Binaryliteral:
      case JennyParser::Integersuffix:
      case JennyParser::Characterliteral:
      case JennyParser::Floatingliteral:
      case JennyParser::Stringliteral:
      case JennyParser::Userdefinedintegerliteral:
      case JennyParser::Userdefinedfloatingliteral:
      case JennyParser::Userdefinedstringliteral:
      case JennyParser::Userdefinedcharacterliteral:
      case JennyParser::Whitespace:
      case JennyParser::Newline:
      case JennyParser::BlockComment:
      case JennyParser::LineComment: {
        enterOuterAlt(_localctx, 4);
        setState(1638); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(1637);
                  _la = _input->LA(1);
                  if (_la == 0 || _la == Token::EOF || (((((_la - 84) & ~ 0x3fULL) == 0) &&
                    ((1ULL << (_la - 84)) & ((1ULL << (JennyParser::LeftParen - 84))
                    | (1ULL << (JennyParser::RightParen - 84))
                    | (1ULL << (JennyParser::LeftBracket - 84))
                    | (1ULL << (JennyParser::RightBracket - 84))
                    | (1ULL << (JennyParser::LeftBrace - 84))
                    | (1ULL << (JennyParser::RightBrace - 84)))) != 0))) {
                  _errHandler->recoverInline(this);
                  }
                  else {
                    _errHandler->reportMatch(this);
                    consume();
                  }
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(1640); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
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

//----------------- InitdeclaratorlistContext ------------------------------------------------------------------

JennyParser::InitdeclaratorlistContext::InitdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::InitdeclaratorContext* JennyParser::InitdeclaratorlistContext::initdeclarator() {
  return getRuleContext<JennyParser::InitdeclaratorContext>(0);
}

JennyParser::InitdeclaratorlistContext* JennyParser::InitdeclaratorlistContext::initdeclaratorlist() {
  return getRuleContext<JennyParser::InitdeclaratorlistContext>(0);
}


size_t JennyParser::InitdeclaratorlistContext::getRuleIndex() const {
  return JennyParser::RuleInitdeclaratorlist;
}

void JennyParser::InitdeclaratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitdeclaratorlist(this);
}

void JennyParser::InitdeclaratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitdeclaratorlist(this);
}


antlrcpp::Any JennyParser::InitdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitInitdeclaratorlist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::InitdeclaratorlistContext* JennyParser::initdeclaratorlist() {
   return initdeclaratorlist(0);
}

JennyParser::InitdeclaratorlistContext* JennyParser::initdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::InitdeclaratorlistContext *_localctx = _tracker.createInstance<InitdeclaratorlistContext>(_ctx, parentState);
  JennyParser::InitdeclaratorlistContext *previousContext = _localctx;
  size_t startState = 234;
  enterRecursionRule(_localctx, 234, JennyParser::RuleInitdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1645);
    initdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(1652);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitdeclaratorlist);
        setState(1647);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1648);
        match(JennyParser::Comma);
        setState(1649);
        initdeclarator(); 
      }
      setState(1654);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InitdeclaratorContext ------------------------------------------------------------------

JennyParser::InitdeclaratorContext::InitdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclaratorContext* JennyParser::InitdeclaratorContext::declarator() {
  return getRuleContext<JennyParser::DeclaratorContext>(0);
}

JennyParser::InitializerContext* JennyParser::InitdeclaratorContext::initializer() {
  return getRuleContext<JennyParser::InitializerContext>(0);
}


size_t JennyParser::InitdeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleInitdeclarator;
}

void JennyParser::InitdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitdeclarator(this);
}

void JennyParser::InitdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitdeclarator(this);
}


antlrcpp::Any JennyParser::InitdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitInitdeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::InitdeclaratorContext* JennyParser::initdeclarator() {
  InitdeclaratorContext *_localctx = _tracker.createInstance<InitdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 236, JennyParser::RuleInitdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1655);
    declarator();
    setState(1657);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 170, _ctx)) {
    case 1: {
      setState(1656);
      initializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

JennyParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::PtrdeclaratorContext* JennyParser::DeclaratorContext::ptrdeclarator() {
  return getRuleContext<JennyParser::PtrdeclaratorContext>(0);
}

JennyParser::NoptrdeclaratorContext* JennyParser::DeclaratorContext::noptrdeclarator() {
  return getRuleContext<JennyParser::NoptrdeclaratorContext>(0);
}

JennyParser::ParametersandqualifiersContext* JennyParser::DeclaratorContext::parametersandqualifiers() {
  return getRuleContext<JennyParser::ParametersandqualifiersContext>(0);
}

JennyParser::TrailingreturntypeContext* JennyParser::DeclaratorContext::trailingreturntype() {
  return getRuleContext<JennyParser::TrailingreturntypeContext>(0);
}


size_t JennyParser::DeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleDeclarator;
}

void JennyParser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void JennyParser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}


antlrcpp::Any JennyParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::DeclaratorContext* JennyParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 238, JennyParser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1664);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1659);
      ptrdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1660);
      noptrdeclarator(0);
      setState(1661);
      parametersandqualifiers();
      setState(1662);
      trailingreturntype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrdeclaratorContext ------------------------------------------------------------------

JennyParser::PtrdeclaratorContext::PtrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::NoptrdeclaratorContext* JennyParser::PtrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<JennyParser::NoptrdeclaratorContext>(0);
}

JennyParser::PtroperatorContext* JennyParser::PtrdeclaratorContext::ptroperator() {
  return getRuleContext<JennyParser::PtroperatorContext>(0);
}

JennyParser::PtrdeclaratorContext* JennyParser::PtrdeclaratorContext::ptrdeclarator() {
  return getRuleContext<JennyParser::PtrdeclaratorContext>(0);
}


size_t JennyParser::PtrdeclaratorContext::getRuleIndex() const {
  return JennyParser::RulePtrdeclarator;
}

void JennyParser::PtrdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrdeclarator(this);
}

void JennyParser::PtrdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrdeclarator(this);
}


antlrcpp::Any JennyParser::PtrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitPtrdeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::PtrdeclaratorContext* JennyParser::ptrdeclarator() {
  PtrdeclaratorContext *_localctx = _tracker.createInstance<PtrdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 240, JennyParser::RulePtrdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1670);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1666);
      noptrdeclarator(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1667);
      ptroperator();
      setState(1668);
      ptrdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoptrdeclaratorContext ------------------------------------------------------------------

JennyParser::NoptrdeclaratorContext::NoptrdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclaratoridContext* JennyParser::NoptrdeclaratorContext::declaratorid() {
  return getRuleContext<JennyParser::DeclaratoridContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::NoptrdeclaratorContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::PtrdeclaratorContext* JennyParser::NoptrdeclaratorContext::ptrdeclarator() {
  return getRuleContext<JennyParser::PtrdeclaratorContext>(0);
}

JennyParser::NoptrdeclaratorContext* JennyParser::NoptrdeclaratorContext::noptrdeclarator() {
  return getRuleContext<JennyParser::NoptrdeclaratorContext>(0);
}

JennyParser::ParametersandqualifiersContext* JennyParser::NoptrdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<JennyParser::ParametersandqualifiersContext>(0);
}

JennyParser::ConstantexpressionContext* JennyParser::NoptrdeclaratorContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}


size_t JennyParser::NoptrdeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleNoptrdeclarator;
}

void JennyParser::NoptrdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrdeclarator(this);
}

void JennyParser::NoptrdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrdeclarator(this);
}


antlrcpp::Any JennyParser::NoptrdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNoptrdeclarator(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::NoptrdeclaratorContext* JennyParser::noptrdeclarator() {
   return noptrdeclarator(0);
}

JennyParser::NoptrdeclaratorContext* JennyParser::noptrdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::NoptrdeclaratorContext *_localctx = _tracker.createInstance<NoptrdeclaratorContext>(_ctx, parentState);
  JennyParser::NoptrdeclaratorContext *previousContext = _localctx;
  size_t startState = 242;
  enterRecursionRule(_localctx, 242, JennyParser::RuleNoptrdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1681);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Decltype:
      case JennyParser::Operator:
      case JennyParser::Tilde:
      case JennyParser::Doublecolon:
      case JennyParser::Ellipsis:
      case JennyParser::Identifier: {
        setState(1673);
        declaratorid();
        setState(1675);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
        case 1: {
          setState(1674);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case JennyParser::LeftParen: {
        setState(1677);
        match(JennyParser::LeftParen);
        setState(1678);
        ptrdeclarator();
        setState(1679);
        match(JennyParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1696);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1694);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1683);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1684);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrdeclarator);
          setState(1685);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1686);
          match(JennyParser::LeftBracket);
          setState(1688);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JennyParser::T__0)
            | (1ULL << JennyParser::T__1)
            | (1ULL << JennyParser::Alignof)
            | (1ULL << JennyParser::Auto)
            | (1ULL << JennyParser::Bool)
            | (1ULL << JennyParser::Char)
            | (1ULL << JennyParser::Char16)
            | (1ULL << JennyParser::Char32)
            | (1ULL << JennyParser::Const_cast)
            | (1ULL << JennyParser::Decltype)
            | (1ULL << JennyParser::Delete)
            | (1ULL << JennyParser::Double)
            | (1ULL << JennyParser::Dynamic_cast)
            | (1ULL << JennyParser::False)
            | (1ULL << JennyParser::Float)
            | (1ULL << JennyParser::Int)
            | (1ULL << JennyParser::Long)
            | (1ULL << JennyParser::New)
            | (1ULL << JennyParser::Noexcept)
            | (1ULL << JennyParser::Nullptr)
            | (1ULL << JennyParser::Operator)
            | (1ULL << JennyParser::Reinterpret_cast)
            | (1ULL << JennyParser::Short)
            | (1ULL << JennyParser::Signed)
            | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
            | (1ULL << (JennyParser::This - 64))
            | (1ULL << (JennyParser::True - 64))
            | (1ULL << (JennyParser::Typeid_ - 64))
            | (1ULL << (JennyParser::Typename_ - 64))
            | (1ULL << (JennyParser::Unsigned - 64))
            | (1ULL << (JennyParser::Void - 64))
            | (1ULL << (JennyParser::Wchar - 64))
            | (1ULL << (JennyParser::LeftParen - 64))
            | (1ULL << (JennyParser::LeftBracket - 64))
            | (1ULL << (JennyParser::Plus - 64))
            | (1ULL << (JennyParser::Minus - 64))
            | (1ULL << (JennyParser::Star - 64))
            | (1ULL << (JennyParser::And - 64))
            | (1ULL << (JennyParser::Or - 64))
            | (1ULL << (JennyParser::Tilde - 64))
            | (1ULL << (JennyParser::PlusPlus - 64))
            | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
            | (1ULL << (JennyParser::Identifier - 128))
            | (1ULL << (JennyParser::Integerliteral - 128))
            | (1ULL << (JennyParser::Characterliteral - 128))
            | (1ULL << (JennyParser::Floatingliteral - 128))
            | (1ULL << (JennyParser::Stringliteral - 128))
            | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
            | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
            | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
            | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
            setState(1687);
            constantexpression();
          }
          setState(1690);
          match(JennyParser::RightBracket);
          setState(1692);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx)) {
          case 1: {
            setState(1691);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1698);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParametersandqualifiersContext ------------------------------------------------------------------

JennyParser::ParametersandqualifiersContext::ParametersandqualifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ParameterdeclarationclauseContext* JennyParser::ParametersandqualifiersContext::parameterdeclarationclause() {
  return getRuleContext<JennyParser::ParameterdeclarationclauseContext>(0);
}

JennyParser::CvqualifierseqContext* JennyParser::ParametersandqualifiersContext::cvqualifierseq() {
  return getRuleContext<JennyParser::CvqualifierseqContext>(0);
}

JennyParser::RefqualifierContext* JennyParser::ParametersandqualifiersContext::refqualifier() {
  return getRuleContext<JennyParser::RefqualifierContext>(0);
}

JennyParser::ExceptionspecificationContext* JennyParser::ParametersandqualifiersContext::exceptionspecification() {
  return getRuleContext<JennyParser::ExceptionspecificationContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::ParametersandqualifiersContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}


size_t JennyParser::ParametersandqualifiersContext::getRuleIndex() const {
  return JennyParser::RuleParametersandqualifiers;
}

void JennyParser::ParametersandqualifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersandqualifiers(this);
}

void JennyParser::ParametersandqualifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersandqualifiers(this);
}


antlrcpp::Any JennyParser::ParametersandqualifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitParametersandqualifiers(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ParametersandqualifiersContext* JennyParser::parametersandqualifiers() {
  ParametersandqualifiersContext *_localctx = _tracker.createInstance<ParametersandqualifiersContext>(_ctx, getState());
  enterRule(_localctx, 244, JennyParser::RuleParametersandqualifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1699);
    match(JennyParser::LeftParen);
    setState(1700);
    parameterdeclarationclause();
    setState(1701);
    match(JennyParser::RightParen);
    setState(1703);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 179, _ctx)) {
    case 1: {
      setState(1702);
      cvqualifierseq();
      break;
    }

    }
    setState(1706);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
    case 1: {
      setState(1705);
      refqualifier();
      break;
    }

    }
    setState(1709);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 181, _ctx)) {
    case 1: {
      setState(1708);
      exceptionspecification();
      break;
    }

    }
    setState(1712);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 182, _ctx)) {
    case 1: {
      setState(1711);
      attributespecifierseq(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingreturntypeContext ------------------------------------------------------------------

JennyParser::TrailingreturntypeContext::TrailingreturntypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TrailingtypespecifierseqContext* JennyParser::TrailingreturntypeContext::trailingtypespecifierseq() {
  return getRuleContext<JennyParser::TrailingtypespecifierseqContext>(0);
}

JennyParser::AbstractdeclaratorContext* JennyParser::TrailingreturntypeContext::abstractdeclarator() {
  return getRuleContext<JennyParser::AbstractdeclaratorContext>(0);
}


size_t JennyParser::TrailingreturntypeContext::getRuleIndex() const {
  return JennyParser::RuleTrailingreturntype;
}

void JennyParser::TrailingreturntypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingreturntype(this);
}

void JennyParser::TrailingreturntypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingreturntype(this);
}


antlrcpp::Any JennyParser::TrailingreturntypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTrailingreturntype(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TrailingreturntypeContext* JennyParser::trailingreturntype() {
  TrailingreturntypeContext *_localctx = _tracker.createInstance<TrailingreturntypeContext>(_ctx, getState());
  enterRule(_localctx, 246, JennyParser::RuleTrailingreturntype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1714);
    match(JennyParser::Arrow);
    setState(1715);
    trailingtypespecifierseq();
    setState(1717);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx)) {
    case 1: {
      setState(1716);
      abstractdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtroperatorContext ------------------------------------------------------------------

JennyParser::PtroperatorContext::PtroperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AttributespecifierseqContext* JennyParser::PtroperatorContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::CvqualifierseqContext* JennyParser::PtroperatorContext::cvqualifierseq() {
  return getRuleContext<JennyParser::CvqualifierseqContext>(0);
}

JennyParser::NestednamespecifierContext* JennyParser::PtroperatorContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}


size_t JennyParser::PtroperatorContext::getRuleIndex() const {
  return JennyParser::RulePtroperator;
}

void JennyParser::PtroperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtroperator(this);
}

void JennyParser::PtroperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtroperator(this);
}


antlrcpp::Any JennyParser::PtroperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitPtroperator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::PtroperatorContext* JennyParser::ptroperator() {
  PtroperatorContext *_localctx = _tracker.createInstance<PtroperatorContext>(_ctx, getState());
  enterRule(_localctx, 248, JennyParser::RulePtroperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1742);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Star: {
        enterOuterAlt(_localctx, 1);
        setState(1719);
        match(JennyParser::Star);
        setState(1721);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx)) {
        case 1: {
          setState(1720);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1724);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx)) {
        case 1: {
          setState(1723);
          cvqualifierseq();
          break;
        }

        }
        break;
      }

      case JennyParser::And: {
        enterOuterAlt(_localctx, 2);
        setState(1726);
        match(JennyParser::And);
        setState(1728);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
        case 1: {
          setState(1727);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case JennyParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(1730);
        match(JennyParser::T__2);
        setState(1732);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
        case 1: {
          setState(1731);
          attributespecifierseq(0);
          break;
        }

        }
        break;
      }

      case JennyParser::Decltype:
      case JennyParser::Doublecolon:
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(1734);
        nestednamespecifier(0);
        setState(1735);
        match(JennyParser::Star);
        setState(1737);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx)) {
        case 1: {
          setState(1736);
          attributespecifierseq(0);
          break;
        }

        }
        setState(1740);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
        case 1: {
          setState(1739);
          cvqualifierseq();
          break;
        }

        }
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

//----------------- CvqualifierseqContext ------------------------------------------------------------------

JennyParser::CvqualifierseqContext::CvqualifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::CvqualifierContext* JennyParser::CvqualifierseqContext::cvqualifier() {
  return getRuleContext<JennyParser::CvqualifierContext>(0);
}

JennyParser::CvqualifierseqContext* JennyParser::CvqualifierseqContext::cvqualifierseq() {
  return getRuleContext<JennyParser::CvqualifierseqContext>(0);
}


size_t JennyParser::CvqualifierseqContext::getRuleIndex() const {
  return JennyParser::RuleCvqualifierseq;
}

void JennyParser::CvqualifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvqualifierseq(this);
}

void JennyParser::CvqualifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvqualifierseq(this);
}


antlrcpp::Any JennyParser::CvqualifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitCvqualifierseq(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::CvqualifierseqContext* JennyParser::cvqualifierseq() {
  CvqualifierseqContext *_localctx = _tracker.createInstance<CvqualifierseqContext>(_ctx, getState());
  enterRule(_localctx, 250, JennyParser::RuleCvqualifierseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1744);
    cvqualifier();
    setState(1746);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
    case 1: {
      setState(1745);
      cvqualifierseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CvqualifierContext ------------------------------------------------------------------

JennyParser::CvqualifierContext::CvqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::CvqualifierContext::Const() {
  return getToken(JennyParser::Const, 0);
}

tree::TerminalNode* JennyParser::CvqualifierContext::Volatile() {
  return getToken(JennyParser::Volatile, 0);
}


size_t JennyParser::CvqualifierContext::getRuleIndex() const {
  return JennyParser::RuleCvqualifier;
}

void JennyParser::CvqualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvqualifier(this);
}

void JennyParser::CvqualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvqualifier(this);
}


antlrcpp::Any JennyParser::CvqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitCvqualifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::CvqualifierContext* JennyParser::cvqualifier() {
  CvqualifierContext *_localctx = _tracker.createInstance<CvqualifierContext>(_ctx, getState());
  enterRule(_localctx, 252, JennyParser::RuleCvqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1748);
    _la = _input->LA(1);
    if (!(_la == JennyParser::Const

    || _la == JennyParser::Volatile)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RefqualifierContext ------------------------------------------------------------------

JennyParser::RefqualifierContext::RefqualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JennyParser::RefqualifierContext::getRuleIndex() const {
  return JennyParser::RuleRefqualifier;
}

void JennyParser::RefqualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRefqualifier(this);
}

void JennyParser::RefqualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRefqualifier(this);
}


antlrcpp::Any JennyParser::RefqualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitRefqualifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::RefqualifierContext* JennyParser::refqualifier() {
  RefqualifierContext *_localctx = _tracker.createInstance<RefqualifierContext>(_ctx, getState());
  enterRule(_localctx, 254, JennyParser::RuleRefqualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1750);
    _la = _input->LA(1);
    if (!(_la == JennyParser::T__2 || _la == JennyParser::And)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratoridContext ------------------------------------------------------------------

JennyParser::DeclaratoridContext::DeclaratoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::IdexpressionContext* JennyParser::DeclaratoridContext::idexpression() {
  return getRuleContext<JennyParser::IdexpressionContext>(0);
}


size_t JennyParser::DeclaratoridContext::getRuleIndex() const {
  return JennyParser::RuleDeclaratorid;
}

void JennyParser::DeclaratoridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaratorid(this);
}

void JennyParser::DeclaratoridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaratorid(this);
}


antlrcpp::Any JennyParser::DeclaratoridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDeclaratorid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::DeclaratoridContext* JennyParser::declaratorid() {
  DeclaratoridContext *_localctx = _tracker.createInstance<DeclaratoridContext>(_ctx, getState());
  enterRule(_localctx, 256, JennyParser::RuleDeclaratorid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1753);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Ellipsis) {
      setState(1752);
      match(JennyParser::Ellipsis);
    }
    setState(1755);
    idexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThetypeidContext ------------------------------------------------------------------

JennyParser::ThetypeidContext::ThetypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TypespecifierseqContext* JennyParser::ThetypeidContext::typespecifierseq() {
  return getRuleContext<JennyParser::TypespecifierseqContext>(0);
}

JennyParser::AbstractdeclaratorContext* JennyParser::ThetypeidContext::abstractdeclarator() {
  return getRuleContext<JennyParser::AbstractdeclaratorContext>(0);
}


size_t JennyParser::ThetypeidContext::getRuleIndex() const {
  return JennyParser::RuleThetypeid;
}

void JennyParser::ThetypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThetypeid(this);
}

void JennyParser::ThetypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThetypeid(this);
}


antlrcpp::Any JennyParser::ThetypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitThetypeid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ThetypeidContext* JennyParser::thetypeid() {
  ThetypeidContext *_localctx = _tracker.createInstance<ThetypeidContext>(_ctx, getState());
  enterRule(_localctx, 258, JennyParser::RuleThetypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1757);
    typespecifierseq();
    setState(1759);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
    case 1: {
      setState(1758);
      abstractdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractdeclaratorContext ------------------------------------------------------------------

JennyParser::AbstractdeclaratorContext::AbstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::PtrabstractdeclaratorContext* JennyParser::AbstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<JennyParser::PtrabstractdeclaratorContext>(0);
}

JennyParser::ParametersandqualifiersContext* JennyParser::AbstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<JennyParser::ParametersandqualifiersContext>(0);
}

JennyParser::TrailingreturntypeContext* JennyParser::AbstractdeclaratorContext::trailingreturntype() {
  return getRuleContext<JennyParser::TrailingreturntypeContext>(0);
}

JennyParser::NoptrabstractdeclaratorContext* JennyParser::AbstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<JennyParser::NoptrabstractdeclaratorContext>(0);
}

JennyParser::AbstractpackdeclaratorContext* JennyParser::AbstractdeclaratorContext::abstractpackdeclarator() {
  return getRuleContext<JennyParser::AbstractpackdeclaratorContext>(0);
}


size_t JennyParser::AbstractdeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleAbstractdeclarator;
}

void JennyParser::AbstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractdeclarator(this);
}

void JennyParser::AbstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractdeclarator(this);
}


antlrcpp::Any JennyParser::AbstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAbstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AbstractdeclaratorContext* JennyParser::abstractdeclarator() {
  AbstractdeclaratorContext *_localctx = _tracker.createInstance<AbstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 260, JennyParser::RuleAbstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1769);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1761);
      ptrabstractdeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1763);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
      case 1: {
        setState(1762);
        noptrabstractdeclarator(0);
        break;
      }

      }
      setState(1765);
      parametersandqualifiers();
      setState(1766);
      trailingreturntype();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1768);
      abstractpackdeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PtrabstractdeclaratorContext ------------------------------------------------------------------

JennyParser::PtrabstractdeclaratorContext::PtrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::NoptrabstractdeclaratorContext* JennyParser::PtrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<JennyParser::NoptrabstractdeclaratorContext>(0);
}

JennyParser::PtroperatorContext* JennyParser::PtrabstractdeclaratorContext::ptroperator() {
  return getRuleContext<JennyParser::PtroperatorContext>(0);
}

JennyParser::PtrabstractdeclaratorContext* JennyParser::PtrabstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<JennyParser::PtrabstractdeclaratorContext>(0);
}


size_t JennyParser::PtrabstractdeclaratorContext::getRuleIndex() const {
  return JennyParser::RulePtrabstractdeclarator;
}

void JennyParser::PtrabstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPtrabstractdeclarator(this);
}

void JennyParser::PtrabstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPtrabstractdeclarator(this);
}


antlrcpp::Any JennyParser::PtrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitPtrabstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::PtrabstractdeclaratorContext* JennyParser::ptrabstractdeclarator() {
  PtrabstractdeclaratorContext *_localctx = _tracker.createInstance<PtrabstractdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 262, JennyParser::RulePtrabstractdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1776);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::LeftParen:
      case JennyParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1771);
        noptrabstractdeclarator(0);
        break;
      }

      case JennyParser::T__2:
      case JennyParser::Decltype:
      case JennyParser::Star:
      case JennyParser::And:
      case JennyParser::Doublecolon:
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1772);
        ptroperator();
        setState(1774);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
        case 1: {
          setState(1773);
          ptrabstractdeclarator();
          break;
        }

        }
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

//----------------- NoptrabstractdeclaratorContext ------------------------------------------------------------------

JennyParser::NoptrabstractdeclaratorContext::NoptrabstractdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ParametersandqualifiersContext* JennyParser::NoptrabstractdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<JennyParser::ParametersandqualifiersContext>(0);
}

JennyParser::ConstantexpressionContext* JennyParser::NoptrabstractdeclaratorContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::NoptrabstractdeclaratorContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::PtrabstractdeclaratorContext* JennyParser::NoptrabstractdeclaratorContext::ptrabstractdeclarator() {
  return getRuleContext<JennyParser::PtrabstractdeclaratorContext>(0);
}

JennyParser::NoptrabstractdeclaratorContext* JennyParser::NoptrabstractdeclaratorContext::noptrabstractdeclarator() {
  return getRuleContext<JennyParser::NoptrabstractdeclaratorContext>(0);
}


size_t JennyParser::NoptrabstractdeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleNoptrabstractdeclarator;
}

void JennyParser::NoptrabstractdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrabstractdeclarator(this);
}

void JennyParser::NoptrabstractdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrabstractdeclarator(this);
}


antlrcpp::Any JennyParser::NoptrabstractdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNoptrabstractdeclarator(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::NoptrabstractdeclaratorContext* JennyParser::noptrabstractdeclarator() {
   return noptrabstractdeclarator(0);
}

JennyParser::NoptrabstractdeclaratorContext* JennyParser::noptrabstractdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::NoptrabstractdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(_ctx, parentState);
  JennyParser::NoptrabstractdeclaratorContext *previousContext = _localctx;
  size_t startState = 264;
  enterRecursionRule(_localctx, 264, JennyParser::RuleNoptrabstractdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1792);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
    case 1: {
      setState(1779);
      parametersandqualifiers();
      break;
    }

    case 2: {
      setState(1780);
      match(JennyParser::LeftBracket);
      setState(1782);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__0)
        | (1ULL << JennyParser::T__1)
        | (1ULL << JennyParser::Alignof)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Const_cast)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Delete)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Dynamic_cast)
        | (1ULL << JennyParser::False)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::New)
        | (1ULL << JennyParser::Noexcept)
        | (1ULL << JennyParser::Nullptr)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Reinterpret_cast)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
        | (1ULL << (JennyParser::This - 64))
        | (1ULL << (JennyParser::True - 64))
        | (1ULL << (JennyParser::Typeid_ - 64))
        | (1ULL << (JennyParser::Typename_ - 64))
        | (1ULL << (JennyParser::Unsigned - 64))
        | (1ULL << (JennyParser::Void - 64))
        | (1ULL << (JennyParser::Wchar - 64))
        | (1ULL << (JennyParser::LeftParen - 64))
        | (1ULL << (JennyParser::LeftBracket - 64))
        | (1ULL << (JennyParser::Plus - 64))
        | (1ULL << (JennyParser::Minus - 64))
        | (1ULL << (JennyParser::Star - 64))
        | (1ULL << (JennyParser::And - 64))
        | (1ULL << (JennyParser::Or - 64))
        | (1ULL << (JennyParser::Tilde - 64))
        | (1ULL << (JennyParser::PlusPlus - 64))
        | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
        | (1ULL << (JennyParser::Identifier - 128))
        | (1ULL << (JennyParser::Integerliteral - 128))
        | (1ULL << (JennyParser::Characterliteral - 128))
        | (1ULL << (JennyParser::Floatingliteral - 128))
        | (1ULL << (JennyParser::Stringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
        | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(1781);
        constantexpression();
      }
      setState(1784);
      match(JennyParser::RightBracket);
      setState(1786);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
      case 1: {
        setState(1785);
        attributespecifierseq(0);
        break;
      }

      }
      break;
    }

    case 3: {
      setState(1788);
      match(JennyParser::LeftParen);
      setState(1789);
      ptrabstractdeclarator();
      setState(1790);
      match(JennyParser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1807);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1805);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1794);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1795);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractdeclarator);
          setState(1796);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1797);
          match(JennyParser::LeftBracket);
          setState(1799);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JennyParser::T__0)
            | (1ULL << JennyParser::T__1)
            | (1ULL << JennyParser::Alignof)
            | (1ULL << JennyParser::Auto)
            | (1ULL << JennyParser::Bool)
            | (1ULL << JennyParser::Char)
            | (1ULL << JennyParser::Char16)
            | (1ULL << JennyParser::Char32)
            | (1ULL << JennyParser::Const_cast)
            | (1ULL << JennyParser::Decltype)
            | (1ULL << JennyParser::Delete)
            | (1ULL << JennyParser::Double)
            | (1ULL << JennyParser::Dynamic_cast)
            | (1ULL << JennyParser::False)
            | (1ULL << JennyParser::Float)
            | (1ULL << JennyParser::Int)
            | (1ULL << JennyParser::Long)
            | (1ULL << JennyParser::New)
            | (1ULL << JennyParser::Noexcept)
            | (1ULL << JennyParser::Nullptr)
            | (1ULL << JennyParser::Operator)
            | (1ULL << JennyParser::Reinterpret_cast)
            | (1ULL << JennyParser::Short)
            | (1ULL << JennyParser::Signed)
            | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
            | (1ULL << (JennyParser::This - 64))
            | (1ULL << (JennyParser::True - 64))
            | (1ULL << (JennyParser::Typeid_ - 64))
            | (1ULL << (JennyParser::Typename_ - 64))
            | (1ULL << (JennyParser::Unsigned - 64))
            | (1ULL << (JennyParser::Void - 64))
            | (1ULL << (JennyParser::Wchar - 64))
            | (1ULL << (JennyParser::LeftParen - 64))
            | (1ULL << (JennyParser::LeftBracket - 64))
            | (1ULL << (JennyParser::Plus - 64))
            | (1ULL << (JennyParser::Minus - 64))
            | (1ULL << (JennyParser::Star - 64))
            | (1ULL << (JennyParser::And - 64))
            | (1ULL << (JennyParser::Or - 64))
            | (1ULL << (JennyParser::Tilde - 64))
            | (1ULL << (JennyParser::PlusPlus - 64))
            | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
            | (1ULL << (JennyParser::Identifier - 128))
            | (1ULL << (JennyParser::Integerliteral - 128))
            | (1ULL << (JennyParser::Characterliteral - 128))
            | (1ULL << (JennyParser::Floatingliteral - 128))
            | (1ULL << (JennyParser::Stringliteral - 128))
            | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
            | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
            | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
            | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
            setState(1798);
            constantexpression();
          }
          setState(1801);
          match(JennyParser::RightBracket);
          setState(1803);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
          case 1: {
            setState(1802);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1809);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AbstractpackdeclaratorContext ------------------------------------------------------------------

JennyParser::AbstractpackdeclaratorContext::AbstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::NoptrabstractpackdeclaratorContext* JennyParser::AbstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<JennyParser::NoptrabstractpackdeclaratorContext>(0);
}

JennyParser::PtroperatorContext* JennyParser::AbstractpackdeclaratorContext::ptroperator() {
  return getRuleContext<JennyParser::PtroperatorContext>(0);
}

JennyParser::AbstractpackdeclaratorContext* JennyParser::AbstractpackdeclaratorContext::abstractpackdeclarator() {
  return getRuleContext<JennyParser::AbstractpackdeclaratorContext>(0);
}


size_t JennyParser::AbstractpackdeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleAbstractpackdeclarator;
}

void JennyParser::AbstractpackdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractpackdeclarator(this);
}

void JennyParser::AbstractpackdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractpackdeclarator(this);
}


antlrcpp::Any JennyParser::AbstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAbstractpackdeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AbstractpackdeclaratorContext* JennyParser::abstractpackdeclarator() {
  AbstractpackdeclaratorContext *_localctx = _tracker.createInstance<AbstractpackdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 266, JennyParser::RuleAbstractpackdeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1814);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Ellipsis: {
        enterOuterAlt(_localctx, 1);
        setState(1810);
        noptrabstractpackdeclarator(0);
        break;
      }

      case JennyParser::T__2:
      case JennyParser::Decltype:
      case JennyParser::Star:
      case JennyParser::And:
      case JennyParser::Doublecolon:
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1811);
        ptroperator();
        setState(1812);
        abstractpackdeclarator();
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

//----------------- NoptrabstractpackdeclaratorContext ------------------------------------------------------------------

JennyParser::NoptrabstractpackdeclaratorContext::NoptrabstractpackdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::NoptrabstractpackdeclaratorContext* JennyParser::NoptrabstractpackdeclaratorContext::noptrabstractpackdeclarator() {
  return getRuleContext<JennyParser::NoptrabstractpackdeclaratorContext>(0);
}

JennyParser::ParametersandqualifiersContext* JennyParser::NoptrabstractpackdeclaratorContext::parametersandqualifiers() {
  return getRuleContext<JennyParser::ParametersandqualifiersContext>(0);
}

JennyParser::ConstantexpressionContext* JennyParser::NoptrabstractpackdeclaratorContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::NoptrabstractpackdeclaratorContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}


size_t JennyParser::NoptrabstractpackdeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleNoptrabstractpackdeclarator;
}

void JennyParser::NoptrabstractpackdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoptrabstractpackdeclarator(this);
}

void JennyParser::NoptrabstractpackdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoptrabstractpackdeclarator(this);
}


antlrcpp::Any JennyParser::NoptrabstractpackdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNoptrabstractpackdeclarator(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::NoptrabstractpackdeclaratorContext* JennyParser::noptrabstractpackdeclarator() {
   return noptrabstractpackdeclarator(0);
}

JennyParser::NoptrabstractpackdeclaratorContext* JennyParser::noptrabstractpackdeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::NoptrabstractpackdeclaratorContext *_localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(_ctx, parentState);
  JennyParser::NoptrabstractpackdeclaratorContext *previousContext = _localctx;
  size_t startState = 268;
  enterRecursionRule(_localctx, 268, JennyParser::RuleNoptrabstractpackdeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1817);
    match(JennyParser::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1832);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1830);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1819);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1820);
          parametersandqualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoptrabstractpackdeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoptrabstractpackdeclarator);
          setState(1821);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1822);
          match(JennyParser::LeftBracket);
          setState(1824);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JennyParser::T__0)
            | (1ULL << JennyParser::T__1)
            | (1ULL << JennyParser::Alignof)
            | (1ULL << JennyParser::Auto)
            | (1ULL << JennyParser::Bool)
            | (1ULL << JennyParser::Char)
            | (1ULL << JennyParser::Char16)
            | (1ULL << JennyParser::Char32)
            | (1ULL << JennyParser::Const_cast)
            | (1ULL << JennyParser::Decltype)
            | (1ULL << JennyParser::Delete)
            | (1ULL << JennyParser::Double)
            | (1ULL << JennyParser::Dynamic_cast)
            | (1ULL << JennyParser::False)
            | (1ULL << JennyParser::Float)
            | (1ULL << JennyParser::Int)
            | (1ULL << JennyParser::Long)
            | (1ULL << JennyParser::New)
            | (1ULL << JennyParser::Noexcept)
            | (1ULL << JennyParser::Nullptr)
            | (1ULL << JennyParser::Operator)
            | (1ULL << JennyParser::Reinterpret_cast)
            | (1ULL << JennyParser::Short)
            | (1ULL << JennyParser::Signed)
            | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
            | (1ULL << (JennyParser::This - 64))
            | (1ULL << (JennyParser::True - 64))
            | (1ULL << (JennyParser::Typeid_ - 64))
            | (1ULL << (JennyParser::Typename_ - 64))
            | (1ULL << (JennyParser::Unsigned - 64))
            | (1ULL << (JennyParser::Void - 64))
            | (1ULL << (JennyParser::Wchar - 64))
            | (1ULL << (JennyParser::LeftParen - 64))
            | (1ULL << (JennyParser::LeftBracket - 64))
            | (1ULL << (JennyParser::Plus - 64))
            | (1ULL << (JennyParser::Minus - 64))
            | (1ULL << (JennyParser::Star - 64))
            | (1ULL << (JennyParser::And - 64))
            | (1ULL << (JennyParser::Or - 64))
            | (1ULL << (JennyParser::Tilde - 64))
            | (1ULL << (JennyParser::PlusPlus - 64))
            | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
            | (1ULL << (JennyParser::Identifier - 128))
            | (1ULL << (JennyParser::Integerliteral - 128))
            | (1ULL << (JennyParser::Characterliteral - 128))
            | (1ULL << (JennyParser::Floatingliteral - 128))
            | (1ULL << (JennyParser::Stringliteral - 128))
            | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
            | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
            | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
            | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
            setState(1823);
            constantexpression();
          }
          setState(1826);
          match(JennyParser::RightBracket);
          setState(1828);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx)) {
          case 1: {
            setState(1827);
            attributespecifierseq(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1834);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterdeclarationclauseContext ------------------------------------------------------------------

JennyParser::ParameterdeclarationclauseContext::ParameterdeclarationclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ParameterdeclarationlistContext* JennyParser::ParameterdeclarationclauseContext::parameterdeclarationlist() {
  return getRuleContext<JennyParser::ParameterdeclarationlistContext>(0);
}


size_t JennyParser::ParameterdeclarationclauseContext::getRuleIndex() const {
  return JennyParser::RuleParameterdeclarationclause;
}

void JennyParser::ParameterdeclarationclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclarationclause(this);
}

void JennyParser::ParameterdeclarationclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclarationclause(this);
}


antlrcpp::Any JennyParser::ParameterdeclarationclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitParameterdeclarationclause(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ParameterdeclarationclauseContext* JennyParser::parameterdeclarationclause() {
  ParameterdeclarationclauseContext *_localctx = _tracker.createInstance<ParameterdeclarationclauseContext>(_ctx, getState());
  enterRule(_localctx, 270, JennyParser::RuleParameterdeclarationclause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1845);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 212, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1836);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 9) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 9)) & ((1ULL << (JennyParser::Alignas - 9))
        | (1ULL << (JennyParser::Auto - 9))
        | (1ULL << (JennyParser::Bool - 9))
        | (1ULL << (JennyParser::Char - 9))
        | (1ULL << (JennyParser::Char16 - 9))
        | (1ULL << (JennyParser::Char32 - 9))
        | (1ULL << (JennyParser::Class - 9))
        | (1ULL << (JennyParser::Const - 9))
        | (1ULL << (JennyParser::Constexpr - 9))
        | (1ULL << (JennyParser::Decltype - 9))
        | (1ULL << (JennyParser::Double - 9))
        | (1ULL << (JennyParser::Enum - 9))
        | (1ULL << (JennyParser::Explicit - 9))
        | (1ULL << (JennyParser::Extern - 9))
        | (1ULL << (JennyParser::Float - 9))
        | (1ULL << (JennyParser::Friend - 9))
        | (1ULL << (JennyParser::Inline - 9))
        | (1ULL << (JennyParser::Int - 9))
        | (1ULL << (JennyParser::Long - 9))
        | (1ULL << (JennyParser::Mutable - 9))
        | (1ULL << (JennyParser::Register - 9))
        | (1ULL << (JennyParser::Short - 9))
        | (1ULL << (JennyParser::Signed - 9))
        | (1ULL << (JennyParser::Static - 9))
        | (1ULL << (JennyParser::Struct - 9))
        | (1ULL << (JennyParser::Thread_local - 9)))) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & ((1ULL << (JennyParser::Typedef - 73))
        | (1ULL << (JennyParser::Typename_ - 73))
        | (1ULL << (JennyParser::Union - 73))
        | (1ULL << (JennyParser::Unsigned - 73))
        | (1ULL << (JennyParser::Virtual - 73))
        | (1ULL << (JennyParser::Void - 73))
        | (1ULL << (JennyParser::Volatile - 73))
        | (1ULL << (JennyParser::Wchar - 73))
        | (1ULL << (JennyParser::LeftBracket - 73))
        | (1ULL << (JennyParser::Doublecolon - 73))
        | (1ULL << (JennyParser::Identifier - 73)))) != 0)) {
        setState(1835);
        parameterdeclarationlist(0);
      }
      setState(1839);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Ellipsis) {
        setState(1838);
        match(JennyParser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1841);
      parameterdeclarationlist(0);
      setState(1842);
      match(JennyParser::Comma);
      setState(1843);
      match(JennyParser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterdeclarationlistContext ------------------------------------------------------------------

JennyParser::ParameterdeclarationlistContext::ParameterdeclarationlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ParameterdeclarationContext* JennyParser::ParameterdeclarationlistContext::parameterdeclaration() {
  return getRuleContext<JennyParser::ParameterdeclarationContext>(0);
}

JennyParser::ParameterdeclarationlistContext* JennyParser::ParameterdeclarationlistContext::parameterdeclarationlist() {
  return getRuleContext<JennyParser::ParameterdeclarationlistContext>(0);
}


size_t JennyParser::ParameterdeclarationlistContext::getRuleIndex() const {
  return JennyParser::RuleParameterdeclarationlist;
}

void JennyParser::ParameterdeclarationlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclarationlist(this);
}

void JennyParser::ParameterdeclarationlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclarationlist(this);
}


antlrcpp::Any JennyParser::ParameterdeclarationlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitParameterdeclarationlist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::ParameterdeclarationlistContext* JennyParser::parameterdeclarationlist() {
   return parameterdeclarationlist(0);
}

JennyParser::ParameterdeclarationlistContext* JennyParser::parameterdeclarationlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::ParameterdeclarationlistContext *_localctx = _tracker.createInstance<ParameterdeclarationlistContext>(_ctx, parentState);
  JennyParser::ParameterdeclarationlistContext *previousContext = _localctx;
  size_t startState = 272;
  enterRecursionRule(_localctx, 272, JennyParser::RuleParameterdeclarationlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1848);
    parameterdeclaration();
    _ctx->stop = _input->LT(-1);
    setState(1855);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterdeclarationlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterdeclarationlist);
        setState(1850);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1851);
        match(JennyParser::Comma);
        setState(1852);
        parameterdeclaration(); 
      }
      setState(1857);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterdeclarationContext ------------------------------------------------------------------

JennyParser::ParameterdeclarationContext::ParameterdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclspecifierseqContext* JennyParser::ParameterdeclarationContext::declspecifierseq() {
  return getRuleContext<JennyParser::DeclspecifierseqContext>(0);
}

JennyParser::DeclaratorContext* JennyParser::ParameterdeclarationContext::declarator() {
  return getRuleContext<JennyParser::DeclaratorContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::ParameterdeclarationContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::InitializerclauseContext* JennyParser::ParameterdeclarationContext::initializerclause() {
  return getRuleContext<JennyParser::InitializerclauseContext>(0);
}

JennyParser::AbstractdeclaratorContext* JennyParser::ParameterdeclarationContext::abstractdeclarator() {
  return getRuleContext<JennyParser::AbstractdeclaratorContext>(0);
}


size_t JennyParser::ParameterdeclarationContext::getRuleIndex() const {
  return JennyParser::RuleParameterdeclaration;
}

void JennyParser::ParameterdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterdeclaration(this);
}

void JennyParser::ParameterdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterdeclaration(this);
}


antlrcpp::Any JennyParser::ParameterdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitParameterdeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ParameterdeclarationContext* JennyParser::parameterdeclaration() {
  ParameterdeclarationContext *_localctx = _tracker.createInstance<ParameterdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 274, JennyParser::RuleParameterdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1889);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 220, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1859);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1858);
        attributespecifierseq(0);
      }
      setState(1861);
      declspecifierseq();
      setState(1862);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1865);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1864);
        attributespecifierseq(0);
      }
      setState(1867);
      declspecifierseq();
      setState(1868);
      declarator();
      setState(1869);
      match(JennyParser::Assign);
      setState(1870);
      initializerclause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1873);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1872);
        attributespecifierseq(0);
      }
      setState(1875);
      declspecifierseq();
      setState(1877);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 217, _ctx)) {
      case 1: {
        setState(1876);
        abstractdeclarator();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1880);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1879);
        attributespecifierseq(0);
      }
      setState(1882);
      declspecifierseq();
      setState(1884);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::T__2

      || _la == JennyParser::Decltype || ((((_la - 84) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 84)) & ((1ULL << (JennyParser::LeftParen - 84))
        | (1ULL << (JennyParser::LeftBracket - 84))
        | (1ULL << (JennyParser::Star - 84))
        | (1ULL << (JennyParser::And - 84))
        | (1ULL << (JennyParser::Doublecolon - 84))
        | (1ULL << (JennyParser::Ellipsis - 84))
        | (1ULL << (JennyParser::Identifier - 84)))) != 0)) {
        setState(1883);
        abstractdeclarator();
      }
      setState(1886);
      match(JennyParser::Assign);
      setState(1887);
      initializerclause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefinitionContext ------------------------------------------------------------------

JennyParser::FunctiondefinitionContext::FunctiondefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclaratorContext* JennyParser::FunctiondefinitionContext::declarator() {
  return getRuleContext<JennyParser::DeclaratorContext>(0);
}

JennyParser::FunctionbodyContext* JennyParser::FunctiondefinitionContext::functionbody() {
  return getRuleContext<JennyParser::FunctionbodyContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::FunctiondefinitionContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::DeclspecifierseqContext* JennyParser::FunctiondefinitionContext::declspecifierseq() {
  return getRuleContext<JennyParser::DeclspecifierseqContext>(0);
}

JennyParser::VirtspecifierseqContext* JennyParser::FunctiondefinitionContext::virtspecifierseq() {
  return getRuleContext<JennyParser::VirtspecifierseqContext>(0);
}


size_t JennyParser::FunctiondefinitionContext::getRuleIndex() const {
  return JennyParser::RuleFunctiondefinition;
}

void JennyParser::FunctiondefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiondefinition(this);
}

void JennyParser::FunctiondefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiondefinition(this);
}


antlrcpp::Any JennyParser::FunctiondefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitFunctiondefinition(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::FunctiondefinitionContext* JennyParser::functiondefinition() {
  FunctiondefinitionContext *_localctx = _tracker.createInstance<FunctiondefinitionContext>(_ctx, getState());
  enterRule(_localctx, 276, JennyParser::RuleFunctiondefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1892);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
      setState(1891);
      attributespecifierseq(0);
    }
    setState(1895);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 222, _ctx)) {
    case 1: {
      setState(1894);
      declspecifierseq();
      break;
    }

    }
    setState(1897);
    declarator();
    setState(1899);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Final

    || _la == JennyParser::Override) {
      setState(1898);
      virtspecifierseq(0);
    }
    setState(1901);
    functionbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionbodyContext ------------------------------------------------------------------

JennyParser::FunctionbodyContext::FunctionbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::CompoundstatementContext* JennyParser::FunctionbodyContext::compoundstatement() {
  return getRuleContext<JennyParser::CompoundstatementContext>(0);
}

JennyParser::CtorinitializerContext* JennyParser::FunctionbodyContext::ctorinitializer() {
  return getRuleContext<JennyParser::CtorinitializerContext>(0);
}

JennyParser::FunctiontryblockContext* JennyParser::FunctionbodyContext::functiontryblock() {
  return getRuleContext<JennyParser::FunctiontryblockContext>(0);
}

tree::TerminalNode* JennyParser::FunctionbodyContext::Default() {
  return getToken(JennyParser::Default, 0);
}

tree::TerminalNode* JennyParser::FunctionbodyContext::Delete() {
  return getToken(JennyParser::Delete, 0);
}


size_t JennyParser::FunctionbodyContext::getRuleIndex() const {
  return JennyParser::RuleFunctionbody;
}

void JennyParser::FunctionbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionbody(this);
}

void JennyParser::FunctionbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionbody(this);
}


antlrcpp::Any JennyParser::FunctionbodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitFunctionbody(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::FunctionbodyContext* JennyParser::functionbody() {
  FunctionbodyContext *_localctx = _tracker.createInstance<FunctionbodyContext>(_ctx, getState());
  enterRule(_localctx, 278, JennyParser::RuleFunctionbody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1914);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 225, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1904);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Colon) {
        setState(1903);
        ctorinitializer();
      }
      setState(1906);
      compoundstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1907);
      functiontryblock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1908);
      match(JennyParser::Assign);
      setState(1909);
      match(JennyParser::Default);
      setState(1910);
      match(JennyParser::Semi);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1911);
      match(JennyParser::Assign);
      setState(1912);
      match(JennyParser::Delete);
      setState(1913);
      match(JennyParser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

JennyParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::BraceorequalinitializerContext* JennyParser::InitializerContext::braceorequalinitializer() {
  return getRuleContext<JennyParser::BraceorequalinitializerContext>(0);
}

JennyParser::ExpressionlistContext* JennyParser::InitializerContext::expressionlist() {
  return getRuleContext<JennyParser::ExpressionlistContext>(0);
}


size_t JennyParser::InitializerContext::getRuleIndex() const {
  return JennyParser::RuleInitializer;
}

void JennyParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void JennyParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any JennyParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::InitializerContext* JennyParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 280, JennyParser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1921);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::LeftBrace:
      case JennyParser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1916);
        braceorequalinitializer();
        break;
      }

      case JennyParser::LeftParen: {
        enterOuterAlt(_localctx, 2);
        setState(1917);
        match(JennyParser::LeftParen);
        setState(1918);
        expressionlist();
        setState(1919);
        match(JennyParser::RightParen);
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

//----------------- BraceorequalinitializerContext ------------------------------------------------------------------

JennyParser::BraceorequalinitializerContext::BraceorequalinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::InitializerclauseContext* JennyParser::BraceorequalinitializerContext::initializerclause() {
  return getRuleContext<JennyParser::InitializerclauseContext>(0);
}

JennyParser::BracedinitlistContext* JennyParser::BraceorequalinitializerContext::bracedinitlist() {
  return getRuleContext<JennyParser::BracedinitlistContext>(0);
}


size_t JennyParser::BraceorequalinitializerContext::getRuleIndex() const {
  return JennyParser::RuleBraceorequalinitializer;
}

void JennyParser::BraceorequalinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraceorequalinitializer(this);
}

void JennyParser::BraceorequalinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraceorequalinitializer(this);
}


antlrcpp::Any JennyParser::BraceorequalinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBraceorequalinitializer(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::BraceorequalinitializerContext* JennyParser::braceorequalinitializer() {
  BraceorequalinitializerContext *_localctx = _tracker.createInstance<BraceorequalinitializerContext>(_ctx, getState());
  enterRule(_localctx, 282, JennyParser::RuleBraceorequalinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1926);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Assign: {
        enterOuterAlt(_localctx, 1);
        setState(1923);
        match(JennyParser::Assign);
        setState(1924);
        initializerclause();
        break;
      }

      case JennyParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1925);
        bracedinitlist();
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

//----------------- InitializerclauseContext ------------------------------------------------------------------

JennyParser::InitializerclauseContext::InitializerclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AssignmentexpressionContext* JennyParser::InitializerclauseContext::assignmentexpression() {
  return getRuleContext<JennyParser::AssignmentexpressionContext>(0);
}

JennyParser::BracedinitlistContext* JennyParser::InitializerclauseContext::bracedinitlist() {
  return getRuleContext<JennyParser::BracedinitlistContext>(0);
}


size_t JennyParser::InitializerclauseContext::getRuleIndex() const {
  return JennyParser::RuleInitializerclause;
}

void JennyParser::InitializerclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerclause(this);
}

void JennyParser::InitializerclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerclause(this);
}


antlrcpp::Any JennyParser::InitializerclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitInitializerclause(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::InitializerclauseContext* JennyParser::initializerclause() {
  InitializerclauseContext *_localctx = _tracker.createInstance<InitializerclauseContext>(_ctx, getState());
  enterRule(_localctx, 284, JennyParser::RuleInitializerclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1930);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::T__0:
      case JennyParser::T__1:
      case JennyParser::Alignof:
      case JennyParser::Auto:
      case JennyParser::Bool:
      case JennyParser::Char:
      case JennyParser::Char16:
      case JennyParser::Char32:
      case JennyParser::Const_cast:
      case JennyParser::Decltype:
      case JennyParser::Delete:
      case JennyParser::Double:
      case JennyParser::Dynamic_cast:
      case JennyParser::False:
      case JennyParser::Float:
      case JennyParser::Int:
      case JennyParser::Long:
      case JennyParser::New:
      case JennyParser::Noexcept:
      case JennyParser::Nullptr:
      case JennyParser::Operator:
      case JennyParser::Reinterpret_cast:
      case JennyParser::Short:
      case JennyParser::Signed:
      case JennyParser::Sizeof:
      case JennyParser::Static_cast:
      case JennyParser::This:
      case JennyParser::Throw:
      case JennyParser::True:
      case JennyParser::Typeid_:
      case JennyParser::Typename_:
      case JennyParser::Unsigned:
      case JennyParser::Void:
      case JennyParser::Wchar:
      case JennyParser::LeftParen:
      case JennyParser::LeftBracket:
      case JennyParser::Plus:
      case JennyParser::Minus:
      case JennyParser::Star:
      case JennyParser::And:
      case JennyParser::Or:
      case JennyParser::Tilde:
      case JennyParser::PlusPlus:
      case JennyParser::MinusMinus:
      case JennyParser::Doublecolon:
      case JennyParser::Identifier:
      case JennyParser::Integerliteral:
      case JennyParser::Characterliteral:
      case JennyParser::Floatingliteral:
      case JennyParser::Stringliteral:
      case JennyParser::Userdefinedintegerliteral:
      case JennyParser::Userdefinedfloatingliteral:
      case JennyParser::Userdefinedstringliteral:
      case JennyParser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 1);
        setState(1928);
        assignmentexpression();
        break;
      }

      case JennyParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1929);
        bracedinitlist();
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

//----------------- InitializerlistContext ------------------------------------------------------------------

JennyParser::InitializerlistContext::InitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::InitializerclauseContext* JennyParser::InitializerlistContext::initializerclause() {
  return getRuleContext<JennyParser::InitializerclauseContext>(0);
}

JennyParser::InitializerlistContext* JennyParser::InitializerlistContext::initializerlist() {
  return getRuleContext<JennyParser::InitializerlistContext>(0);
}


size_t JennyParser::InitializerlistContext::getRuleIndex() const {
  return JennyParser::RuleInitializerlist;
}

void JennyParser::InitializerlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerlist(this);
}

void JennyParser::InitializerlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerlist(this);
}


antlrcpp::Any JennyParser::InitializerlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitInitializerlist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::InitializerlistContext* JennyParser::initializerlist() {
   return initializerlist(0);
}

JennyParser::InitializerlistContext* JennyParser::initializerlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::InitializerlistContext *_localctx = _tracker.createInstance<InitializerlistContext>(_ctx, parentState);
  JennyParser::InitializerlistContext *previousContext = _localctx;
  size_t startState = 286;
  enterRecursionRule(_localctx, 286, JennyParser::RuleInitializerlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1933);
    initializerclause();
    setState(1935);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 229, _ctx)) {
    case 1: {
      setState(1934);
      match(JennyParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1945);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 231, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerlist);
        setState(1937);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1938);
        match(JennyParser::Comma);
        setState(1939);
        initializerclause();
        setState(1941);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 230, _ctx)) {
        case 1: {
          setState(1940);
          match(JennyParser::Ellipsis);
          break;
        }

        } 
      }
      setState(1947);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 231, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BracedinitlistContext ------------------------------------------------------------------

JennyParser::BracedinitlistContext::BracedinitlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::InitializerlistContext* JennyParser::BracedinitlistContext::initializerlist() {
  return getRuleContext<JennyParser::InitializerlistContext>(0);
}


size_t JennyParser::BracedinitlistContext::getRuleIndex() const {
  return JennyParser::RuleBracedinitlist;
}

void JennyParser::BracedinitlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracedinitlist(this);
}

void JennyParser::BracedinitlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracedinitlist(this);
}


antlrcpp::Any JennyParser::BracedinitlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBracedinitlist(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::BracedinitlistContext* JennyParser::bracedinitlist() {
  BracedinitlistContext *_localctx = _tracker.createInstance<BracedinitlistContext>(_ctx, getState());
  enterRule(_localctx, 288, JennyParser::RuleBracedinitlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1957);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1948);
      match(JennyParser::LeftBrace);
      setState(1949);
      initializerlist(0);
      setState(1951);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Comma) {
        setState(1950);
        match(JennyParser::Comma);
      }
      setState(1953);
      match(JennyParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1955);
      match(JennyParser::LeftBrace);
      setState(1956);
      match(JennyParser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassnameContext ------------------------------------------------------------------

JennyParser::ClassnameContext::ClassnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::ClassnameContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::SimpletemplateidContext* JennyParser::ClassnameContext::simpletemplateid() {
  return getRuleContext<JennyParser::SimpletemplateidContext>(0);
}


size_t JennyParser::ClassnameContext::getRuleIndex() const {
  return JennyParser::RuleClassname;
}

void JennyParser::ClassnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassname(this);
}

void JennyParser::ClassnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassname(this);
}


antlrcpp::Any JennyParser::ClassnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitClassname(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ClassnameContext* JennyParser::classname() {
  ClassnameContext *_localctx = _tracker.createInstance<ClassnameContext>(_ctx, getState());
  enterRule(_localctx, 290, JennyParser::RuleClassname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1961);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 234, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1959);
      match(JennyParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1960);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassspecifierContext ------------------------------------------------------------------

JennyParser::ClassspecifierContext::ClassspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ClassheadContext* JennyParser::ClassspecifierContext::classhead() {
  return getRuleContext<JennyParser::ClassheadContext>(0);
}

JennyParser::MemberspecificationContext* JennyParser::ClassspecifierContext::memberspecification() {
  return getRuleContext<JennyParser::MemberspecificationContext>(0);
}


size_t JennyParser::ClassspecifierContext::getRuleIndex() const {
  return JennyParser::RuleClassspecifier;
}

void JennyParser::ClassspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassspecifier(this);
}

void JennyParser::ClassspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassspecifier(this);
}


antlrcpp::Any JennyParser::ClassspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitClassspecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ClassspecifierContext* JennyParser::classspecifier() {
  ClassspecifierContext *_localctx = _tracker.createInstance<ClassspecifierContext>(_ctx, getState());
  enterRule(_localctx, 292, JennyParser::RuleClassspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1963);
    classhead();
    setState(1964);
    match(JennyParser::LeftBrace);
    setState(1966);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JennyParser::T__2)
      | (1ULL << JennyParser::Alignas)
      | (1ULL << JennyParser::Auto)
      | (1ULL << JennyParser::Bool)
      | (1ULL << JennyParser::Char)
      | (1ULL << JennyParser::Char16)
      | (1ULL << JennyParser::Char32)
      | (1ULL << JennyParser::Class)
      | (1ULL << JennyParser::Const)
      | (1ULL << JennyParser::Constexpr)
      | (1ULL << JennyParser::Decltype)
      | (1ULL << JennyParser::Double)
      | (1ULL << JennyParser::Enum)
      | (1ULL << JennyParser::Explicit)
      | (1ULL << JennyParser::Extern)
      | (1ULL << JennyParser::Float)
      | (1ULL << JennyParser::Friend)
      | (1ULL << JennyParser::Inline)
      | (1ULL << JennyParser::Int)
      | (1ULL << JennyParser::Long)
      | (1ULL << JennyParser::Mutable)
      | (1ULL << JennyParser::Operator)
      | (1ULL << JennyParser::Private)
      | (1ULL << JennyParser::Protected)
      | (1ULL << JennyParser::Public)
      | (1ULL << JennyParser::Register)
      | (1ULL << JennyParser::Short)
      | (1ULL << JennyParser::Signed)
      | (1ULL << JennyParser::Static)
      | (1ULL << JennyParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (JennyParser::Struct - 65))
      | (1ULL << (JennyParser::Template - 65))
      | (1ULL << (JennyParser::Thread_local - 65))
      | (1ULL << (JennyParser::Typedef - 65))
      | (1ULL << (JennyParser::Typename_ - 65))
      | (1ULL << (JennyParser::Union - 65))
      | (1ULL << (JennyParser::Unsigned - 65))
      | (1ULL << (JennyParser::Using - 65))
      | (1ULL << (JennyParser::Virtual - 65))
      | (1ULL << (JennyParser::Void - 65))
      | (1ULL << (JennyParser::Volatile - 65))
      | (1ULL << (JennyParser::Wchar - 65))
      | (1ULL << (JennyParser::LeftParen - 65))
      | (1ULL << (JennyParser::LeftBracket - 65))
      | (1ULL << (JennyParser::Star - 65))
      | (1ULL << (JennyParser::And - 65))
      | (1ULL << (JennyParser::Tilde - 65))
      | (1ULL << (JennyParser::Colon - 65))
      | (1ULL << (JennyParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (JennyParser::Semi - 129))
      | (1ULL << (JennyParser::Ellipsis - 129))
      | (1ULL << (JennyParser::Identifier - 129)))) != 0)) {
      setState(1965);
      memberspecification();
    }
    setState(1968);
    match(JennyParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadContext ------------------------------------------------------------------

JennyParser::ClassheadContext::ClassheadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ClasskeyContext* JennyParser::ClassheadContext::classkey() {
  return getRuleContext<JennyParser::ClasskeyContext>(0);
}

JennyParser::ClassheadnameContext* JennyParser::ClassheadContext::classheadname() {
  return getRuleContext<JennyParser::ClassheadnameContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::ClassheadContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::ClassvirtspecifierContext* JennyParser::ClassheadContext::classvirtspecifier() {
  return getRuleContext<JennyParser::ClassvirtspecifierContext>(0);
}

JennyParser::BaseclauseContext* JennyParser::ClassheadContext::baseclause() {
  return getRuleContext<JennyParser::BaseclauseContext>(0);
}


size_t JennyParser::ClassheadContext::getRuleIndex() const {
  return JennyParser::RuleClasshead;
}

void JennyParser::ClassheadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClasshead(this);
}

void JennyParser::ClassheadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClasshead(this);
}


antlrcpp::Any JennyParser::ClassheadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitClasshead(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ClassheadContext* JennyParser::classhead() {
  ClassheadContext *_localctx = _tracker.createInstance<ClassheadContext>(_ctx, getState());
  enterRule(_localctx, 294, JennyParser::RuleClasshead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1988);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 241, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1970);
      classkey();
      setState(1972);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1971);
        attributespecifierseq(0);
      }
      setState(1974);
      classheadname();
      setState(1976);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Final) {
        setState(1975);
        classvirtspecifier();
      }
      setState(1979);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Colon) {
        setState(1978);
        baseclause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1981);
      classkey();
      setState(1983);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(1982);
        attributespecifierseq(0);
      }
      setState(1986);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Colon) {
        setState(1985);
        baseclause();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassheadnameContext ------------------------------------------------------------------

JennyParser::ClassheadnameContext::ClassheadnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ClassnameContext* JennyParser::ClassheadnameContext::classname() {
  return getRuleContext<JennyParser::ClassnameContext>(0);
}

JennyParser::NestednamespecifierContext* JennyParser::ClassheadnameContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}


size_t JennyParser::ClassheadnameContext::getRuleIndex() const {
  return JennyParser::RuleClassheadname;
}

void JennyParser::ClassheadnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassheadname(this);
}

void JennyParser::ClassheadnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassheadname(this);
}


antlrcpp::Any JennyParser::ClassheadnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitClassheadname(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ClassheadnameContext* JennyParser::classheadname() {
  ClassheadnameContext *_localctx = _tracker.createInstance<ClassheadnameContext>(_ctx, getState());
  enterRule(_localctx, 296, JennyParser::RuleClassheadname);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1991);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 242, _ctx)) {
    case 1: {
      setState(1990);
      nestednamespecifier(0);
      break;
    }

    }
    setState(1993);
    classname();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassvirtspecifierContext ------------------------------------------------------------------

JennyParser::ClassvirtspecifierContext::ClassvirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::ClassvirtspecifierContext::Final() {
  return getToken(JennyParser::Final, 0);
}


size_t JennyParser::ClassvirtspecifierContext::getRuleIndex() const {
  return JennyParser::RuleClassvirtspecifier;
}

void JennyParser::ClassvirtspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassvirtspecifier(this);
}

void JennyParser::ClassvirtspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassvirtspecifier(this);
}


antlrcpp::Any JennyParser::ClassvirtspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitClassvirtspecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ClassvirtspecifierContext* JennyParser::classvirtspecifier() {
  ClassvirtspecifierContext *_localctx = _tracker.createInstance<ClassvirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 298, JennyParser::RuleClassvirtspecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1995);
    match(JennyParser::Final);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClasskeyContext ------------------------------------------------------------------

JennyParser::ClasskeyContext::ClasskeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::ClasskeyContext::Class() {
  return getToken(JennyParser::Class, 0);
}

tree::TerminalNode* JennyParser::ClasskeyContext::Struct() {
  return getToken(JennyParser::Struct, 0);
}

tree::TerminalNode* JennyParser::ClasskeyContext::Union() {
  return getToken(JennyParser::Union, 0);
}


size_t JennyParser::ClasskeyContext::getRuleIndex() const {
  return JennyParser::RuleClasskey;
}

void JennyParser::ClasskeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClasskey(this);
}

void JennyParser::ClasskeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClasskey(this);
}


antlrcpp::Any JennyParser::ClasskeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitClasskey(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ClasskeyContext* JennyParser::classkey() {
  ClasskeyContext *_localctx = _tracker.createInstance<ClasskeyContext>(_ctx, getState());
  enterRule(_localctx, 300, JennyParser::RuleClasskey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1997);
    _la = _input->LA(1);
    if (!(((((_la - 20) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 20)) & ((1ULL << (JennyParser::Class - 20))
      | (1ULL << (JennyParser::Struct - 20))
      | (1ULL << (JennyParser::Union - 20)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberspecificationContext ------------------------------------------------------------------

JennyParser::MemberspecificationContext::MemberspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::MemberdeclarationContext* JennyParser::MemberspecificationContext::memberdeclaration() {
  return getRuleContext<JennyParser::MemberdeclarationContext>(0);
}

JennyParser::MemberspecificationContext* JennyParser::MemberspecificationContext::memberspecification() {
  return getRuleContext<JennyParser::MemberspecificationContext>(0);
}

JennyParser::AccessspecifierContext* JennyParser::MemberspecificationContext::accessspecifier() {
  return getRuleContext<JennyParser::AccessspecifierContext>(0);
}


size_t JennyParser::MemberspecificationContext::getRuleIndex() const {
  return JennyParser::RuleMemberspecification;
}

void JennyParser::MemberspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberspecification(this);
}

void JennyParser::MemberspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberspecification(this);
}


antlrcpp::Any JennyParser::MemberspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitMemberspecification(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::MemberspecificationContext* JennyParser::memberspecification() {
  MemberspecificationContext *_localctx = _tracker.createInstance<MemberspecificationContext>(_ctx, getState());
  enterRule(_localctx, 302, JennyParser::RuleMemberspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2008);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::T__2:
      case JennyParser::Alignas:
      case JennyParser::Auto:
      case JennyParser::Bool:
      case JennyParser::Char:
      case JennyParser::Char16:
      case JennyParser::Char32:
      case JennyParser::Class:
      case JennyParser::Const:
      case JennyParser::Constexpr:
      case JennyParser::Decltype:
      case JennyParser::Double:
      case JennyParser::Enum:
      case JennyParser::Explicit:
      case JennyParser::Extern:
      case JennyParser::Float:
      case JennyParser::Friend:
      case JennyParser::Inline:
      case JennyParser::Int:
      case JennyParser::Long:
      case JennyParser::Mutable:
      case JennyParser::Operator:
      case JennyParser::Register:
      case JennyParser::Short:
      case JennyParser::Signed:
      case JennyParser::Static:
      case JennyParser::Static_assert:
      case JennyParser::Struct:
      case JennyParser::Template:
      case JennyParser::Thread_local:
      case JennyParser::Typedef:
      case JennyParser::Typename_:
      case JennyParser::Union:
      case JennyParser::Unsigned:
      case JennyParser::Using:
      case JennyParser::Virtual:
      case JennyParser::Void:
      case JennyParser::Volatile:
      case JennyParser::Wchar:
      case JennyParser::LeftParen:
      case JennyParser::LeftBracket:
      case JennyParser::Star:
      case JennyParser::And:
      case JennyParser::Tilde:
      case JennyParser::Colon:
      case JennyParser::Doublecolon:
      case JennyParser::Semi:
      case JennyParser::Ellipsis:
      case JennyParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1999);
        memberdeclaration();
        setState(2001);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << JennyParser::T__2)
          | (1ULL << JennyParser::Alignas)
          | (1ULL << JennyParser::Auto)
          | (1ULL << JennyParser::Bool)
          | (1ULL << JennyParser::Char)
          | (1ULL << JennyParser::Char16)
          | (1ULL << JennyParser::Char32)
          | (1ULL << JennyParser::Class)
          | (1ULL << JennyParser::Const)
          | (1ULL << JennyParser::Constexpr)
          | (1ULL << JennyParser::Decltype)
          | (1ULL << JennyParser::Double)
          | (1ULL << JennyParser::Enum)
          | (1ULL << JennyParser::Explicit)
          | (1ULL << JennyParser::Extern)
          | (1ULL << JennyParser::Float)
          | (1ULL << JennyParser::Friend)
          | (1ULL << JennyParser::Inline)
          | (1ULL << JennyParser::Int)
          | (1ULL << JennyParser::Long)
          | (1ULL << JennyParser::Mutable)
          | (1ULL << JennyParser::Operator)
          | (1ULL << JennyParser::Private)
          | (1ULL << JennyParser::Protected)
          | (1ULL << JennyParser::Public)
          | (1ULL << JennyParser::Register)
          | (1ULL << JennyParser::Short)
          | (1ULL << JennyParser::Signed)
          | (1ULL << JennyParser::Static)
          | (1ULL << JennyParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (JennyParser::Struct - 65))
          | (1ULL << (JennyParser::Template - 65))
          | (1ULL << (JennyParser::Thread_local - 65))
          | (1ULL << (JennyParser::Typedef - 65))
          | (1ULL << (JennyParser::Typename_ - 65))
          | (1ULL << (JennyParser::Union - 65))
          | (1ULL << (JennyParser::Unsigned - 65))
          | (1ULL << (JennyParser::Using - 65))
          | (1ULL << (JennyParser::Virtual - 65))
          | (1ULL << (JennyParser::Void - 65))
          | (1ULL << (JennyParser::Volatile - 65))
          | (1ULL << (JennyParser::Wchar - 65))
          | (1ULL << (JennyParser::LeftParen - 65))
          | (1ULL << (JennyParser::LeftBracket - 65))
          | (1ULL << (JennyParser::Star - 65))
          | (1ULL << (JennyParser::And - 65))
          | (1ULL << (JennyParser::Tilde - 65))
          | (1ULL << (JennyParser::Colon - 65))
          | (1ULL << (JennyParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 129)) & ((1ULL << (JennyParser::Semi - 129))
          | (1ULL << (JennyParser::Ellipsis - 129))
          | (1ULL << (JennyParser::Identifier - 129)))) != 0)) {
          setState(2000);
          memberspecification();
        }
        break;
      }

      case JennyParser::Private:
      case JennyParser::Protected:
      case JennyParser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(2003);
        accessspecifier();
        setState(2004);
        match(JennyParser::Colon);
        setState(2006);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << JennyParser::T__2)
          | (1ULL << JennyParser::Alignas)
          | (1ULL << JennyParser::Auto)
          | (1ULL << JennyParser::Bool)
          | (1ULL << JennyParser::Char)
          | (1ULL << JennyParser::Char16)
          | (1ULL << JennyParser::Char32)
          | (1ULL << JennyParser::Class)
          | (1ULL << JennyParser::Const)
          | (1ULL << JennyParser::Constexpr)
          | (1ULL << JennyParser::Decltype)
          | (1ULL << JennyParser::Double)
          | (1ULL << JennyParser::Enum)
          | (1ULL << JennyParser::Explicit)
          | (1ULL << JennyParser::Extern)
          | (1ULL << JennyParser::Float)
          | (1ULL << JennyParser::Friend)
          | (1ULL << JennyParser::Inline)
          | (1ULL << JennyParser::Int)
          | (1ULL << JennyParser::Long)
          | (1ULL << JennyParser::Mutable)
          | (1ULL << JennyParser::Operator)
          | (1ULL << JennyParser::Private)
          | (1ULL << JennyParser::Protected)
          | (1ULL << JennyParser::Public)
          | (1ULL << JennyParser::Register)
          | (1ULL << JennyParser::Short)
          | (1ULL << JennyParser::Signed)
          | (1ULL << JennyParser::Static)
          | (1ULL << JennyParser::Static_assert))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (JennyParser::Struct - 65))
          | (1ULL << (JennyParser::Template - 65))
          | (1ULL << (JennyParser::Thread_local - 65))
          | (1ULL << (JennyParser::Typedef - 65))
          | (1ULL << (JennyParser::Typename_ - 65))
          | (1ULL << (JennyParser::Union - 65))
          | (1ULL << (JennyParser::Unsigned - 65))
          | (1ULL << (JennyParser::Using - 65))
          | (1ULL << (JennyParser::Virtual - 65))
          | (1ULL << (JennyParser::Void - 65))
          | (1ULL << (JennyParser::Volatile - 65))
          | (1ULL << (JennyParser::Wchar - 65))
          | (1ULL << (JennyParser::LeftParen - 65))
          | (1ULL << (JennyParser::LeftBracket - 65))
          | (1ULL << (JennyParser::Star - 65))
          | (1ULL << (JennyParser::And - 65))
          | (1ULL << (JennyParser::Tilde - 65))
          | (1ULL << (JennyParser::Colon - 65))
          | (1ULL << (JennyParser::Doublecolon - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 129)) & ((1ULL << (JennyParser::Semi - 129))
          | (1ULL << (JennyParser::Ellipsis - 129))
          | (1ULL << (JennyParser::Identifier - 129)))) != 0)) {
          setState(2005);
          memberspecification();
        }
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

//----------------- MemberdeclarationContext ------------------------------------------------------------------

JennyParser::MemberdeclarationContext::MemberdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::AttributespecifierseqContext* JennyParser::MemberdeclarationContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::DeclspecifierseqContext* JennyParser::MemberdeclarationContext::declspecifierseq() {
  return getRuleContext<JennyParser::DeclspecifierseqContext>(0);
}

JennyParser::MemberdeclaratorlistContext* JennyParser::MemberdeclarationContext::memberdeclaratorlist() {
  return getRuleContext<JennyParser::MemberdeclaratorlistContext>(0);
}

JennyParser::FunctiondefinitionContext* JennyParser::MemberdeclarationContext::functiondefinition() {
  return getRuleContext<JennyParser::FunctiondefinitionContext>(0);
}

JennyParser::UsingdeclarationContext* JennyParser::MemberdeclarationContext::usingdeclaration() {
  return getRuleContext<JennyParser::UsingdeclarationContext>(0);
}

JennyParser::Static_assertdeclarationContext* JennyParser::MemberdeclarationContext::static_assertdeclaration() {
  return getRuleContext<JennyParser::Static_assertdeclarationContext>(0);
}

JennyParser::TemplatedeclarationContext* JennyParser::MemberdeclarationContext::templatedeclaration() {
  return getRuleContext<JennyParser::TemplatedeclarationContext>(0);
}

JennyParser::AliasdeclarationContext* JennyParser::MemberdeclarationContext::aliasdeclaration() {
  return getRuleContext<JennyParser::AliasdeclarationContext>(0);
}

JennyParser::EmptydeclarationContext* JennyParser::MemberdeclarationContext::emptydeclaration() {
  return getRuleContext<JennyParser::EmptydeclarationContext>(0);
}


size_t JennyParser::MemberdeclarationContext::getRuleIndex() const {
  return JennyParser::RuleMemberdeclaration;
}

void JennyParser::MemberdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclaration(this);
}

void JennyParser::MemberdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclaration(this);
}


antlrcpp::Any JennyParser::MemberdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitMemberdeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::MemberdeclarationContext* JennyParser::memberdeclaration() {
  MemberdeclarationContext *_localctx = _tracker.createInstance<MemberdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 304, JennyParser::RuleMemberdeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2026);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2011);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx)) {
      case 1: {
        setState(2010);
        attributespecifierseq(0);
        break;
      }

      }
      setState(2014);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 247, _ctx)) {
      case 1: {
        setState(2013);
        declspecifierseq();
        break;
      }

      }
      setState(2017);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__2)
        | (1ULL << JennyParser::Alignas)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Operator))) != 0) || ((((_la - 84) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 84)) & ((1ULL << (JennyParser::LeftParen - 84))
        | (1ULL << (JennyParser::LeftBracket - 84))
        | (1ULL << (JennyParser::Star - 84))
        | (1ULL << (JennyParser::And - 84))
        | (1ULL << (JennyParser::Tilde - 84))
        | (1ULL << (JennyParser::Colon - 84))
        | (1ULL << (JennyParser::Doublecolon - 84))
        | (1ULL << (JennyParser::Ellipsis - 84))
        | (1ULL << (JennyParser::Identifier - 84)))) != 0)) {
        setState(2016);
        memberdeclaratorlist(0);
      }
      setState(2019);
      match(JennyParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2020);
      functiondefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2021);
      usingdeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2022);
      static_assertdeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2023);
      templatedeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2024);
      aliasdeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2025);
      emptydeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberdeclaratorlistContext ------------------------------------------------------------------

JennyParser::MemberdeclaratorlistContext::MemberdeclaratorlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::MemberdeclaratorContext* JennyParser::MemberdeclaratorlistContext::memberdeclarator() {
  return getRuleContext<JennyParser::MemberdeclaratorContext>(0);
}

JennyParser::MemberdeclaratorlistContext* JennyParser::MemberdeclaratorlistContext::memberdeclaratorlist() {
  return getRuleContext<JennyParser::MemberdeclaratorlistContext>(0);
}


size_t JennyParser::MemberdeclaratorlistContext::getRuleIndex() const {
  return JennyParser::RuleMemberdeclaratorlist;
}

void JennyParser::MemberdeclaratorlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclaratorlist(this);
}

void JennyParser::MemberdeclaratorlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclaratorlist(this);
}


antlrcpp::Any JennyParser::MemberdeclaratorlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitMemberdeclaratorlist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::MemberdeclaratorlistContext* JennyParser::memberdeclaratorlist() {
   return memberdeclaratorlist(0);
}

JennyParser::MemberdeclaratorlistContext* JennyParser::memberdeclaratorlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::MemberdeclaratorlistContext *_localctx = _tracker.createInstance<MemberdeclaratorlistContext>(_ctx, parentState);
  JennyParser::MemberdeclaratorlistContext *previousContext = _localctx;
  size_t startState = 306;
  enterRecursionRule(_localctx, 306, JennyParser::RuleMemberdeclaratorlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2029);
    memberdeclarator();
    _ctx->stop = _input->LT(-1);
    setState(2036);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberdeclaratorlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberdeclaratorlist);
        setState(2031);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2032);
        match(JennyParser::Comma);
        setState(2033);
        memberdeclarator(); 
      }
      setState(2038);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MemberdeclaratorContext ------------------------------------------------------------------

JennyParser::MemberdeclaratorContext::MemberdeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DeclaratorContext* JennyParser::MemberdeclaratorContext::declarator() {
  return getRuleContext<JennyParser::DeclaratorContext>(0);
}

JennyParser::VirtspecifierseqContext* JennyParser::MemberdeclaratorContext::virtspecifierseq() {
  return getRuleContext<JennyParser::VirtspecifierseqContext>(0);
}

JennyParser::PurespecifierContext* JennyParser::MemberdeclaratorContext::purespecifier() {
  return getRuleContext<JennyParser::PurespecifierContext>(0);
}

JennyParser::BraceorequalinitializerContext* JennyParser::MemberdeclaratorContext::braceorequalinitializer() {
  return getRuleContext<JennyParser::BraceorequalinitializerContext>(0);
}

JennyParser::ConstantexpressionContext* JennyParser::MemberdeclaratorContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}

tree::TerminalNode* JennyParser::MemberdeclaratorContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::AttributespecifierseqContext* JennyParser::MemberdeclaratorContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}


size_t JennyParser::MemberdeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleMemberdeclarator;
}

void JennyParser::MemberdeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberdeclarator(this);
}

void JennyParser::MemberdeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberdeclarator(this);
}


antlrcpp::Any JennyParser::MemberdeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitMemberdeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::MemberdeclaratorContext* JennyParser::memberdeclarator() {
  MemberdeclaratorContext *_localctx = _tracker.createInstance<MemberdeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 308, JennyParser::RuleMemberdeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2058);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2039);
      declarator();
      setState(2041);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, _ctx)) {
      case 1: {
        setState(2040);
        virtspecifierseq(0);
        break;
      }

      }
      setState(2044);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 252, _ctx)) {
      case 1: {
        setState(2043);
        purespecifier();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2046);
      declarator();
      setState(2048);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 253, _ctx)) {
      case 1: {
        setState(2047);
        braceorequalinitializer();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2051);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Identifier) {
        setState(2050);
        match(JennyParser::Identifier);
      }
      setState(2054);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(2053);
        attributespecifierseq(0);
      }
      setState(2056);
      match(JennyParser::Colon);
      setState(2057);
      constantexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtspecifierseqContext ------------------------------------------------------------------

JennyParser::VirtspecifierseqContext::VirtspecifierseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::VirtspecifierContext* JennyParser::VirtspecifierseqContext::virtspecifier() {
  return getRuleContext<JennyParser::VirtspecifierContext>(0);
}

JennyParser::VirtspecifierseqContext* JennyParser::VirtspecifierseqContext::virtspecifierseq() {
  return getRuleContext<JennyParser::VirtspecifierseqContext>(0);
}


size_t JennyParser::VirtspecifierseqContext::getRuleIndex() const {
  return JennyParser::RuleVirtspecifierseq;
}

void JennyParser::VirtspecifierseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtspecifierseq(this);
}

void JennyParser::VirtspecifierseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtspecifierseq(this);
}


antlrcpp::Any JennyParser::VirtspecifierseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitVirtspecifierseq(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::VirtspecifierseqContext* JennyParser::virtspecifierseq() {
   return virtspecifierseq(0);
}

JennyParser::VirtspecifierseqContext* JennyParser::virtspecifierseq(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::VirtspecifierseqContext *_localctx = _tracker.createInstance<VirtspecifierseqContext>(_ctx, parentState);
  JennyParser::VirtspecifierseqContext *previousContext = _localctx;
  size_t startState = 310;
  enterRecursionRule(_localctx, 310, JennyParser::RuleVirtspecifierseq, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2061);
    virtspecifier();
    _ctx->stop = _input->LT(-1);
    setState(2067);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VirtspecifierseqContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVirtspecifierseq);
        setState(2063);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2064);
        virtspecifier(); 
      }
      setState(2069);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VirtspecifierContext ------------------------------------------------------------------

JennyParser::VirtspecifierContext::VirtspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::VirtspecifierContext::Override() {
  return getToken(JennyParser::Override, 0);
}

tree::TerminalNode* JennyParser::VirtspecifierContext::Final() {
  return getToken(JennyParser::Final, 0);
}


size_t JennyParser::VirtspecifierContext::getRuleIndex() const {
  return JennyParser::RuleVirtspecifier;
}

void JennyParser::VirtspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtspecifier(this);
}

void JennyParser::VirtspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtspecifier(this);
}


antlrcpp::Any JennyParser::VirtspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitVirtspecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::VirtspecifierContext* JennyParser::virtspecifier() {
  VirtspecifierContext *_localctx = _tracker.createInstance<VirtspecifierContext>(_ctx, getState());
  enterRule(_localctx, 312, JennyParser::RuleVirtspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2070);
    _la = _input->LA(1);
    if (!(_la == JennyParser::Final

    || _la == JennyParser::Override)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PurespecifierContext ------------------------------------------------------------------

JennyParser::PurespecifierContext::PurespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::PurespecifierContext::Assign() {
  return getToken(JennyParser::Assign, 0);
}

tree::TerminalNode* JennyParser::PurespecifierContext::Octalliteral() {
  return getToken(JennyParser::Octalliteral, 0);
}


size_t JennyParser::PurespecifierContext::getRuleIndex() const {
  return JennyParser::RulePurespecifier;
}

void JennyParser::PurespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPurespecifier(this);
}

void JennyParser::PurespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPurespecifier(this);
}


antlrcpp::Any JennyParser::PurespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitPurespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::PurespecifierContext* JennyParser::purespecifier() {
  PurespecifierContext *_localctx = _tracker.createInstance<PurespecifierContext>(_ctx, getState());
  enterRule(_localctx, 314, JennyParser::RulePurespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2072);
    match(JennyParser::Assign);
    setState(2073);
    dynamic_cast<PurespecifierContext *>(_localctx)->val = match(JennyParser::Octalliteral);
    if((dynamic_cast<PurespecifierContext *>(_localctx)->val != nullptr ? dynamic_cast<PurespecifierContext *>(_localctx)->val->getText() : "").compare("0") != 0) throw new InputMismatchException(this);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseclauseContext ------------------------------------------------------------------

JennyParser::BaseclauseContext::BaseclauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::BasespecifierlistContext* JennyParser::BaseclauseContext::basespecifierlist() {
  return getRuleContext<JennyParser::BasespecifierlistContext>(0);
}


size_t JennyParser::BaseclauseContext::getRuleIndex() const {
  return JennyParser::RuleBaseclause;
}

void JennyParser::BaseclauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseclause(this);
}

void JennyParser::BaseclauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseclause(this);
}


antlrcpp::Any JennyParser::BaseclauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBaseclause(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::BaseclauseContext* JennyParser::baseclause() {
  BaseclauseContext *_localctx = _tracker.createInstance<BaseclauseContext>(_ctx, getState());
  enterRule(_localctx, 316, JennyParser::RuleBaseclause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2076);
    match(JennyParser::Colon);
    setState(2077);
    basespecifierlist(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasespecifierlistContext ------------------------------------------------------------------

JennyParser::BasespecifierlistContext::BasespecifierlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::BasespecifierContext* JennyParser::BasespecifierlistContext::basespecifier() {
  return getRuleContext<JennyParser::BasespecifierContext>(0);
}

JennyParser::BasespecifierlistContext* JennyParser::BasespecifierlistContext::basespecifierlist() {
  return getRuleContext<JennyParser::BasespecifierlistContext>(0);
}


size_t JennyParser::BasespecifierlistContext::getRuleIndex() const {
  return JennyParser::RuleBasespecifierlist;
}

void JennyParser::BasespecifierlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasespecifierlist(this);
}

void JennyParser::BasespecifierlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasespecifierlist(this);
}


antlrcpp::Any JennyParser::BasespecifierlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBasespecifierlist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::BasespecifierlistContext* JennyParser::basespecifierlist() {
   return basespecifierlist(0);
}

JennyParser::BasespecifierlistContext* JennyParser::basespecifierlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::BasespecifierlistContext *_localctx = _tracker.createInstance<BasespecifierlistContext>(_ctx, parentState);
  JennyParser::BasespecifierlistContext *previousContext = _localctx;
  size_t startState = 318;
  enterRecursionRule(_localctx, 318, JennyParser::RuleBasespecifierlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2080);
    basespecifier();
    setState(2082);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 258, _ctx)) {
    case 1: {
      setState(2081);
      match(JennyParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2092);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 260, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BasespecifierlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBasespecifierlist);
        setState(2084);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2085);
        match(JennyParser::Comma);
        setState(2086);
        basespecifier();
        setState(2088);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 259, _ctx)) {
        case 1: {
          setState(2087);
          match(JennyParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2094);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 260, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BasespecifierContext ------------------------------------------------------------------

JennyParser::BasespecifierContext::BasespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::BasetypespecifierContext* JennyParser::BasespecifierContext::basetypespecifier() {
  return getRuleContext<JennyParser::BasetypespecifierContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::BasespecifierContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

tree::TerminalNode* JennyParser::BasespecifierContext::Virtual() {
  return getToken(JennyParser::Virtual, 0);
}

JennyParser::AccessspecifierContext* JennyParser::BasespecifierContext::accessspecifier() {
  return getRuleContext<JennyParser::AccessspecifierContext>(0);
}


size_t JennyParser::BasespecifierContext::getRuleIndex() const {
  return JennyParser::RuleBasespecifier;
}

void JennyParser::BasespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasespecifier(this);
}

void JennyParser::BasespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasespecifier(this);
}


antlrcpp::Any JennyParser::BasespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBasespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::BasespecifierContext* JennyParser::basespecifier() {
  BasespecifierContext *_localctx = _tracker.createInstance<BasespecifierContext>(_ctx, getState());
  enterRule(_localctx, 320, JennyParser::RuleBasespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2116);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 266, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2096);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(2095);
        attributespecifierseq(0);
      }
      setState(2098);
      basetypespecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2100);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(2099);
        attributespecifierseq(0);
      }
      setState(2102);
      match(JennyParser::Virtual);
      setState(2104);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::Private)
        | (1ULL << JennyParser::Protected)
        | (1ULL << JennyParser::Public))) != 0)) {
        setState(2103);
        accessspecifier();
      }
      setState(2106);
      basetypespecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2108);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(2107);
        attributespecifierseq(0);
      }
      setState(2110);
      accessspecifier();
      setState(2112);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Virtual) {
        setState(2111);
        match(JennyParser::Virtual);
      }
      setState(2114);
      basetypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassordecltypeContext ------------------------------------------------------------------

JennyParser::ClassordecltypeContext::ClassordecltypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ClassnameContext* JennyParser::ClassordecltypeContext::classname() {
  return getRuleContext<JennyParser::ClassnameContext>(0);
}

JennyParser::NestednamespecifierContext* JennyParser::ClassordecltypeContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}

JennyParser::DecltypespecifierContext* JennyParser::ClassordecltypeContext::decltypespecifier() {
  return getRuleContext<JennyParser::DecltypespecifierContext>(0);
}


size_t JennyParser::ClassordecltypeContext::getRuleIndex() const {
  return JennyParser::RuleClassordecltype;
}

void JennyParser::ClassordecltypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassordecltype(this);
}

void JennyParser::ClassordecltypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassordecltype(this);
}


antlrcpp::Any JennyParser::ClassordecltypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitClassordecltype(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ClassordecltypeContext* JennyParser::classordecltype() {
  ClassordecltypeContext *_localctx = _tracker.createInstance<ClassordecltypeContext>(_ctx, getState());
  enterRule(_localctx, 322, JennyParser::RuleClassordecltype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2119);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx)) {
      case 1: {
        setState(2118);
        nestednamespecifier(0);
        break;
      }

      }
      setState(2121);
      classname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2122);
      decltypespecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasetypespecifierContext ------------------------------------------------------------------

JennyParser::BasetypespecifierContext::BasetypespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ClassordecltypeContext* JennyParser::BasetypespecifierContext::classordecltype() {
  return getRuleContext<JennyParser::ClassordecltypeContext>(0);
}


size_t JennyParser::BasetypespecifierContext::getRuleIndex() const {
  return JennyParser::RuleBasetypespecifier;
}

void JennyParser::BasetypespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasetypespecifier(this);
}

void JennyParser::BasetypespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasetypespecifier(this);
}


antlrcpp::Any JennyParser::BasetypespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBasetypespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::BasetypespecifierContext* JennyParser::basetypespecifier() {
  BasetypespecifierContext *_localctx = _tracker.createInstance<BasetypespecifierContext>(_ctx, getState());
  enterRule(_localctx, 324, JennyParser::RuleBasetypespecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2125);
    classordecltype();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessspecifierContext ------------------------------------------------------------------

JennyParser::AccessspecifierContext::AccessspecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::AccessspecifierContext::Private() {
  return getToken(JennyParser::Private, 0);
}

tree::TerminalNode* JennyParser::AccessspecifierContext::Protected() {
  return getToken(JennyParser::Protected, 0);
}

tree::TerminalNode* JennyParser::AccessspecifierContext::Public() {
  return getToken(JennyParser::Public, 0);
}


size_t JennyParser::AccessspecifierContext::getRuleIndex() const {
  return JennyParser::RuleAccessspecifier;
}

void JennyParser::AccessspecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessspecifier(this);
}

void JennyParser::AccessspecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessspecifier(this);
}


antlrcpp::Any JennyParser::AccessspecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitAccessspecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::AccessspecifierContext* JennyParser::accessspecifier() {
  AccessspecifierContext *_localctx = _tracker.createInstance<AccessspecifierContext>(_ctx, getState());
  enterRule(_localctx, 326, JennyParser::RuleAccessspecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2127);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JennyParser::Private)
      | (1ULL << JennyParser::Protected)
      | (1ULL << JennyParser::Public))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionfunctionidContext ------------------------------------------------------------------

JennyParser::ConversionfunctionidContext::ConversionfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::ConversionfunctionidContext::Operator() {
  return getToken(JennyParser::Operator, 0);
}

JennyParser::ConversiontypeidContext* JennyParser::ConversionfunctionidContext::conversiontypeid() {
  return getRuleContext<JennyParser::ConversiontypeidContext>(0);
}


size_t JennyParser::ConversionfunctionidContext::getRuleIndex() const {
  return JennyParser::RuleConversionfunctionid;
}

void JennyParser::ConversionfunctionidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionfunctionid(this);
}

void JennyParser::ConversionfunctionidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionfunctionid(this);
}


antlrcpp::Any JennyParser::ConversionfunctionidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitConversionfunctionid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ConversionfunctionidContext* JennyParser::conversionfunctionid() {
  ConversionfunctionidContext *_localctx = _tracker.createInstance<ConversionfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 328, JennyParser::RuleConversionfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2129);
    match(JennyParser::Operator);
    setState(2130);
    conversiontypeid();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversiontypeidContext ------------------------------------------------------------------

JennyParser::ConversiontypeidContext::ConversiontypeidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TypespecifierseqContext* JennyParser::ConversiontypeidContext::typespecifierseq() {
  return getRuleContext<JennyParser::TypespecifierseqContext>(0);
}

JennyParser::ConversiondeclaratorContext* JennyParser::ConversiontypeidContext::conversiondeclarator() {
  return getRuleContext<JennyParser::ConversiondeclaratorContext>(0);
}


size_t JennyParser::ConversiontypeidContext::getRuleIndex() const {
  return JennyParser::RuleConversiontypeid;
}

void JennyParser::ConversiontypeidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversiontypeid(this);
}

void JennyParser::ConversiontypeidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversiontypeid(this);
}


antlrcpp::Any JennyParser::ConversiontypeidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitConversiontypeid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ConversiontypeidContext* JennyParser::conversiontypeid() {
  ConversiontypeidContext *_localctx = _tracker.createInstance<ConversiontypeidContext>(_ctx, getState());
  enterRule(_localctx, 330, JennyParser::RuleConversiontypeid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2132);
    typespecifierseq();
    setState(2134);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 269, _ctx)) {
    case 1: {
      setState(2133);
      conversiondeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversiondeclaratorContext ------------------------------------------------------------------

JennyParser::ConversiondeclaratorContext::ConversiondeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::PtroperatorContext* JennyParser::ConversiondeclaratorContext::ptroperator() {
  return getRuleContext<JennyParser::PtroperatorContext>(0);
}

JennyParser::ConversiondeclaratorContext* JennyParser::ConversiondeclaratorContext::conversiondeclarator() {
  return getRuleContext<JennyParser::ConversiondeclaratorContext>(0);
}


size_t JennyParser::ConversiondeclaratorContext::getRuleIndex() const {
  return JennyParser::RuleConversiondeclarator;
}

void JennyParser::ConversiondeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversiondeclarator(this);
}

void JennyParser::ConversiondeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversiondeclarator(this);
}


antlrcpp::Any JennyParser::ConversiondeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitConversiondeclarator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ConversiondeclaratorContext* JennyParser::conversiondeclarator() {
  ConversiondeclaratorContext *_localctx = _tracker.createInstance<ConversiondeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 332, JennyParser::RuleConversiondeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2136);
    ptroperator();
    setState(2138);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 270, _ctx)) {
    case 1: {
      setState(2137);
      conversiondeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CtorinitializerContext ------------------------------------------------------------------

JennyParser::CtorinitializerContext::CtorinitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::MeminitializerlistContext* JennyParser::CtorinitializerContext::meminitializerlist() {
  return getRuleContext<JennyParser::MeminitializerlistContext>(0);
}


size_t JennyParser::CtorinitializerContext::getRuleIndex() const {
  return JennyParser::RuleCtorinitializer;
}

void JennyParser::CtorinitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCtorinitializer(this);
}

void JennyParser::CtorinitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCtorinitializer(this);
}


antlrcpp::Any JennyParser::CtorinitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitCtorinitializer(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::CtorinitializerContext* JennyParser::ctorinitializer() {
  CtorinitializerContext *_localctx = _tracker.createInstance<CtorinitializerContext>(_ctx, getState());
  enterRule(_localctx, 334, JennyParser::RuleCtorinitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2140);
    match(JennyParser::Colon);
    setState(2141);
    meminitializerlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerlistContext ------------------------------------------------------------------

JennyParser::MeminitializerlistContext::MeminitializerlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::MeminitializerContext* JennyParser::MeminitializerlistContext::meminitializer() {
  return getRuleContext<JennyParser::MeminitializerContext>(0);
}

JennyParser::MeminitializerlistContext* JennyParser::MeminitializerlistContext::meminitializerlist() {
  return getRuleContext<JennyParser::MeminitializerlistContext>(0);
}


size_t JennyParser::MeminitializerlistContext::getRuleIndex() const {
  return JennyParser::RuleMeminitializerlist;
}

void JennyParser::MeminitializerlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializerlist(this);
}

void JennyParser::MeminitializerlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializerlist(this);
}


antlrcpp::Any JennyParser::MeminitializerlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitMeminitializerlist(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::MeminitializerlistContext* JennyParser::meminitializerlist() {
  MeminitializerlistContext *_localctx = _tracker.createInstance<MeminitializerlistContext>(_ctx, getState());
  enterRule(_localctx, 336, JennyParser::RuleMeminitializerlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2154);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2143);
      meminitializer();
      setState(2145);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Ellipsis) {
        setState(2144);
        match(JennyParser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2147);
      meminitializer();
      setState(2149);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Ellipsis) {
        setState(2148);
        match(JennyParser::Ellipsis);
      }
      setState(2151);
      match(JennyParser::Comma);
      setState(2152);
      meminitializerlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializerContext ------------------------------------------------------------------

JennyParser::MeminitializerContext::MeminitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::MeminitializeridContext* JennyParser::MeminitializerContext::meminitializerid() {
  return getRuleContext<JennyParser::MeminitializeridContext>(0);
}

JennyParser::ExpressionlistContext* JennyParser::MeminitializerContext::expressionlist() {
  return getRuleContext<JennyParser::ExpressionlistContext>(0);
}

JennyParser::BracedinitlistContext* JennyParser::MeminitializerContext::bracedinitlist() {
  return getRuleContext<JennyParser::BracedinitlistContext>(0);
}


size_t JennyParser::MeminitializerContext::getRuleIndex() const {
  return JennyParser::RuleMeminitializer;
}

void JennyParser::MeminitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializer(this);
}

void JennyParser::MeminitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializer(this);
}


antlrcpp::Any JennyParser::MeminitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitMeminitializer(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::MeminitializerContext* JennyParser::meminitializer() {
  MeminitializerContext *_localctx = _tracker.createInstance<MeminitializerContext>(_ctx, getState());
  enterRule(_localctx, 338, JennyParser::RuleMeminitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 275, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2156);
      meminitializerid();
      setState(2157);
      match(JennyParser::LeftParen);
      setState(2159);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__0)
        | (1ULL << JennyParser::T__1)
        | (1ULL << JennyParser::Alignof)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Const_cast)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Delete)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Dynamic_cast)
        | (1ULL << JennyParser::False)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::New)
        | (1ULL << JennyParser::Noexcept)
        | (1ULL << JennyParser::Nullptr)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Reinterpret_cast)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
        | (1ULL << (JennyParser::This - 64))
        | (1ULL << (JennyParser::Throw - 64))
        | (1ULL << (JennyParser::True - 64))
        | (1ULL << (JennyParser::Typeid_ - 64))
        | (1ULL << (JennyParser::Typename_ - 64))
        | (1ULL << (JennyParser::Unsigned - 64))
        | (1ULL << (JennyParser::Void - 64))
        | (1ULL << (JennyParser::Wchar - 64))
        | (1ULL << (JennyParser::LeftParen - 64))
        | (1ULL << (JennyParser::LeftBracket - 64))
        | (1ULL << (JennyParser::LeftBrace - 64))
        | (1ULL << (JennyParser::Plus - 64))
        | (1ULL << (JennyParser::Minus - 64))
        | (1ULL << (JennyParser::Star - 64))
        | (1ULL << (JennyParser::And - 64))
        | (1ULL << (JennyParser::Or - 64))
        | (1ULL << (JennyParser::Tilde - 64))
        | (1ULL << (JennyParser::PlusPlus - 64))
        | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
        | (1ULL << (JennyParser::Identifier - 128))
        | (1ULL << (JennyParser::Integerliteral - 128))
        | (1ULL << (JennyParser::Characterliteral - 128))
        | (1ULL << (JennyParser::Floatingliteral - 128))
        | (1ULL << (JennyParser::Stringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
        | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(2158);
        expressionlist();
      }
      setState(2161);
      match(JennyParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2163);
      meminitializerid();
      setState(2164);
      bracedinitlist();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MeminitializeridContext ------------------------------------------------------------------

JennyParser::MeminitializeridContext::MeminitializeridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ClassordecltypeContext* JennyParser::MeminitializeridContext::classordecltype() {
  return getRuleContext<JennyParser::ClassordecltypeContext>(0);
}

tree::TerminalNode* JennyParser::MeminitializeridContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::MeminitializeridContext::getRuleIndex() const {
  return JennyParser::RuleMeminitializerid;
}

void JennyParser::MeminitializeridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMeminitializerid(this);
}

void JennyParser::MeminitializeridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMeminitializerid(this);
}


antlrcpp::Any JennyParser::MeminitializeridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitMeminitializerid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::MeminitializeridContext* JennyParser::meminitializerid() {
  MeminitializeridContext *_localctx = _tracker.createInstance<MeminitializeridContext>(_ctx, getState());
  enterRule(_localctx, 340, JennyParser::RuleMeminitializerid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 276, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2168);
      classordecltype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2169);
      match(JennyParser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorfunctionidContext ------------------------------------------------------------------

JennyParser::OperatorfunctionidContext::OperatorfunctionidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::OperatorfunctionidContext::Operator() {
  return getToken(JennyParser::Operator, 0);
}

JennyParser::TheoperatorContext* JennyParser::OperatorfunctionidContext::theoperator() {
  return getRuleContext<JennyParser::TheoperatorContext>(0);
}


size_t JennyParser::OperatorfunctionidContext::getRuleIndex() const {
  return JennyParser::RuleOperatorfunctionid;
}

void JennyParser::OperatorfunctionidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorfunctionid(this);
}

void JennyParser::OperatorfunctionidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorfunctionid(this);
}


antlrcpp::Any JennyParser::OperatorfunctionidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitOperatorfunctionid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::OperatorfunctionidContext* JennyParser::operatorfunctionid() {
  OperatorfunctionidContext *_localctx = _tracker.createInstance<OperatorfunctionidContext>(_ctx, getState());
  enterRule(_localctx, 342, JennyParser::RuleOperatorfunctionid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2172);
    match(JennyParser::Operator);
    setState(2173);
    theoperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteraloperatoridContext ------------------------------------------------------------------

JennyParser::LiteraloperatoridContext::LiteraloperatoridContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::LiteraloperatoridContext::Operator() {
  return getToken(JennyParser::Operator, 0);
}

tree::TerminalNode* JennyParser::LiteraloperatoridContext::Stringliteral() {
  return getToken(JennyParser::Stringliteral, 0);
}

tree::TerminalNode* JennyParser::LiteraloperatoridContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

tree::TerminalNode* JennyParser::LiteraloperatoridContext::Userdefinedstringliteral() {
  return getToken(JennyParser::Userdefinedstringliteral, 0);
}


size_t JennyParser::LiteraloperatoridContext::getRuleIndex() const {
  return JennyParser::RuleLiteraloperatorid;
}

void JennyParser::LiteraloperatoridContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteraloperatorid(this);
}

void JennyParser::LiteraloperatoridContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteraloperatorid(this);
}


antlrcpp::Any JennyParser::LiteraloperatoridContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLiteraloperatorid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::LiteraloperatoridContext* JennyParser::literaloperatorid() {
  LiteraloperatoridContext *_localctx = _tracker.createInstance<LiteraloperatoridContext>(_ctx, getState());
  enterRule(_localctx, 344, JennyParser::RuleLiteraloperatorid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2180);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2175);
      match(JennyParser::Operator);
      setState(2176);
      match(JennyParser::Stringliteral);
      setState(2177);
      match(JennyParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2178);
      match(JennyParser::Operator);
      setState(2179);
      match(JennyParser::Userdefinedstringliteral);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplatedeclarationContext ------------------------------------------------------------------

JennyParser::TemplatedeclarationContext::TemplatedeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TemplatedeclarationContext::Template() {
  return getToken(JennyParser::Template, 0);
}

JennyParser::TemplateparameterlistContext* JennyParser::TemplatedeclarationContext::templateparameterlist() {
  return getRuleContext<JennyParser::TemplateparameterlistContext>(0);
}

JennyParser::DeclarationContext* JennyParser::TemplatedeclarationContext::declaration() {
  return getRuleContext<JennyParser::DeclarationContext>(0);
}


size_t JennyParser::TemplatedeclarationContext::getRuleIndex() const {
  return JennyParser::RuleTemplatedeclaration;
}

void JennyParser::TemplatedeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplatedeclaration(this);
}

void JennyParser::TemplatedeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplatedeclaration(this);
}


antlrcpp::Any JennyParser::TemplatedeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTemplatedeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TemplatedeclarationContext* JennyParser::templatedeclaration() {
  TemplatedeclarationContext *_localctx = _tracker.createInstance<TemplatedeclarationContext>(_ctx, getState());
  enterRule(_localctx, 346, JennyParser::RuleTemplatedeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2182);
    match(JennyParser::Template);
    setState(2183);
    match(JennyParser::Less);
    setState(2184);
    templateparameterlist(0);
    setState(2185);
    match(JennyParser::Greater);
    setState(2186);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateparameterlistContext ------------------------------------------------------------------

JennyParser::TemplateparameterlistContext::TemplateparameterlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TemplateparameterContext* JennyParser::TemplateparameterlistContext::templateparameter() {
  return getRuleContext<JennyParser::TemplateparameterContext>(0);
}

JennyParser::TemplateparameterlistContext* JennyParser::TemplateparameterlistContext::templateparameterlist() {
  return getRuleContext<JennyParser::TemplateparameterlistContext>(0);
}


size_t JennyParser::TemplateparameterlistContext::getRuleIndex() const {
  return JennyParser::RuleTemplateparameterlist;
}

void JennyParser::TemplateparameterlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateparameterlist(this);
}

void JennyParser::TemplateparameterlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateparameterlist(this);
}


antlrcpp::Any JennyParser::TemplateparameterlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTemplateparameterlist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::TemplateparameterlistContext* JennyParser::templateparameterlist() {
   return templateparameterlist(0);
}

JennyParser::TemplateparameterlistContext* JennyParser::templateparameterlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::TemplateparameterlistContext *_localctx = _tracker.createInstance<TemplateparameterlistContext>(_ctx, parentState);
  JennyParser::TemplateparameterlistContext *previousContext = _localctx;
  size_t startState = 348;
  enterRecursionRule(_localctx, 348, JennyParser::RuleTemplateparameterlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2189);
    templateparameter();
    _ctx->stop = _input->LT(-1);
    setState(2196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateparameterlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateparameterlist);
        setState(2191);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2192);
        match(JennyParser::Comma);
        setState(2193);
        templateparameter(); 
      }
      setState(2198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateparameterContext ------------------------------------------------------------------

JennyParser::TemplateparameterContext::TemplateparameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TypeparameterContext* JennyParser::TemplateparameterContext::typeparameter() {
  return getRuleContext<JennyParser::TypeparameterContext>(0);
}

JennyParser::ParameterdeclarationContext* JennyParser::TemplateparameterContext::parameterdeclaration() {
  return getRuleContext<JennyParser::ParameterdeclarationContext>(0);
}


size_t JennyParser::TemplateparameterContext::getRuleIndex() const {
  return JennyParser::RuleTemplateparameter;
}

void JennyParser::TemplateparameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateparameter(this);
}

void JennyParser::TemplateparameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateparameter(this);
}


antlrcpp::Any JennyParser::TemplateparameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTemplateparameter(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TemplateparameterContext* JennyParser::templateparameter() {
  TemplateparameterContext *_localctx = _tracker.createInstance<TemplateparameterContext>(_ctx, getState());
  enterRule(_localctx, 350, JennyParser::RuleTemplateparameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2199);
      typeparameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2200);
      parameterdeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeparameterContext ------------------------------------------------------------------

JennyParser::TypeparameterContext::TypeparameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TypeparameterContext::Class() {
  return getToken(JennyParser::Class, 0);
}

tree::TerminalNode* JennyParser::TypeparameterContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::ThetypeidContext* JennyParser::TypeparameterContext::thetypeid() {
  return getRuleContext<JennyParser::ThetypeidContext>(0);
}

tree::TerminalNode* JennyParser::TypeparameterContext::Typename_() {
  return getToken(JennyParser::Typename_, 0);
}

tree::TerminalNode* JennyParser::TypeparameterContext::Template() {
  return getToken(JennyParser::Template, 0);
}

JennyParser::TemplateparameterlistContext* JennyParser::TypeparameterContext::templateparameterlist() {
  return getRuleContext<JennyParser::TemplateparameterlistContext>(0);
}

JennyParser::IdexpressionContext* JennyParser::TypeparameterContext::idexpression() {
  return getRuleContext<JennyParser::IdexpressionContext>(0);
}


size_t JennyParser::TypeparameterContext::getRuleIndex() const {
  return JennyParser::RuleTypeparameter;
}

void JennyParser::TypeparameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeparameter(this);
}

void JennyParser::TypeparameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeparameter(this);
}


antlrcpp::Any JennyParser::TypeparameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTypeparameter(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TypeparameterContext* JennyParser::typeparameter() {
  TypeparameterContext *_localctx = _tracker.createInstance<TypeparameterContext>(_ctx, getState());
  enterRule(_localctx, 352, JennyParser::RuleTypeparameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2251);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2203);
      match(JennyParser::Class);
      setState(2205);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 280, _ctx)) {
      case 1: {
        setState(2204);
        match(JennyParser::Ellipsis);
        break;
      }

      }
      setState(2208);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 281, _ctx)) {
      case 1: {
        setState(2207);
        match(JennyParser::Identifier);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2210);
      match(JennyParser::Class);
      setState(2212);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Identifier) {
        setState(2211);
        match(JennyParser::Identifier);
      }
      setState(2214);
      match(JennyParser::Assign);
      setState(2215);
      thetypeid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2216);
      match(JennyParser::Typename_);
      setState(2218);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, _ctx)) {
      case 1: {
        setState(2217);
        match(JennyParser::Ellipsis);
        break;
      }

      }
      setState(2221);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 284, _ctx)) {
      case 1: {
        setState(2220);
        match(JennyParser::Identifier);
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2223);
      match(JennyParser::Typename_);
      setState(2225);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Identifier) {
        setState(2224);
        match(JennyParser::Identifier);
      }
      setState(2227);
      match(JennyParser::Assign);
      setState(2228);
      thetypeid();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2229);
      match(JennyParser::Template);
      setState(2230);
      match(JennyParser::Less);
      setState(2231);
      templateparameterlist(0);
      setState(2232);
      match(JennyParser::Greater);
      setState(2233);
      match(JennyParser::Class);
      setState(2235);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
      case 1: {
        setState(2234);
        match(JennyParser::Ellipsis);
        break;
      }

      }
      setState(2238);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx)) {
      case 1: {
        setState(2237);
        match(JennyParser::Identifier);
        break;
      }

      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2240);
      match(JennyParser::Template);
      setState(2241);
      match(JennyParser::Less);
      setState(2242);
      templateparameterlist(0);
      setState(2243);
      match(JennyParser::Greater);
      setState(2244);
      match(JennyParser::Class);
      setState(2246);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Identifier) {
        setState(2245);
        match(JennyParser::Identifier);
      }
      setState(2248);
      match(JennyParser::Assign);
      setState(2249);
      idexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpletemplateidContext ------------------------------------------------------------------

JennyParser::SimpletemplateidContext::SimpletemplateidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TemplatenameContext* JennyParser::SimpletemplateidContext::templatename() {
  return getRuleContext<JennyParser::TemplatenameContext>(0);
}

JennyParser::TemplateargumentlistContext* JennyParser::SimpletemplateidContext::templateargumentlist() {
  return getRuleContext<JennyParser::TemplateargumentlistContext>(0);
}


size_t JennyParser::SimpletemplateidContext::getRuleIndex() const {
  return JennyParser::RuleSimpletemplateid;
}

void JennyParser::SimpletemplateidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpletemplateid(this);
}

void JennyParser::SimpletemplateidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpletemplateid(this);
}


antlrcpp::Any JennyParser::SimpletemplateidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitSimpletemplateid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::SimpletemplateidContext* JennyParser::simpletemplateid() {
  SimpletemplateidContext *_localctx = _tracker.createInstance<SimpletemplateidContext>(_ctx, getState());
  enterRule(_localctx, 354, JennyParser::RuleSimpletemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2253);
    templatename();
    setState(2254);
    match(JennyParser::Less);
    setState(2256);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JennyParser::T__0)
      | (1ULL << JennyParser::T__1)
      | (1ULL << JennyParser::Alignof)
      | (1ULL << JennyParser::Auto)
      | (1ULL << JennyParser::Bool)
      | (1ULL << JennyParser::Char)
      | (1ULL << JennyParser::Char16)
      | (1ULL << JennyParser::Char32)
      | (1ULL << JennyParser::Class)
      | (1ULL << JennyParser::Const)
      | (1ULL << JennyParser::Const_cast)
      | (1ULL << JennyParser::Decltype)
      | (1ULL << JennyParser::Delete)
      | (1ULL << JennyParser::Double)
      | (1ULL << JennyParser::Dynamic_cast)
      | (1ULL << JennyParser::Enum)
      | (1ULL << JennyParser::False)
      | (1ULL << JennyParser::Float)
      | (1ULL << JennyParser::Int)
      | (1ULL << JennyParser::Long)
      | (1ULL << JennyParser::New)
      | (1ULL << JennyParser::Noexcept)
      | (1ULL << JennyParser::Nullptr)
      | (1ULL << JennyParser::Operator)
      | (1ULL << JennyParser::Reinterpret_cast)
      | (1ULL << JennyParser::Short)
      | (1ULL << JennyParser::Signed)
      | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
      | (1ULL << (JennyParser::Struct - 64))
      | (1ULL << (JennyParser::This - 64))
      | (1ULL << (JennyParser::True - 64))
      | (1ULL << (JennyParser::Typeid_ - 64))
      | (1ULL << (JennyParser::Typename_ - 64))
      | (1ULL << (JennyParser::Union - 64))
      | (1ULL << (JennyParser::Unsigned - 64))
      | (1ULL << (JennyParser::Void - 64))
      | (1ULL << (JennyParser::Volatile - 64))
      | (1ULL << (JennyParser::Wchar - 64))
      | (1ULL << (JennyParser::LeftParen - 64))
      | (1ULL << (JennyParser::LeftBracket - 64))
      | (1ULL << (JennyParser::Plus - 64))
      | (1ULL << (JennyParser::Minus - 64))
      | (1ULL << (JennyParser::Star - 64))
      | (1ULL << (JennyParser::And - 64))
      | (1ULL << (JennyParser::Or - 64))
      | (1ULL << (JennyParser::Tilde - 64))
      | (1ULL << (JennyParser::PlusPlus - 64))
      | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
      | (1ULL << (JennyParser::Identifier - 128))
      | (1ULL << (JennyParser::Integerliteral - 128))
      | (1ULL << (JennyParser::Characterliteral - 128))
      | (1ULL << (JennyParser::Floatingliteral - 128))
      | (1ULL << (JennyParser::Stringliteral - 128))
      | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
      | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
      | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
      | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
      setState(2255);
      templateargumentlist(0);
    }
    setState(2258);
    match(JennyParser::Greater);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateidContext ------------------------------------------------------------------

JennyParser::TemplateidContext::TemplateidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::SimpletemplateidContext* JennyParser::TemplateidContext::simpletemplateid() {
  return getRuleContext<JennyParser::SimpletemplateidContext>(0);
}

JennyParser::OperatorfunctionidContext* JennyParser::TemplateidContext::operatorfunctionid() {
  return getRuleContext<JennyParser::OperatorfunctionidContext>(0);
}

JennyParser::TemplateargumentlistContext* JennyParser::TemplateidContext::templateargumentlist() {
  return getRuleContext<JennyParser::TemplateargumentlistContext>(0);
}

JennyParser::LiteraloperatoridContext* JennyParser::TemplateidContext::literaloperatorid() {
  return getRuleContext<JennyParser::LiteraloperatoridContext>(0);
}


size_t JennyParser::TemplateidContext::getRuleIndex() const {
  return JennyParser::RuleTemplateid;
}

void JennyParser::TemplateidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateid(this);
}

void JennyParser::TemplateidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateid(this);
}


antlrcpp::Any JennyParser::TemplateidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTemplateid(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TemplateidContext* JennyParser::templateid() {
  TemplateidContext *_localctx = _tracker.createInstance<TemplateidContext>(_ctx, getState());
  enterRule(_localctx, 356, JennyParser::RuleTemplateid);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2260);
      simpletemplateid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2261);
      operatorfunctionid();
      setState(2262);
      match(JennyParser::Less);
      setState(2264);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__0)
        | (1ULL << JennyParser::T__1)
        | (1ULL << JennyParser::Alignof)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Class)
        | (1ULL << JennyParser::Const)
        | (1ULL << JennyParser::Const_cast)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Delete)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Dynamic_cast)
        | (1ULL << JennyParser::Enum)
        | (1ULL << JennyParser::False)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::New)
        | (1ULL << JennyParser::Noexcept)
        | (1ULL << JennyParser::Nullptr)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Reinterpret_cast)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
        | (1ULL << (JennyParser::Struct - 64))
        | (1ULL << (JennyParser::This - 64))
        | (1ULL << (JennyParser::True - 64))
        | (1ULL << (JennyParser::Typeid_ - 64))
        | (1ULL << (JennyParser::Typename_ - 64))
        | (1ULL << (JennyParser::Union - 64))
        | (1ULL << (JennyParser::Unsigned - 64))
        | (1ULL << (JennyParser::Void - 64))
        | (1ULL << (JennyParser::Volatile - 64))
        | (1ULL << (JennyParser::Wchar - 64))
        | (1ULL << (JennyParser::LeftParen - 64))
        | (1ULL << (JennyParser::LeftBracket - 64))
        | (1ULL << (JennyParser::Plus - 64))
        | (1ULL << (JennyParser::Minus - 64))
        | (1ULL << (JennyParser::Star - 64))
        | (1ULL << (JennyParser::And - 64))
        | (1ULL << (JennyParser::Or - 64))
        | (1ULL << (JennyParser::Tilde - 64))
        | (1ULL << (JennyParser::PlusPlus - 64))
        | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
        | (1ULL << (JennyParser::Identifier - 128))
        | (1ULL << (JennyParser::Integerliteral - 128))
        | (1ULL << (JennyParser::Characterliteral - 128))
        | (1ULL << (JennyParser::Floatingliteral - 128))
        | (1ULL << (JennyParser::Stringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
        | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(2263);
        templateargumentlist(0);
      }
      setState(2266);
      match(JennyParser::Greater);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2268);
      literaloperatorid();
      setState(2269);
      match(JennyParser::Less);
      setState(2271);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JennyParser::T__0)
        | (1ULL << JennyParser::T__1)
        | (1ULL << JennyParser::Alignof)
        | (1ULL << JennyParser::Auto)
        | (1ULL << JennyParser::Bool)
        | (1ULL << JennyParser::Char)
        | (1ULL << JennyParser::Char16)
        | (1ULL << JennyParser::Char32)
        | (1ULL << JennyParser::Class)
        | (1ULL << JennyParser::Const)
        | (1ULL << JennyParser::Const_cast)
        | (1ULL << JennyParser::Decltype)
        | (1ULL << JennyParser::Delete)
        | (1ULL << JennyParser::Double)
        | (1ULL << JennyParser::Dynamic_cast)
        | (1ULL << JennyParser::Enum)
        | (1ULL << JennyParser::False)
        | (1ULL << JennyParser::Float)
        | (1ULL << JennyParser::Int)
        | (1ULL << JennyParser::Long)
        | (1ULL << JennyParser::New)
        | (1ULL << JennyParser::Noexcept)
        | (1ULL << JennyParser::Nullptr)
        | (1ULL << JennyParser::Operator)
        | (1ULL << JennyParser::Reinterpret_cast)
        | (1ULL << JennyParser::Short)
        | (1ULL << JennyParser::Signed)
        | (1ULL << JennyParser::Sizeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (JennyParser::Static_cast - 64))
        | (1ULL << (JennyParser::Struct - 64))
        | (1ULL << (JennyParser::This - 64))
        | (1ULL << (JennyParser::True - 64))
        | (1ULL << (JennyParser::Typeid_ - 64))
        | (1ULL << (JennyParser::Typename_ - 64))
        | (1ULL << (JennyParser::Union - 64))
        | (1ULL << (JennyParser::Unsigned - 64))
        | (1ULL << (JennyParser::Void - 64))
        | (1ULL << (JennyParser::Volatile - 64))
        | (1ULL << (JennyParser::Wchar - 64))
        | (1ULL << (JennyParser::LeftParen - 64))
        | (1ULL << (JennyParser::LeftBracket - 64))
        | (1ULL << (JennyParser::Plus - 64))
        | (1ULL << (JennyParser::Minus - 64))
        | (1ULL << (JennyParser::Star - 64))
        | (1ULL << (JennyParser::And - 64))
        | (1ULL << (JennyParser::Or - 64))
        | (1ULL << (JennyParser::Tilde - 64))
        | (1ULL << (JennyParser::PlusPlus - 64))
        | (1ULL << (JennyParser::MinusMinus - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (JennyParser::Doublecolon - 128))
        | (1ULL << (JennyParser::Identifier - 128))
        | (1ULL << (JennyParser::Integerliteral - 128))
        | (1ULL << (JennyParser::Characterliteral - 128))
        | (1ULL << (JennyParser::Floatingliteral - 128))
        | (1ULL << (JennyParser::Stringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedintegerliteral - 128))
        | (1ULL << (JennyParser::Userdefinedfloatingliteral - 128))
        | (1ULL << (JennyParser::Userdefinedstringliteral - 128))
        | (1ULL << (JennyParser::Userdefinedcharacterliteral - 128)))) != 0)) {
        setState(2270);
        templateargumentlist(0);
      }
      setState(2273);
      match(JennyParser::Greater);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplatenameContext ------------------------------------------------------------------

JennyParser::TemplatenameContext::TemplatenameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TemplatenameContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}


size_t JennyParser::TemplatenameContext::getRuleIndex() const {
  return JennyParser::RuleTemplatename;
}

void JennyParser::TemplatenameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplatename(this);
}

void JennyParser::TemplatenameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplatename(this);
}


antlrcpp::Any JennyParser::TemplatenameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTemplatename(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TemplatenameContext* JennyParser::templatename() {
  TemplatenameContext *_localctx = _tracker.createInstance<TemplatenameContext>(_ctx, getState());
  enterRule(_localctx, 358, JennyParser::RuleTemplatename);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2277);
    match(JennyParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateargumentlistContext ------------------------------------------------------------------

JennyParser::TemplateargumentlistContext::TemplateargumentlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TemplateargumentContext* JennyParser::TemplateargumentlistContext::templateargument() {
  return getRuleContext<JennyParser::TemplateargumentContext>(0);
}

JennyParser::TemplateargumentlistContext* JennyParser::TemplateargumentlistContext::templateargumentlist() {
  return getRuleContext<JennyParser::TemplateargumentlistContext>(0);
}


size_t JennyParser::TemplateargumentlistContext::getRuleIndex() const {
  return JennyParser::RuleTemplateargumentlist;
}

void JennyParser::TemplateargumentlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateargumentlist(this);
}

void JennyParser::TemplateargumentlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateargumentlist(this);
}


antlrcpp::Any JennyParser::TemplateargumentlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTemplateargumentlist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::TemplateargumentlistContext* JennyParser::templateargumentlist() {
   return templateargumentlist(0);
}

JennyParser::TemplateargumentlistContext* JennyParser::templateargumentlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::TemplateargumentlistContext *_localctx = _tracker.createInstance<TemplateargumentlistContext>(_ctx, parentState);
  JennyParser::TemplateargumentlistContext *previousContext = _localctx;
  size_t startState = 360;
  enterRecursionRule(_localctx, 360, JennyParser::RuleTemplateargumentlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2280);
    templateargument();
    setState(2282);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
    case 1: {
      setState(2281);
      match(JennyParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2292);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateargumentlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateargumentlist);
        setState(2284);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2285);
        match(JennyParser::Comma);
        setState(2286);
        templateargument();
        setState(2288);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx)) {
        case 1: {
          setState(2287);
          match(JennyParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateargumentContext ------------------------------------------------------------------

JennyParser::TemplateargumentContext::TemplateargumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ThetypeidContext* JennyParser::TemplateargumentContext::thetypeid() {
  return getRuleContext<JennyParser::ThetypeidContext>(0);
}

JennyParser::ConstantexpressionContext* JennyParser::TemplateargumentContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}

JennyParser::IdexpressionContext* JennyParser::TemplateargumentContext::idexpression() {
  return getRuleContext<JennyParser::IdexpressionContext>(0);
}


size_t JennyParser::TemplateargumentContext::getRuleIndex() const {
  return JennyParser::RuleTemplateargument;
}

void JennyParser::TemplateargumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateargument(this);
}

void JennyParser::TemplateargumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateargument(this);
}


antlrcpp::Any JennyParser::TemplateargumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTemplateargument(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TemplateargumentContext* JennyParser::templateargument() {
  TemplateargumentContext *_localctx = _tracker.createInstance<TemplateargumentContext>(_ctx, getState());
  enterRule(_localctx, 362, JennyParser::RuleTemplateargument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2298);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2295);
      thetypeid();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2296);
      constantexpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2297);
      idexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypenamespecifierContext ------------------------------------------------------------------

JennyParser::TypenamespecifierContext::TypenamespecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TypenamespecifierContext::Typename_() {
  return getToken(JennyParser::Typename_, 0);
}

JennyParser::NestednamespecifierContext* JennyParser::TypenamespecifierContext::nestednamespecifier() {
  return getRuleContext<JennyParser::NestednamespecifierContext>(0);
}

tree::TerminalNode* JennyParser::TypenamespecifierContext::Identifier() {
  return getToken(JennyParser::Identifier, 0);
}

JennyParser::SimpletemplateidContext* JennyParser::TypenamespecifierContext::simpletemplateid() {
  return getRuleContext<JennyParser::SimpletemplateidContext>(0);
}

tree::TerminalNode* JennyParser::TypenamespecifierContext::Template() {
  return getToken(JennyParser::Template, 0);
}


size_t JennyParser::TypenamespecifierContext::getRuleIndex() const {
  return JennyParser::RuleTypenamespecifier;
}

void JennyParser::TypenamespecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypenamespecifier(this);
}

void JennyParser::TypenamespecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypenamespecifier(this);
}


antlrcpp::Any JennyParser::TypenamespecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTypenamespecifier(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TypenamespecifierContext* JennyParser::typenamespecifier() {
  TypenamespecifierContext *_localctx = _tracker.createInstance<TypenamespecifierContext>(_ctx, getState());
  enterRule(_localctx, 364, JennyParser::RuleTypenamespecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2311);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2300);
      match(JennyParser::Typename_);
      setState(2301);
      nestednamespecifier(0);
      setState(2302);
      match(JennyParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2304);
      match(JennyParser::Typename_);
      setState(2305);
      nestednamespecifier(0);
      setState(2307);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Template) {
        setState(2306);
        match(JennyParser::Template);
      }
      setState(2309);
      simpletemplateid();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitinstantiationContext ------------------------------------------------------------------

JennyParser::ExplicitinstantiationContext::ExplicitinstantiationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::ExplicitinstantiationContext::Template() {
  return getToken(JennyParser::Template, 0);
}

JennyParser::DeclarationContext* JennyParser::ExplicitinstantiationContext::declaration() {
  return getRuleContext<JennyParser::DeclarationContext>(0);
}

tree::TerminalNode* JennyParser::ExplicitinstantiationContext::Extern() {
  return getToken(JennyParser::Extern, 0);
}


size_t JennyParser::ExplicitinstantiationContext::getRuleIndex() const {
  return JennyParser::RuleExplicitinstantiation;
}

void JennyParser::ExplicitinstantiationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitinstantiation(this);
}

void JennyParser::ExplicitinstantiationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitinstantiation(this);
}


antlrcpp::Any JennyParser::ExplicitinstantiationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitExplicitinstantiation(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ExplicitinstantiationContext* JennyParser::explicitinstantiation() {
  ExplicitinstantiationContext *_localctx = _tracker.createInstance<ExplicitinstantiationContext>(_ctx, getState());
  enterRule(_localctx, 366, JennyParser::RuleExplicitinstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2314);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Extern) {
      setState(2313);
      match(JennyParser::Extern);
    }
    setState(2316);
    match(JennyParser::Template);
    setState(2317);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitspecializationContext ------------------------------------------------------------------

JennyParser::ExplicitspecializationContext::ExplicitspecializationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::ExplicitspecializationContext::Template() {
  return getToken(JennyParser::Template, 0);
}

JennyParser::DeclarationContext* JennyParser::ExplicitspecializationContext::declaration() {
  return getRuleContext<JennyParser::DeclarationContext>(0);
}


size_t JennyParser::ExplicitspecializationContext::getRuleIndex() const {
  return JennyParser::RuleExplicitspecialization;
}

void JennyParser::ExplicitspecializationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitspecialization(this);
}

void JennyParser::ExplicitspecializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitspecialization(this);
}


antlrcpp::Any JennyParser::ExplicitspecializationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitExplicitspecialization(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ExplicitspecializationContext* JennyParser::explicitspecialization() {
  ExplicitspecializationContext *_localctx = _tracker.createInstance<ExplicitspecializationContext>(_ctx, getState());
  enterRule(_localctx, 368, JennyParser::RuleExplicitspecialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2319);
    match(JennyParser::Template);
    setState(2320);
    match(JennyParser::Less);
    setState(2321);
    match(JennyParser::Greater);
    setState(2322);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryblockContext ------------------------------------------------------------------

JennyParser::TryblockContext::TryblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TryblockContext::Try() {
  return getToken(JennyParser::Try, 0);
}

JennyParser::CompoundstatementContext* JennyParser::TryblockContext::compoundstatement() {
  return getRuleContext<JennyParser::CompoundstatementContext>(0);
}

JennyParser::HandlerseqContext* JennyParser::TryblockContext::handlerseq() {
  return getRuleContext<JennyParser::HandlerseqContext>(0);
}


size_t JennyParser::TryblockContext::getRuleIndex() const {
  return JennyParser::RuleTryblock;
}

void JennyParser::TryblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryblock(this);
}

void JennyParser::TryblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryblock(this);
}


antlrcpp::Any JennyParser::TryblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTryblock(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TryblockContext* JennyParser::tryblock() {
  TryblockContext *_localctx = _tracker.createInstance<TryblockContext>(_ctx, getState());
  enterRule(_localctx, 370, JennyParser::RuleTryblock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2324);
    match(JennyParser::Try);
    setState(2325);
    compoundstatement();
    setState(2326);
    handlerseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiontryblockContext ------------------------------------------------------------------

JennyParser::FunctiontryblockContext::FunctiontryblockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::FunctiontryblockContext::Try() {
  return getToken(JennyParser::Try, 0);
}

JennyParser::CompoundstatementContext* JennyParser::FunctiontryblockContext::compoundstatement() {
  return getRuleContext<JennyParser::CompoundstatementContext>(0);
}

JennyParser::HandlerseqContext* JennyParser::FunctiontryblockContext::handlerseq() {
  return getRuleContext<JennyParser::HandlerseqContext>(0);
}

JennyParser::CtorinitializerContext* JennyParser::FunctiontryblockContext::ctorinitializer() {
  return getRuleContext<JennyParser::CtorinitializerContext>(0);
}


size_t JennyParser::FunctiontryblockContext::getRuleIndex() const {
  return JennyParser::RuleFunctiontryblock;
}

void JennyParser::FunctiontryblockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiontryblock(this);
}

void JennyParser::FunctiontryblockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiontryblock(this);
}


antlrcpp::Any JennyParser::FunctiontryblockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitFunctiontryblock(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::FunctiontryblockContext* JennyParser::functiontryblock() {
  FunctiontryblockContext *_localctx = _tracker.createInstance<FunctiontryblockContext>(_ctx, getState());
  enterRule(_localctx, 372, JennyParser::RuleFunctiontryblock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2328);
    match(JennyParser::Try);
    setState(2330);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JennyParser::Colon) {
      setState(2329);
      ctorinitializer();
    }
    setState(2332);
    compoundstatement();
    setState(2333);
    handlerseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerseqContext ------------------------------------------------------------------

JennyParser::HandlerseqContext::HandlerseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::HandlerContext* JennyParser::HandlerseqContext::handler() {
  return getRuleContext<JennyParser::HandlerContext>(0);
}

JennyParser::HandlerseqContext* JennyParser::HandlerseqContext::handlerseq() {
  return getRuleContext<JennyParser::HandlerseqContext>(0);
}


size_t JennyParser::HandlerseqContext::getRuleIndex() const {
  return JennyParser::RuleHandlerseq;
}

void JennyParser::HandlerseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandlerseq(this);
}

void JennyParser::HandlerseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandlerseq(this);
}


antlrcpp::Any JennyParser::HandlerseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitHandlerseq(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::HandlerseqContext* JennyParser::handlerseq() {
  HandlerseqContext *_localctx = _tracker.createInstance<HandlerseqContext>(_ctx, getState());
  enterRule(_localctx, 374, JennyParser::RuleHandlerseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2335);
    handler();
    setState(2337);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx)) {
    case 1: {
      setState(2336);
      handlerseq();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerContext ------------------------------------------------------------------

JennyParser::HandlerContext::HandlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::HandlerContext::Catch() {
  return getToken(JennyParser::Catch, 0);
}

JennyParser::ExceptiondeclarationContext* JennyParser::HandlerContext::exceptiondeclaration() {
  return getRuleContext<JennyParser::ExceptiondeclarationContext>(0);
}

JennyParser::CompoundstatementContext* JennyParser::HandlerContext::compoundstatement() {
  return getRuleContext<JennyParser::CompoundstatementContext>(0);
}


size_t JennyParser::HandlerContext::getRuleIndex() const {
  return JennyParser::RuleHandler;
}

void JennyParser::HandlerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandler(this);
}

void JennyParser::HandlerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandler(this);
}


antlrcpp::Any JennyParser::HandlerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitHandler(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::HandlerContext* JennyParser::handler() {
  HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
  enterRule(_localctx, 376, JennyParser::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2339);
    match(JennyParser::Catch);
    setState(2340);
    match(JennyParser::LeftParen);
    setState(2341);
    exceptiondeclaration();
    setState(2342);
    match(JennyParser::RightParen);
    setState(2343);
    compoundstatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptiondeclarationContext ------------------------------------------------------------------

JennyParser::ExceptiondeclarationContext::ExceptiondeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::TypespecifierseqContext* JennyParser::ExceptiondeclarationContext::typespecifierseq() {
  return getRuleContext<JennyParser::TypespecifierseqContext>(0);
}

JennyParser::DeclaratorContext* JennyParser::ExceptiondeclarationContext::declarator() {
  return getRuleContext<JennyParser::DeclaratorContext>(0);
}

JennyParser::AttributespecifierseqContext* JennyParser::ExceptiondeclarationContext::attributespecifierseq() {
  return getRuleContext<JennyParser::AttributespecifierseqContext>(0);
}

JennyParser::AbstractdeclaratorContext* JennyParser::ExceptiondeclarationContext::abstractdeclarator() {
  return getRuleContext<JennyParser::AbstractdeclaratorContext>(0);
}


size_t JennyParser::ExceptiondeclarationContext::getRuleIndex() const {
  return JennyParser::RuleExceptiondeclaration;
}

void JennyParser::ExceptiondeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptiondeclaration(this);
}

void JennyParser::ExceptiondeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptiondeclaration(this);
}


antlrcpp::Any JennyParser::ExceptiondeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitExceptiondeclaration(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ExceptiondeclarationContext* JennyParser::exceptiondeclaration() {
  ExceptiondeclarationContext *_localctx = _tracker.createInstance<ExceptiondeclarationContext>(_ctx, getState());
  enterRule(_localctx, 378, JennyParser::RuleExceptiondeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2359);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2346);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(2345);
        attributespecifierseq(0);
      }
      setState(2348);
      typespecifierseq();
      setState(2349);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2352);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::Alignas || _la == JennyParser::LeftBracket) {
        setState(2351);
        attributespecifierseq(0);
      }
      setState(2354);
      typespecifierseq();
      setState(2356);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JennyParser::T__2

      || _la == JennyParser::Decltype || ((((_la - 84) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 84)) & ((1ULL << (JennyParser::LeftParen - 84))
        | (1ULL << (JennyParser::LeftBracket - 84))
        | (1ULL << (JennyParser::Star - 84))
        | (1ULL << (JennyParser::And - 84))
        | (1ULL << (JennyParser::Doublecolon - 84))
        | (1ULL << (JennyParser::Ellipsis - 84))
        | (1ULL << (JennyParser::Identifier - 84)))) != 0)) {
        setState(2355);
        abstractdeclarator();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2358);
      match(JennyParser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowexpressionContext ------------------------------------------------------------------

JennyParser::ThrowexpressionContext::ThrowexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::ThrowexpressionContext::Throw() {
  return getToken(JennyParser::Throw, 0);
}

JennyParser::AssignmentexpressionContext* JennyParser::ThrowexpressionContext::assignmentexpression() {
  return getRuleContext<JennyParser::AssignmentexpressionContext>(0);
}


size_t JennyParser::ThrowexpressionContext::getRuleIndex() const {
  return JennyParser::RuleThrowexpression;
}

void JennyParser::ThrowexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowexpression(this);
}

void JennyParser::ThrowexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowexpression(this);
}


antlrcpp::Any JennyParser::ThrowexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitThrowexpression(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ThrowexpressionContext* JennyParser::throwexpression() {
  ThrowexpressionContext *_localctx = _tracker.createInstance<ThrowexpressionContext>(_ctx, getState());
  enterRule(_localctx, 380, JennyParser::RuleThrowexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2361);
    match(JennyParser::Throw);
    setState(2363);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, _ctx)) {
    case 1: {
      setState(2362);
      assignmentexpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionspecificationContext ------------------------------------------------------------------

JennyParser::ExceptionspecificationContext::ExceptionspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::DynamicexceptionspecificationContext* JennyParser::ExceptionspecificationContext::dynamicexceptionspecification() {
  return getRuleContext<JennyParser::DynamicexceptionspecificationContext>(0);
}

JennyParser::NoexceptspecificationContext* JennyParser::ExceptionspecificationContext::noexceptspecification() {
  return getRuleContext<JennyParser::NoexceptspecificationContext>(0);
}


size_t JennyParser::ExceptionspecificationContext::getRuleIndex() const {
  return JennyParser::RuleExceptionspecification;
}

void JennyParser::ExceptionspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionspecification(this);
}

void JennyParser::ExceptionspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionspecification(this);
}


antlrcpp::Any JennyParser::ExceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitExceptionspecification(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::ExceptionspecificationContext* JennyParser::exceptionspecification() {
  ExceptionspecificationContext *_localctx = _tracker.createInstance<ExceptionspecificationContext>(_ctx, getState());
  enterRule(_localctx, 382, JennyParser::RuleExceptionspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Throw: {
        enterOuterAlt(_localctx, 1);
        setState(2365);
        dynamicexceptionspecification();
        break;
      }

      case JennyParser::Noexcept: {
        enterOuterAlt(_localctx, 2);
        setState(2366);
        noexceptspecification();
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

//----------------- DynamicexceptionspecificationContext ------------------------------------------------------------------

JennyParser::DynamicexceptionspecificationContext::DynamicexceptionspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::DynamicexceptionspecificationContext::Throw() {
  return getToken(JennyParser::Throw, 0);
}

JennyParser::TypeidlistContext* JennyParser::DynamicexceptionspecificationContext::typeidlist() {
  return getRuleContext<JennyParser::TypeidlistContext>(0);
}


size_t JennyParser::DynamicexceptionspecificationContext::getRuleIndex() const {
  return JennyParser::RuleDynamicexceptionspecification;
}

void JennyParser::DynamicexceptionspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDynamicexceptionspecification(this);
}

void JennyParser::DynamicexceptionspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDynamicexceptionspecification(this);
}


antlrcpp::Any JennyParser::DynamicexceptionspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitDynamicexceptionspecification(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::DynamicexceptionspecificationContext* JennyParser::dynamicexceptionspecification() {
  DynamicexceptionspecificationContext *_localctx = _tracker.createInstance<DynamicexceptionspecificationContext>(_ctx, getState());
  enterRule(_localctx, 384, JennyParser::RuleDynamicexceptionspecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2369);
    match(JennyParser::Throw);
    setState(2370);
    match(JennyParser::LeftParen);
    setState(2372);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 12) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 12)) & ((1ULL << (JennyParser::Auto - 12))
      | (1ULL << (JennyParser::Bool - 12))
      | (1ULL << (JennyParser::Char - 12))
      | (1ULL << (JennyParser::Char16 - 12))
      | (1ULL << (JennyParser::Char32 - 12))
      | (1ULL << (JennyParser::Class - 12))
      | (1ULL << (JennyParser::Const - 12))
      | (1ULL << (JennyParser::Decltype - 12))
      | (1ULL << (JennyParser::Double - 12))
      | (1ULL << (JennyParser::Enum - 12))
      | (1ULL << (JennyParser::Float - 12))
      | (1ULL << (JennyParser::Int - 12))
      | (1ULL << (JennyParser::Long - 12))
      | (1ULL << (JennyParser::Short - 12))
      | (1ULL << (JennyParser::Signed - 12))
      | (1ULL << (JennyParser::Struct - 12))
      | (1ULL << (JennyParser::Typename_ - 12)))) != 0) || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (JennyParser::Union - 76))
      | (1ULL << (JennyParser::Unsigned - 76))
      | (1ULL << (JennyParser::Void - 76))
      | (1ULL << (JennyParser::Volatile - 76))
      | (1ULL << (JennyParser::Wchar - 76))
      | (1ULL << (JennyParser::Doublecolon - 76))
      | (1ULL << (JennyParser::Identifier - 76)))) != 0)) {
      setState(2371);
      typeidlist(0);
    }
    setState(2374);
    match(JennyParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeidlistContext ------------------------------------------------------------------

JennyParser::TypeidlistContext::TypeidlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JennyParser::ThetypeidContext* JennyParser::TypeidlistContext::thetypeid() {
  return getRuleContext<JennyParser::ThetypeidContext>(0);
}

JennyParser::TypeidlistContext* JennyParser::TypeidlistContext::typeidlist() {
  return getRuleContext<JennyParser::TypeidlistContext>(0);
}


size_t JennyParser::TypeidlistContext::getRuleIndex() const {
  return JennyParser::RuleTypeidlist;
}

void JennyParser::TypeidlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeidlist(this);
}

void JennyParser::TypeidlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeidlist(this);
}


antlrcpp::Any JennyParser::TypeidlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTypeidlist(this);
  else
    return visitor->visitChildren(this);
}


JennyParser::TypeidlistContext* JennyParser::typeidlist() {
   return typeidlist(0);
}

JennyParser::TypeidlistContext* JennyParser::typeidlist(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JennyParser::TypeidlistContext *_localctx = _tracker.createInstance<TypeidlistContext>(_ctx, parentState);
  JennyParser::TypeidlistContext *previousContext = _localctx;
  size_t startState = 386;
  enterRecursionRule(_localctx, 386, JennyParser::RuleTypeidlist, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2377);
    thetypeid();
    setState(2379);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 310, _ctx)) {
    case 1: {
      setState(2378);
      match(JennyParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2389);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeidlistContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeidlist);
        setState(2381);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2382);
        match(JennyParser::Comma);
        setState(2383);
        thetypeid();
        setState(2385);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx)) {
        case 1: {
          setState(2384);
          match(JennyParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2391);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 312, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NoexceptspecificationContext ------------------------------------------------------------------

JennyParser::NoexceptspecificationContext::NoexceptspecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::NoexceptspecificationContext::Noexcept() {
  return getToken(JennyParser::Noexcept, 0);
}

JennyParser::ConstantexpressionContext* JennyParser::NoexceptspecificationContext::constantexpression() {
  return getRuleContext<JennyParser::ConstantexpressionContext>(0);
}


size_t JennyParser::NoexceptspecificationContext::getRuleIndex() const {
  return JennyParser::RuleNoexceptspecification;
}

void JennyParser::NoexceptspecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoexceptspecification(this);
}

void JennyParser::NoexceptspecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoexceptspecification(this);
}


antlrcpp::Any JennyParser::NoexceptspecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitNoexceptspecification(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::NoexceptspecificationContext* JennyParser::noexceptspecification() {
  NoexceptspecificationContext *_localctx = _tracker.createInstance<NoexceptspecificationContext>(_ctx, getState());
  enterRule(_localctx, 388, JennyParser::RuleNoexceptspecification);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2398);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 313, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2392);
      match(JennyParser::Noexcept);
      setState(2393);
      match(JennyParser::LeftParen);
      setState(2394);
      constantexpression();
      setState(2395);
      match(JennyParser::RightParen);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2397);
      match(JennyParser::Noexcept);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheoperatorContext ------------------------------------------------------------------

JennyParser::TheoperatorContext::TheoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::TheoperatorContext::New() {
  return getToken(JennyParser::New, 0);
}

tree::TerminalNode* JennyParser::TheoperatorContext::Delete() {
  return getToken(JennyParser::Delete, 0);
}

tree::TerminalNode* JennyParser::TheoperatorContext::LeftShift() {
  return getToken(JennyParser::LeftShift, 0);
}

tree::TerminalNode* JennyParser::TheoperatorContext::RightShift() {
  return getToken(JennyParser::RightShift, 0);
}

tree::TerminalNode* JennyParser::TheoperatorContext::RightShiftAssign() {
  return getToken(JennyParser::RightShiftAssign, 0);
}

tree::TerminalNode* JennyParser::TheoperatorContext::LeftShiftAssign() {
  return getToken(JennyParser::LeftShiftAssign, 0);
}


size_t JennyParser::TheoperatorContext::getRuleIndex() const {
  return JennyParser::RuleTheoperator;
}

void JennyParser::TheoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTheoperator(this);
}

void JennyParser::TheoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTheoperator(this);
}


antlrcpp::Any JennyParser::TheoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitTheoperator(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::TheoperatorContext* JennyParser::theoperator() {
  TheoperatorContext *_localctx = _tracker.createInstance<TheoperatorContext>(_ctx, getState());
  enterRule(_localctx, 390, JennyParser::RuleTheoperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2451);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 314, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2400);
      match(JennyParser::New);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2401);
      match(JennyParser::Delete);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2402);
      match(JennyParser::New);
      setState(2403);
      match(JennyParser::LeftBracket);
      setState(2404);
      match(JennyParser::RightBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2405);
      match(JennyParser::Delete);
      setState(2406);
      match(JennyParser::LeftBracket);
      setState(2407);
      match(JennyParser::RightBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2408);
      match(JennyParser::Plus);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2409);
      match(JennyParser::Minus);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2410);
      match(JennyParser::Star);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2411);
      match(JennyParser::Div);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2412);
      match(JennyParser::Mod);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2413);
      match(JennyParser::Caret);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2414);
      match(JennyParser::And);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2415);
      match(JennyParser::Or);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2416);
      match(JennyParser::Tilde);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2417);
      match(JennyParser::T__0);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2418);
      match(JennyParser::T__1);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2419);
      match(JennyParser::Assign);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2420);
      match(JennyParser::Less);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2421);
      match(JennyParser::Greater);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2422);
      match(JennyParser::PlusAssign);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2423);
      match(JennyParser::MinusAssign);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2424);
      match(JennyParser::StarAssign);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2425);
      match(JennyParser::DivAssign);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2426);
      match(JennyParser::ModAssign);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2427);
      match(JennyParser::XorAssign);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2428);
      match(JennyParser::AndAssign);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2429);
      match(JennyParser::OrAssign);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2430);
      match(JennyParser::LeftShift);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2431);
      match(JennyParser::RightShift);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2432);
      match(JennyParser::RightShiftAssign);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2433);
      match(JennyParser::LeftShiftAssign);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2434);
      match(JennyParser::Equal);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2435);
      match(JennyParser::NotEqual);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2436);
      match(JennyParser::LessEqual);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2437);
      match(JennyParser::GreaterEqual);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2438);
      match(JennyParser::T__2);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2439);
      match(JennyParser::T__3);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2440);
      match(JennyParser::T__4);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2441);
      match(JennyParser::T__5);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2442);
      match(JennyParser::PlusPlus);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2443);
      match(JennyParser::MinusMinus);
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(2444);
      match(JennyParser::Comma);
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(2445);
      match(JennyParser::ArrowStar);
      break;
    }

    case 43: {
      enterOuterAlt(_localctx, 43);
      setState(2446);
      match(JennyParser::Arrow);
      break;
    }

    case 44: {
      enterOuterAlt(_localctx, 44);
      setState(2447);
      match(JennyParser::LeftParen);
      setState(2448);
      match(JennyParser::RightParen);
      break;
    }

    case 45: {
      enterOuterAlt(_localctx, 45);
      setState(2449);
      match(JennyParser::LeftBracket);
      setState(2450);
      match(JennyParser::RightBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

JennyParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::LiteralContext::Integerliteral() {
  return getToken(JennyParser::Integerliteral, 0);
}

tree::TerminalNode* JennyParser::LiteralContext::Characterliteral() {
  return getToken(JennyParser::Characterliteral, 0);
}

tree::TerminalNode* JennyParser::LiteralContext::Floatingliteral() {
  return getToken(JennyParser::Floatingliteral, 0);
}

tree::TerminalNode* JennyParser::LiteralContext::Stringliteral() {
  return getToken(JennyParser::Stringliteral, 0);
}

JennyParser::BooleanliteralContext* JennyParser::LiteralContext::booleanliteral() {
  return getRuleContext<JennyParser::BooleanliteralContext>(0);
}

JennyParser::PointerliteralContext* JennyParser::LiteralContext::pointerliteral() {
  return getRuleContext<JennyParser::PointerliteralContext>(0);
}

JennyParser::UserdefinedliteralContext* JennyParser::LiteralContext::userdefinedliteral() {
  return getRuleContext<JennyParser::UserdefinedliteralContext>(0);
}


size_t JennyParser::LiteralContext::getRuleIndex() const {
  return JennyParser::RuleLiteral;
}

void JennyParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void JennyParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any JennyParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::LiteralContext* JennyParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 392, JennyParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2460);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JennyParser::Integerliteral: {
        enterOuterAlt(_localctx, 1);
        setState(2453);
        match(JennyParser::Integerliteral);
        break;
      }

      case JennyParser::Characterliteral: {
        enterOuterAlt(_localctx, 2);
        setState(2454);
        match(JennyParser::Characterliteral);
        break;
      }

      case JennyParser::Floatingliteral: {
        enterOuterAlt(_localctx, 3);
        setState(2455);
        match(JennyParser::Floatingliteral);
        break;
      }

      case JennyParser::Stringliteral: {
        enterOuterAlt(_localctx, 4);
        setState(2456);
        match(JennyParser::Stringliteral);
        break;
      }

      case JennyParser::False:
      case JennyParser::True: {
        enterOuterAlt(_localctx, 5);
        setState(2457);
        booleanliteral();
        break;
      }

      case JennyParser::Nullptr: {
        enterOuterAlt(_localctx, 6);
        setState(2458);
        pointerliteral();
        break;
      }

      case JennyParser::Userdefinedintegerliteral:
      case JennyParser::Userdefinedfloatingliteral:
      case JennyParser::Userdefinedstringliteral:
      case JennyParser::Userdefinedcharacterliteral: {
        enterOuterAlt(_localctx, 7);
        setState(2459);
        userdefinedliteral();
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

//----------------- BooleanliteralContext ------------------------------------------------------------------

JennyParser::BooleanliteralContext::BooleanliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::BooleanliteralContext::False() {
  return getToken(JennyParser::False, 0);
}

tree::TerminalNode* JennyParser::BooleanliteralContext::True() {
  return getToken(JennyParser::True, 0);
}


size_t JennyParser::BooleanliteralContext::getRuleIndex() const {
  return JennyParser::RuleBooleanliteral;
}

void JennyParser::BooleanliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanliteral(this);
}

void JennyParser::BooleanliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanliteral(this);
}


antlrcpp::Any JennyParser::BooleanliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitBooleanliteral(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::BooleanliteralContext* JennyParser::booleanliteral() {
  BooleanliteralContext *_localctx = _tracker.createInstance<BooleanliteralContext>(_ctx, getState());
  enterRule(_localctx, 394, JennyParser::RuleBooleanliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2462);
    _la = _input->LA(1);
    if (!(_la == JennyParser::False

    || _la == JennyParser::True)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerliteralContext ------------------------------------------------------------------

JennyParser::PointerliteralContext::PointerliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::PointerliteralContext::Nullptr() {
  return getToken(JennyParser::Nullptr, 0);
}


size_t JennyParser::PointerliteralContext::getRuleIndex() const {
  return JennyParser::RulePointerliteral;
}

void JennyParser::PointerliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerliteral(this);
}

void JennyParser::PointerliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerliteral(this);
}


antlrcpp::Any JennyParser::PointerliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitPointerliteral(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::PointerliteralContext* JennyParser::pointerliteral() {
  PointerliteralContext *_localctx = _tracker.createInstance<PointerliteralContext>(_ctx, getState());
  enterRule(_localctx, 396, JennyParser::RulePointerliteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2464);
    match(JennyParser::Nullptr);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserdefinedliteralContext ------------------------------------------------------------------

JennyParser::UserdefinedliteralContext::UserdefinedliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JennyParser::UserdefinedliteralContext::Userdefinedintegerliteral() {
  return getToken(JennyParser::Userdefinedintegerliteral, 0);
}

tree::TerminalNode* JennyParser::UserdefinedliteralContext::Userdefinedfloatingliteral() {
  return getToken(JennyParser::Userdefinedfloatingliteral, 0);
}

tree::TerminalNode* JennyParser::UserdefinedliteralContext::Userdefinedstringliteral() {
  return getToken(JennyParser::Userdefinedstringliteral, 0);
}

tree::TerminalNode* JennyParser::UserdefinedliteralContext::Userdefinedcharacterliteral() {
  return getToken(JennyParser::Userdefinedcharacterliteral, 0);
}


size_t JennyParser::UserdefinedliteralContext::getRuleIndex() const {
  return JennyParser::RuleUserdefinedliteral;
}

void JennyParser::UserdefinedliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserdefinedliteral(this);
}

void JennyParser::UserdefinedliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JennyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserdefinedliteral(this);
}


antlrcpp::Any JennyParser::UserdefinedliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JennyVisitor*>(visitor))
    return parserVisitor->visitUserdefinedliteral(this);
  else
    return visitor->visitChildren(this);
}

JennyParser::UserdefinedliteralContext* JennyParser::userdefinedliteral() {
  UserdefinedliteralContext *_localctx = _tracker.createInstance<UserdefinedliteralContext>(_ctx, getState());
  enterRule(_localctx, 398, JennyParser::RuleUserdefinedliteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2466);
    _la = _input->LA(1);
    if (!(((((_la - 143) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 143)) & ((1ULL << (JennyParser::Userdefinedintegerliteral - 143))
      | (1ULL << (JennyParser::Userdefinedfloatingliteral - 143))
      | (1ULL << (JennyParser::Userdefinedstringliteral - 143))
      | (1ULL << (JennyParser::Userdefinedcharacterliteral - 143)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool JennyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return nestednamespecifierSempred(dynamic_cast<NestednamespecifierContext *>(context), predicateIndex);
    case 10: return capturelistSempred(dynamic_cast<CapturelistContext *>(context), predicateIndex);
    case 15: return postfixexpressionSempred(dynamic_cast<PostfixexpressionContext *>(context), predicateIndex);
    case 26: return noptrnewdeclaratorSempred(dynamic_cast<NoptrnewdeclaratorContext *>(context), predicateIndex);
    case 31: return pmexpressionSempred(dynamic_cast<PmexpressionContext *>(context), predicateIndex);
    case 32: return multiplicativeexpressionSempred(dynamic_cast<MultiplicativeexpressionContext *>(context), predicateIndex);
    case 33: return additiveexpressionSempred(dynamic_cast<AdditiveexpressionContext *>(context), predicateIndex);
    case 34: return shiftexpressionSempred(dynamic_cast<ShiftexpressionContext *>(context), predicateIndex);
    case 36: return relationalexpressionSempred(dynamic_cast<RelationalexpressionContext *>(context), predicateIndex);
    case 37: return equalityexpressionSempred(dynamic_cast<EqualityexpressionContext *>(context), predicateIndex);
    case 38: return andexpressionSempred(dynamic_cast<AndexpressionContext *>(context), predicateIndex);
    case 39: return exclusiveorexpressionSempred(dynamic_cast<ExclusiveorexpressionContext *>(context), predicateIndex);
    case 40: return inclusiveorexpressionSempred(dynamic_cast<InclusiveorexpressionContext *>(context), predicateIndex);
    case 41: return logicalandexpressionSempred(dynamic_cast<LogicalandexpressionContext *>(context), predicateIndex);
    case 42: return logicalorexpressionSempred(dynamic_cast<LogicalorexpressionContext *>(context), predicateIndex);
    case 46: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 52: return statementseqSempred(dynamic_cast<StatementseqContext *>(context), predicateIndex);
    case 61: return declarationseqSempred(dynamic_cast<DeclarationseqContext *>(context), predicateIndex);
    case 88: return enumeratorlistSempred(dynamic_cast<EnumeratorlistContext *>(context), predicateIndex);
    case 106: return attributespecifierseqSempred(dynamic_cast<AttributespecifierseqContext *>(context), predicateIndex);
    case 109: return attributelistSempred(dynamic_cast<AttributelistContext *>(context), predicateIndex);
    case 115: return balancedtokenseqSempred(dynamic_cast<BalancedtokenseqContext *>(context), predicateIndex);
    case 117: return initdeclaratorlistSempred(dynamic_cast<InitdeclaratorlistContext *>(context), predicateIndex);
    case 121: return noptrdeclaratorSempred(dynamic_cast<NoptrdeclaratorContext *>(context), predicateIndex);
    case 132: return noptrabstractdeclaratorSempred(dynamic_cast<NoptrabstractdeclaratorContext *>(context), predicateIndex);
    case 134: return noptrabstractpackdeclaratorSempred(dynamic_cast<NoptrabstractpackdeclaratorContext *>(context), predicateIndex);
    case 136: return parameterdeclarationlistSempred(dynamic_cast<ParameterdeclarationlistContext *>(context), predicateIndex);
    case 143: return initializerlistSempred(dynamic_cast<InitializerlistContext *>(context), predicateIndex);
    case 153: return memberdeclaratorlistSempred(dynamic_cast<MemberdeclaratorlistContext *>(context), predicateIndex);
    case 155: return virtspecifierseqSempred(dynamic_cast<VirtspecifierseqContext *>(context), predicateIndex);
    case 159: return basespecifierlistSempred(dynamic_cast<BasespecifierlistContext *>(context), predicateIndex);
    case 174: return templateparameterlistSempred(dynamic_cast<TemplateparameterlistContext *>(context), predicateIndex);
    case 180: return templateargumentlistSempred(dynamic_cast<TemplateargumentlistContext *>(context), predicateIndex);
    case 193: return typeidlistSempred(dynamic_cast<TypeidlistContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool JennyParser::nestednamespecifierSempred(NestednamespecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::capturelistSempred(CapturelistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::postfixexpressionSempred(PostfixexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 19);
    case 4: return precpred(_ctx, 18);
    case 5: return precpred(_ctx, 17);
    case 6: return precpred(_ctx, 12);
    case 7: return precpred(_ctx, 11);
    case 8: return precpred(_ctx, 10);
    case 9: return precpred(_ctx, 9);
    case 10: return precpred(_ctx, 8);
    case 11: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

bool JennyParser::noptrnewdeclaratorSempred(NoptrnewdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::pmexpressionSempred(PmexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::multiplicativeexpressionSempred(MultiplicativeexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::additiveexpressionSempred(AdditiveexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 2);
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::shiftexpressionSempred(ShiftexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::relationalexpressionSempred(RelationalexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 21: return precpred(_ctx, 4);
    case 22: return precpred(_ctx, 3);
    case 23: return precpred(_ctx, 2);
    case 24: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::equalityexpressionSempred(EqualityexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 25: return precpred(_ctx, 2);
    case 26: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::andexpressionSempred(AndexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 27: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::exclusiveorexpressionSempred(ExclusiveorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 28: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::inclusiveorexpressionSempred(InclusiveorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 29: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::logicalandexpressionSempred(LogicalandexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 30: return precpred(_ctx, 2);
    case 31: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::logicalorexpressionSempred(LogicalorexpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 2);
    case 33: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 34: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::statementseqSempred(StatementseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::declarationseqSempred(DeclarationseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 36: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::enumeratorlistSempred(EnumeratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 37: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::attributespecifierseqSempred(AttributespecifierseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 38: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::attributelistSempred(AttributelistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 39: return precpred(_ctx, 3);
    case 40: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::balancedtokenseqSempred(BalancedtokenseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 41: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::initdeclaratorlistSempred(InitdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 42: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::noptrdeclaratorSempred(NoptrdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 43: return precpred(_ctx, 3);
    case 44: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool JennyParser::noptrabstractdeclaratorSempred(NoptrabstractdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 45: return precpred(_ctx, 5);
    case 46: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool JennyParser::noptrabstractpackdeclaratorSempred(NoptrabstractpackdeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 47: return precpred(_ctx, 3);
    case 48: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool JennyParser::parameterdeclarationlistSempred(ParameterdeclarationlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 49: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::initializerlistSempred(InitializerlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 50: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::memberdeclaratorlistSempred(MemberdeclaratorlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 51: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::virtspecifierseqSempred(VirtspecifierseqContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 52: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::basespecifierlistSempred(BasespecifierlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 53: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::templateparameterlistSempred(TemplateparameterlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 54: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::templateargumentlistSempred(TemplateargumentlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 55: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool JennyParser::typeidlistSempred(TypeidlistContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 56: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> JennyParser::_decisionToDFA;
atn::PredictionContextCache JennyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JennyParser::_atn;
std::vector<uint16_t> JennyParser::_serializedATN;

std::vector<std::string> JennyParser::_ruleNames = {
  "translationunit", "primaryexpression", "idexpression", "unqualifiedid", 
  "qualifiedid", "nestednamespecifier", "lambdaexpression", "lambdaintroducer", 
  "lambdacapture", "capturedefault", "capturelist", "capture", "simplecapture", 
  "initcapture", "lambdadeclarator", "postfixexpression", "typeidofexpr", 
  "typeidofthetypeid", "expressionlist", "pseudodestructorname", "unaryexpression", 
  "unaryoperator", "newexpression", "newplacement", "newtypeid", "newdeclarator", 
  "noptrnewdeclarator", "newinitializer", "deleteexpression", "noexceptexpression", 
  "castexpression", "pmexpression", "multiplicativeexpression", "additiveexpression", 
  "shiftexpression", "shiftoperator", "relationalexpression", "equalityexpression", 
  "andexpression", "exclusiveorexpression", "inclusiveorexpression", "logicalandexpression", 
  "logicalorexpression", "conditionalexpression", "assignmentexpression", 
  "assignmentoperator", "expression", "constantexpression", "statement", 
  "labeledstatement", "expressionstatement", "compoundstatement", "statementseq", 
  "selectionstatement", "condition", "iterationstatement", "forinitstatement", 
  "forrangedeclaration", "forrangeinitializer", "jumpstatement", "declarationstatement", 
  "declarationseq", "declaration", "blockdeclaration", "aliasdeclaration", 
  "simpledeclaration", "static_assertdeclaration", "emptydeclaration", "attributedeclaration", 
  "declspecifier", "declspecifierseq", "storageclassspecifier", "functionspecifier", 
  "typedefname", "typespecifier", "trailingtypespecifier", "typespecifierseq", 
  "trailingtypespecifierseq", "simpletypespecifier", "thetypename", "decltypespecifier", 
  "elaboratedtypespecifier", "enumname", "enumspecifier", "enumhead", "opaqueenumdeclaration", 
  "enumkey", "enumbase", "enumeratorlist", "enumeratordefinition", "enumerator", 
  "namespacename", "originalnamespacename", "namespacedefinition", "namednamespacedefinition", 
  "originalnamespacedefinition", "extensionnamespacedefinition", "unnamednamespacedefinition", 
  "namespacebody", "namespacealias", "namespacealiasdefinition", "qualifiednamespacespecifier", 
  "usingdeclaration", "usingdirective", "asmdefinition", "linkagespecification", 
  "attributespecifierseq", "attributespecifier", "alignmentspecifier", "attributelist", 
  "attribute", "attributetoken", "attributescopedtoken", "attributenamespace", 
  "attributeargumentclause", "balancedtokenseq", "balancedtoken", "initdeclaratorlist", 
  "initdeclarator", "declarator", "ptrdeclarator", "noptrdeclarator", "parametersandqualifiers", 
  "trailingreturntype", "ptroperator", "cvqualifierseq", "cvqualifier", 
  "refqualifier", "declaratorid", "thetypeid", "abstractdeclarator", "ptrabstractdeclarator", 
  "noptrabstractdeclarator", "abstractpackdeclarator", "noptrabstractpackdeclarator", 
  "parameterdeclarationclause", "parameterdeclarationlist", "parameterdeclaration", 
  "functiondefinition", "functionbody", "initializer", "braceorequalinitializer", 
  "initializerclause", "initializerlist", "bracedinitlist", "classname", 
  "classspecifier", "classhead", "classheadname", "classvirtspecifier", 
  "classkey", "memberspecification", "memberdeclaration", "memberdeclaratorlist", 
  "memberdeclarator", "virtspecifierseq", "virtspecifier", "purespecifier", 
  "baseclause", "basespecifierlist", "basespecifier", "classordecltype", 
  "basetypespecifier", "accessspecifier", "conversionfunctionid", "conversiontypeid", 
  "conversiondeclarator", "ctorinitializer", "meminitializerlist", "meminitializer", 
  "meminitializerid", "operatorfunctionid", "literaloperatorid", "templatedeclaration", 
  "templateparameterlist", "templateparameter", "typeparameter", "simpletemplateid", 
  "templateid", "templatename", "templateargumentlist", "templateargument", 
  "typenamespecifier", "explicitinstantiation", "explicitspecialization", 
  "tryblock", "functiontryblock", "handlerseq", "handler", "exceptiondeclaration", 
  "throwexpression", "exceptionspecification", "dynamicexceptionspecification", 
  "typeidlist", "noexceptspecification", "theoperator", "literal", "booleanliteral", 
  "pointerliteral", "userdefinedliteral"
};

std::vector<std::string> JennyParser::_literalNames = {
  "", "'!'", "'not'", "'&&'", "'and'", "'||'", "'or'", "", "", "'alignas'", 
  "'alignof'", "'asm'", "'auto'", "'bool'", "'break'", "'case'", "'catch'", 
  "'char'", "'char16_t'", "'char32_t'", "'class'", "'const'", "'constexpr'", 
  "'const_cast'", "'continue'", "'decltype'", "'default'", "'delete'", "'do'", 
  "'double'", "'dynamic_cast'", "'else'", "'enum'", "'explicit'", "'export'", 
  "'extern'", "'false'", "'final'", "'float'", "'for'", "'friend'", "'goto'", 
  "'if'", "'inline'", "'int'", "'long'", "'mutable'", "'namespace'", "'new'", 
  "'noexcept'", "'nullptr'", "'operator'", "'override'", "'private'", "'protected'", 
  "'public'", "'register'", "'reinterpret_cast'", "'return'", "'short'", 
  "'signed'", "'sizeof'", "'static'", "'static_assert'", "'static_cast'", 
  "'struct'", "'switch'", "'template'", "'this'", "'thread_local'", "'throw'", 
  "'true'", "'try'", "'typedef'", "'typeid'", "'typename'", "'union'", "'unsigned'", 
  "'using'", "'virtual'", "'void'", "'volatile'", "'wchar_t'", "'while'", 
  "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", 
  "'%'", "'^'", "'&'", "'|'", "'~'", "", "'='", "'<'", "'>'", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<'", "'>>'", "'<<='", 
  "'>>='", "'=='", "'!='", "'<='", "'>='", "", "", "'++'", "'--'", "','", 
  "'->*'", "'->'", "'?'", "':'", "'::'", "';'", "'.'", "'.*'", "'...'"
};

std::vector<std::string> JennyParser::_symbolicNames = {
  "", "", "", "", "", "", "", "MultiLineMacro", "Directive", "Alignas", 
  "Alignof", "Asm", "Auto", "Bool", "Break", "Case", "Catch", "Char", "Char16", 
  "Char32", "Class", "Const", "Constexpr", "Const_cast", "Continue", "Decltype", 
  "Default", "Delete", "Do", "Double", "Dynamic_cast", "Else", "Enum", "Explicit", 
  "Export", "Extern", "False", "Final", "Float", "For", "Friend", "Goto", 
  "If", "Inline", "Int", "Long", "Mutable", "Namespace", "New", "Noexcept", 
  "Nullptr", "Operator", "Override", "Private", "Protected", "Public", "Register", 
  "Reinterpret_cast", "Return", "Short", "Signed", "Sizeof", "Static", "Static_assert", 
  "Static_cast", "Struct", "Switch", "Template", "This", "Thread_local", 
  "Throw", "True", "Try", "Typedef", "Typeid_", "Typename_", "Union", "Unsigned", 
  "Using", "Virtual", "Void", "Volatile", "Wchar", "While", "LeftParen", 
  "RightParen", "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", 
  "Plus", "Minus", "Star", "Div", "Mod", "Caret", "And", "Or", "Tilde", 
  "Not", "Assign", "Less", "Greater", "PlusAssign", "MinusAssign", "StarAssign", 
  "DivAssign", "ModAssign", "XorAssign", "AndAssign", "OrAssign", "LeftShift", 
  "RightShift", "LeftShiftAssign", "RightShiftAssign", "Equal", "NotEqual", 
  "LessEqual", "GreaterEqual", "AndAnd", "OrOr", "PlusPlus", "MinusMinus", 
  "Comma", "ArrowStar", "Arrow", "Question", "Colon", "Doublecolon", "Semi", 
  "Dot", "DotStar", "Ellipsis", "Identifier", "Integerliteral", "Decimalliteral", 
  "Octalliteral", "Hexadecimalliteral", "Binaryliteral", "Integersuffix", 
  "Characterliteral", "Floatingliteral", "Stringliteral", "Userdefinedintegerliteral", 
  "Userdefinedfloatingliteral", "Userdefinedstringliteral", "Userdefinedcharacterliteral", 
  "Whitespace", "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary JennyParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JennyParser::_tokenNames;

JennyParser::Initializer::Initializer() {
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

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x98, 0x9a7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x3, 0x2, 0x5, 0x2, 0x194, 0xa, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1a0, 0xa, 0x3, 
       0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1a4, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x5, 0x5, 0x1af, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x1b3, 
       0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x5, 0x7, 0x1c2, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1c9, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x7, 0x7, 0x1ce, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x1d1, 0xb, 
       0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1d5, 0xa, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x1db, 0xa, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x5, 0xa, 0x1e5, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x5, 0xc, 0x1ec, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x5, 0xc, 0x1f2, 0xa, 0xc, 0x7, 0xc, 0x1f4, 0xa, 0xc, 0xc, 
       0xc, 0xe, 0xc, 0x1f7, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1fb, 
       0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x201, 
       0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
       0xf, 0x208, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x5, 0x10, 0x20e, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x211, 0xa, 0x10, 
       0x3, 0x10, 0x5, 0x10, 0x214, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x217, 
       0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x5, 0x11, 0x21e, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x5, 0x11, 0x225, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x5, 0x11, 0x259, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x268, 0xa, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x26e, 0xa, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x274, 
       0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x7, 0x11, 0x281, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x284, 0xb, 0x11, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x15, 0x5, 0x15, 0x28d, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x29c, 
       0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
       0x2a2, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 
       0x16, 0x2c0, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x5, 0x18, 
       0x2c5, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2c9, 0xa, 0x18, 
       0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2cd, 0xa, 0x18, 0x3, 0x18, 0x5, 
       0x18, 0x2d0, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2d4, 0xa, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2da, 
       0xa, 0x18, 0x5, 0x18, 0x2dc, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x2e4, 0xa, 0x1a, 
       0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x2e8, 0xa, 0x1b, 0x3, 0x1b, 0x5, 
       0x1b, 0x2eb, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x5, 0x1c, 0x2f2, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x2f9, 0xa, 0x1c, 0x7, 0x1c, 
       0x2fb, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x2fe, 0xb, 0x1c, 0x3, 0x1d, 
       0x3, 0x1d, 0x5, 0x1d, 0x302, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 
       0x1d, 0x306, 0xa, 0x1d, 0x3, 0x1e, 0x5, 0x1e, 0x309, 0xa, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x30e, 0xa, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x314, 0xa, 0x1e, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x321, 
       0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x32c, 0xa, 
       0x21, 0xc, 0x21, 0xe, 0x21, 0x32f, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x33d, 0xa, 
       0x22, 0xc, 0x22, 0xe, 0x22, 0x340, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x7, 0x23, 0x34b, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x34e, 
       0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x357, 0xa, 0x24, 0xc, 0x24, 0xe, 
       0x24, 0x35a, 0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x7, 0x26, 0x36d, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x370, 
       0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x37b, 0xa, 
       0x27, 0xc, 0x27, 0xe, 0x27, 0x37e, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x386, 0xa, 
       0x28, 0xc, 0x28, 0xe, 0x28, 0x389, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x391, 0xa, 
       0x29, 0xc, 0x29, 0xe, 0x29, 0x394, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 0x39c, 0xa, 
       0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x39f, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x7, 0x2b, 0x3aa, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x3ad, 
       0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x3b8, 0xa, 
       0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x3bb, 0xb, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 
       0x3c4, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x3cc, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x7, 0x30, 0x3d6, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x3d9, 0xb, 0x30, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3df, 0xa, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3e3, 0xa, 0x32, 0x3, 0x32, 
       0x3, 0x32, 0x5, 0x32, 0x3e7, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 
       0x32, 0x3eb, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3ef, 0xa, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3f4, 0xa, 0x32, 
       0x3, 0x32, 0x5, 0x32, 0x3f7, 0xa, 0x32, 0x3, 0x33, 0x5, 0x33, 0x3fa, 
       0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 
       0x400, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x5, 0x33, 0x408, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x5, 0x33, 0x40d, 0xa, 0x33, 0x3, 0x34, 0x5, 0x34, 0x410, 
       0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 
       0x416, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x41f, 0xa, 0x36, 0xc, 0x36, 
       0xe, 0x36, 0x422, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x438, 
       0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x43c, 0xa, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 
       0x38, 0x444, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x5, 0x38, 0x44a, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x45e, 0xa, 0x39, 0x3, 0x39, 
       0x3, 0x39, 0x5, 0x39, 0x462, 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x46f, 0xa, 0x39, 0x3, 0x3a, 
       0x3, 0x3a, 0x5, 0x3a, 0x473, 0xa, 0x3a, 0x3, 0x3b, 0x5, 0x3b, 0x476, 
       0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
       0x5, 0x3c, 0x47d, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x485, 0xa, 0x3d, 0x3, 0x3d, 
       0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
       0x3, 0x3d, 0x5, 0x3d, 0x48f, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x498, 
       0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x49b, 0xb, 0x3f, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x5, 0x40, 0x4a6, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x5, 0x41, 0x4b0, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 
       0x42, 0x4b5, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
       0x3, 0x43, 0x5, 0x43, 0x4bc, 0xa, 0x43, 0x3, 0x43, 0x5, 0x43, 0x4bf, 
       0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x4c4, 0xa, 
       0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x4c9, 0xa, 0x43, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
       0x3, 0x47, 0x5, 0x47, 0x4de, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x5, 
       0x48, 0x4e2, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 
       0x4e7, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x4f2, 
       0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 
       0x4f8, 0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x4fc, 0xa, 0x4e, 
       0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x501, 0xa, 0x4e, 0x3, 
       0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x505, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x5, 0x4f, 0x50a, 0xa, 0x4f, 0x3, 0x50, 0x5, 0x50, 0x50d, 
       0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x523, 0xa, 0x50, 0x3, 
       0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x529, 0xa, 0x51, 
       0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
       0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x534, 0xa, 0x52, 0x3, 
       0x53, 0x3, 0x53, 0x5, 0x53, 0x538, 0xa, 0x53, 0x3, 0x53, 0x5, 0x53, 
       0x53b, 0xa, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
       0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x545, 0xa, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x54b, 0xa, 
       0x53, 0x3, 0x53, 0x5, 0x53, 0x54e, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 
       0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x555, 0xa, 0x55, 0x3, 
       0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
       0x55, 0x3, 0x55, 0x5, 0x55, 0x55f, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 
       0x5, 0x56, 0x563, 0xa, 0x56, 0x3, 0x56, 0x5, 0x56, 0x566, 0xa, 0x56, 
       0x3, 0x56, 0x5, 0x56, 0x569, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 
       0x56, 0x56d, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 
       0x572, 0xa, 0x56, 0x5, 0x56, 0x574, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 
       0x5, 0x57, 0x578, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x57c, 
       0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
       0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x585, 0xa, 0x58, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x7, 0x5a, 0x590, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 
       0x593, 0xb, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
       0x5b, 0x5, 0x5b, 0x59a, 0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 
       0x3, 0x5d, 0x5, 0x5d, 0x5a0, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
       0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x5a6, 0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 
       0x5, 0x60, 0x5aa, 0xa, 0x60, 0x3, 0x61, 0x5, 0x61, 0x5ad, 0xa, 0x61, 
       0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 
       0x3, 0x62, 0x5, 0x62, 0x5b6, 0xa, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
       0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x5, 0x63, 0x5bf, 
       0xa, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
       0x3, 0x64, 0x5, 0x64, 0x5c7, 0xa, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 
       0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
       0x67, 0x5, 0x67, 0x5d2, 0xa, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 
       0x3, 0x68, 0x5, 0x68, 0x5d8, 0xa, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
       0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
       0x68, 0x5, 0x68, 0x5e3, 0xa, 0x68, 0x3, 0x69, 0x5, 0x69, 0x5e6, 0xa, 
       0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x5eb, 0xa, 0x69, 
       0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
       0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6b, 0x5, 0x6b, 0x5fa, 0xa, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
       0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x600, 0xa, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 
       0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x7, 0x6c, 0x607, 0xa, 0x6c, 0xc, 
       0x6c, 0xe, 0x6c, 0x60a, 0xb, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 
       0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x613, 0xa, 
       0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x619, 
       0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
       0x3, 0x6e, 0x5, 0x6e, 0x621, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 
       0x6e, 0x625, 0xa, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x629, 0xa, 
       0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x62e, 0xa, 0x6f, 
       0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x633, 0xa, 0x6f, 0x3, 
       0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x7, 0x6f, 0x63a, 
       0xa, 0x6f, 0xc, 0x6f, 0xe, 0x6f, 0x63d, 0xb, 0x6f, 0x3, 0x70, 0x3, 
       0x70, 0x5, 0x70, 0x641, 0xa, 0x70, 0x3, 0x71, 0x3, 0x71, 0x5, 0x71, 
       0x645, 0xa, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
       0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
       0x75, 0x3, 0x75, 0x5, 0x75, 0x653, 0xa, 0x75, 0x3, 0x75, 0x3, 0x75, 
       0x7, 0x75, 0x657, 0xa, 0x75, 0xc, 0x75, 0xe, 0x75, 0x65a, 0xb, 0x75, 
       0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 
       0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 
       0x3, 0x76, 0x6, 0x76, 0x669, 0xa, 0x76, 0xd, 0x76, 0xe, 0x76, 0x66a, 
       0x5, 0x76, 0x66d, 0xa, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 
       0x77, 0x3, 0x77, 0x3, 0x77, 0x7, 0x77, 0x675, 0xa, 0x77, 0xc, 0x77, 
       0xe, 0x77, 0x678, 0xb, 0x77, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x67c, 
       0xa, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 
       0x5, 0x79, 0x683, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 
       0x7a, 0x5, 0x7a, 0x689, 0xa, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
       0x5, 0x7b, 0x68e, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 
       0x7b, 0x5, 0x7b, 0x694, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
       0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x69b, 0xa, 0x7b, 0x3, 0x7b, 0x3, 
       0x7b, 0x5, 0x7b, 0x69f, 0xa, 0x7b, 0x7, 0x7b, 0x6a1, 0xa, 0x7b, 0xc, 
       0x7b, 0xe, 0x7b, 0x6a4, 0xb, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
       0x3, 0x7c, 0x5, 0x7c, 0x6aa, 0xa, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x6ad, 
       0xa, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x6b0, 0xa, 0x7c, 0x3, 0x7c, 0x5, 
       0x7c, 0x6b3, 0xa, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 
       0x6b8, 0xa, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x6bc, 0xa, 0x7e, 
       0x3, 0x7e, 0x5, 0x7e, 0x6bf, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 
       0x7e, 0x6c3, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x6c7, 0xa, 
       0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x5, 0x7e, 0x6cc, 0xa, 0x7e, 
       0x3, 0x7e, 0x5, 0x7e, 0x6cf, 0xa, 0x7e, 0x5, 0x7e, 0x6d1, 0xa, 0x7e, 
       0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x6d5, 0xa, 0x7f, 0x3, 0x80, 0x3, 
       0x80, 0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x5, 0x82, 0x6dc, 0xa, 0x82, 
       0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x6e2, 0xa, 
       0x83, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x6e6, 0xa, 0x84, 0x3, 0x84, 
       0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x6ec, 0xa, 0x84, 0x3, 
       0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x6f1, 0xa, 0x85, 0x5, 0x85, 
       0x6f3, 0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 
       0x86, 0x6f9, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x6fd, 0xa, 
       0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x703, 
       0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 
       0x5, 0x86, 0x70a, 0xa, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x70e, 
       0xa, 0x86, 0x7, 0x86, 0x710, 0xa, 0x86, 0xc, 0x86, 0xe, 0x86, 0x713, 
       0xb, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 
       0x719, 0xa, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 
       0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x723, 0xa, 0x88, 
       0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x727, 0xa, 0x88, 0x7, 0x88, 0x729, 
       0xa, 0x88, 0xc, 0x88, 0xe, 0x88, 0x72c, 0xb, 0x88, 0x3, 0x89, 0x5, 
       0x89, 0x72f, 0xa, 0x89, 0x3, 0x89, 0x5, 0x89, 0x732, 0xa, 0x89, 0x3, 
       0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 0x738, 0xa, 0x89, 
       0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 
       0x7, 0x8a, 0x740, 0xa, 0x8a, 0xc, 0x8a, 0xe, 0x8a, 0x743, 0xb, 0x8a, 
       0x3, 0x8b, 0x5, 0x8b, 0x746, 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 
       0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x74c, 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 
       0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x754, 0xa, 
       0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x758, 0xa, 0x8b, 0x3, 0x8b, 
       0x5, 0x8b, 0x75b, 0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x75f, 
       0xa, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x764, 0xa, 
       0x8b, 0x3, 0x8c, 0x5, 0x8c, 0x767, 0xa, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 
       0x76a, 0xa, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x76e, 0xa, 0x8c, 
       0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x5, 0x8d, 0x773, 0xa, 0x8d, 0x3, 
       0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
       0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x77d, 0xa, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 
       0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x5, 0x8e, 0x784, 0xa, 0x8e, 0x3, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x789, 0xa, 0x8f, 0x3, 0x90, 
       0x3, 0x90, 0x5, 0x90, 0x78d, 0xa, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 
       0x91, 0x5, 0x91, 0x792, 0xa, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
       0x3, 0x91, 0x5, 0x91, 0x798, 0xa, 0x91, 0x7, 0x91, 0x79a, 0xa, 0x91, 
       0xc, 0x91, 0xe, 0x91, 0x79d, 0xb, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 
       0x92, 0x5, 0x92, 0x7a2, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 
       0x3, 0x92, 0x5, 0x92, 0x7a8, 0xa, 0x92, 0x3, 0x93, 0x3, 0x93, 0x5, 
       0x93, 0x7ac, 0xa, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 
       0x7b1, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x95, 0x3, 0x95, 0x5, 
       0x95, 0x7b7, 0xa, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7bb, 0xa, 
       0x95, 0x3, 0x95, 0x5, 0x95, 0x7be, 0xa, 0x95, 0x3, 0x95, 0x3, 0x95, 
       0x5, 0x95, 0x7c2, 0xa, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7c5, 0xa, 0x95, 
       0x5, 0x95, 0x7c7, 0xa, 0x95, 0x3, 0x96, 0x5, 0x96, 0x7ca, 0xa, 0x96, 
       0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x98, 0x3, 0x98, 
       0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x7d4, 0xa, 0x99, 0x3, 0x99, 0x3, 
       0x99, 0x3, 0x99, 0x5, 0x99, 0x7d9, 0xa, 0x99, 0x5, 0x99, 0x7db, 0xa, 
       0x99, 0x3, 0x9a, 0x5, 0x9a, 0x7de, 0xa, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 
       0x7e1, 0xa, 0x9a, 0x3, 0x9a, 0x5, 0x9a, 0x7e4, 0xa, 0x9a, 0x3, 0x9a, 
       0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 
       0x5, 0x9a, 0x7ed, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 
       0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x7, 0x9b, 0x7f5, 0xa, 0x9b, 0xc, 0x9b, 
       0xe, 0x9b, 0x7f8, 0xb, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7fc, 
       0xa, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7ff, 0xa, 0x9c, 0x3, 0x9c, 0x3, 
       0x9c, 0x5, 0x9c, 0x803, 0xa, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x806, 0xa, 
       0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x809, 0xa, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 
       0x5, 0x9c, 0x80d, 0xa, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 
       0x9d, 0x3, 0x9d, 0x7, 0x9d, 0x814, 0xa, 0x9d, 0xc, 0x9d, 0xe, 0x9d, 
       0x817, 0xb, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x3, 
       0x9f, 0x3, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa1, 0x3, 
       0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x825, 0xa, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x82b, 0xa, 0xa1, 0x7, 0xa1, 0x82d, 
       0xa, 0xa1, 0xc, 0xa1, 0xe, 0xa1, 0x830, 0xb, 0xa1, 0x3, 0xa2, 0x5, 
       0xa2, 0x833, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x837, 0xa, 
       0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x83b, 0xa, 0xa2, 0x3, 0xa2, 
       0x3, 0xa2, 0x5, 0xa2, 0x83f, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 
       0xa2, 0x843, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x847, 0xa, 
       0xa2, 0x3, 0xa3, 0x5, 0xa3, 0x84a, 0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 
       0x5, 0xa3, 0x84e, 0xa, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa5, 0x3, 
       0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x5, 
       0xa7, 0x859, 0xa, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x85d, 0xa, 
       0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x5, 
       0xaa, 0x864, 0xa, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x868, 0xa, 
       0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x86d, 0xa, 0xaa, 
       0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x872, 0xa, 0xab, 0x3, 
       0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x879, 
       0xa, 0xab, 0x3, 0xac, 0x3, 0xac, 0x5, 0xac, 0x87d, 0xa, 0xac, 0x3, 
       0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 
       0xae, 0x3, 0xae, 0x5, 0xae, 0x887, 0xa, 0xae, 0x3, 0xaf, 0x3, 0xaf, 
       0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xb0, 0x3, 0xb0, 
       0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x7, 0xb0, 0x895, 0xa, 
       0xb0, 0xc, 0xb0, 0xe, 0xb0, 0x898, 0xb, 0xb0, 0x3, 0xb1, 0x3, 0xb1, 
       0x5, 0xb1, 0x89c, 0xa, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8a0, 
       0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8a3, 0xa, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x5, 0xb2, 0x8a7, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
       0x3, 0xb2, 0x5, 0xb2, 0x8ad, 0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8b0, 
       0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8b4, 0xa, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8be, 0xa, 0xb2, 0x3, 0xb2, 0x5, 0xb2, 
       0x8c1, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x5, 0xb2, 0x8c9, 0xa, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
       0x3, 0xb2, 0x5, 0xb2, 0x8ce, 0xa, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 
       0xb3, 0x5, 0xb3, 0x8d3, 0xa, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb4, 
       0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8db, 0xa, 0xb4, 0x3, 
       0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8e2, 
       0xa, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x8e6, 0xa, 0xb4, 0x3, 
       0xb5, 0x3, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 0x8ed, 
       0xa, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 
       0x8f3, 0xa, 0xb6, 0x7, 0xb6, 0x8f5, 0xa, 0xb6, 0xc, 0xb6, 0xe, 0xb6, 
       0x8f8, 0xb, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x8fd, 
       0xa, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 
       0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x906, 0xa, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x5, 0xb8, 0x90a, 0xa, 0xb8, 0x3, 0xb9, 0x5, 0xb9, 0x90d, 0xa, 
       0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 
       0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x91d, 0xa, 0xbc, 0x3, 0xbc, 
       0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x924, 0xa, 
       0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
       0xbe, 0x3, 0xbf, 0x5, 0xbf, 0x92d, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x933, 0xa, 0xbf, 0x3, 0xbf, 0x3, 
       0xbf, 0x5, 0xbf, 0x937, 0xa, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x93a, 0xa, 
       0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x93e, 0xa, 0xc0, 0x3, 0xc1, 
       0x3, 0xc1, 0x5, 0xc1, 0x942, 0xa, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 
       0xc2, 0x5, 0xc2, 0x947, 0xa, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc3, 
       0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x94e, 0xa, 0xc3, 0x3, 0xc3, 0x3, 
       0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x954, 0xa, 0xc3, 0x7, 0xc3, 
       0x956, 0xa, 0xc3, 0xc, 0xc3, 0xe, 0xc3, 0x959, 0xb, 0xc3, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 
       0x961, 0xa, 0xc4, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x996, 
       0xa, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x99f, 0xa, 0xc6, 0x3, 0xc7, 0x3, 
       0xc7, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x2, 
       0x24, 0xc, 0x16, 0x20, 0x36, 0x40, 0x42, 0x44, 0x46, 0x4a, 0x4c, 
       0x4e, 0x50, 0x52, 0x54, 0x56, 0x5e, 0x6a, 0x7c, 0xb2, 0xd6, 0xdc, 
       0xe8, 0xec, 0xf4, 0x10a, 0x10e, 0x112, 0x120, 0x134, 0x138, 0x140, 
       0x15e, 0x16a, 0x184, 0xca, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
       0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
       0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
       0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
       0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 
       0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 
       0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 
       0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 
       0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 
       0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 
       0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 
       0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 
       0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 
       0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 
       0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 
       0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 
       0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 
       0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 
       0x17c, 0x17e, 0x180, 0x182, 0x184, 0x186, 0x188, 0x18a, 0x18c, 0x18e, 
       0x190, 0x2, 0x10, 0x4, 0x2, 0x62, 0x62, 0x66, 0x66, 0x5, 0x2, 0x3, 
       0x4, 0x5c, 0x5e, 0x62, 0x64, 0x3, 0x2, 0x71, 0x72, 0x5, 0x2, 0x66, 
       0x66, 0x69, 0x70, 0x73, 0x74, 0x7, 0x2, 0x25, 0x25, 0x30, 0x30, 0x3a, 
       0x3a, 0x40, 0x40, 0x47, 0x47, 0x5, 0x2, 0x23, 0x23, 0x2d, 0x2d, 0x51, 
       0x51, 0x3, 0x2, 0x56, 0x5b, 0x4, 0x2, 0x17, 0x17, 0x53, 0x53, 0x4, 
       0x2, 0x5, 0x5, 0x62, 0x62, 0x5, 0x2, 0x16, 0x16, 0x43, 0x43, 0x4e, 
       0x4e, 0x4, 0x2, 0x27, 0x27, 0x36, 0x36, 0x3, 0x2, 0x37, 0x39, 0x4, 
       0x2, 0x26, 0x26, 0x49, 0x49, 0x3, 0x2, 0x91, 0x94, 0x2, 0xac3, 0x2, 
       0x193, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1a3, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1b0, 0x3, 
       0x2, 0x2, 0x2, 0xc, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1d2, 0x3, 0x2, 
       0x2, 0x2, 0x10, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1e4, 0x3, 0x2, 
       0x2, 0x2, 0x14, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1e8, 0x3, 0x2, 
       0x2, 0x2, 0x18, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x200, 0x3, 0x2, 
       0x2, 0x2, 0x1c, 0x207, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x209, 0x3, 0x2, 
       0x2, 0x2, 0x20, 0x258, 0x3, 0x2, 0x2, 0x2, 0x22, 0x285, 0x3, 0x2, 
       0x2, 0x2, 0x24, 0x287, 0x3, 0x2, 0x2, 0x2, 0x26, 0x289, 0x3, 0x2, 
       0x2, 0x2, 0x28, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2bf, 0x3, 0x2, 
       0x2, 0x2, 0x2c, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2db, 0x3, 0x2, 
       0x2, 0x2, 0x30, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x32, 0x2e1, 0x3, 0x2, 
       0x2, 0x2, 0x34, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2ec, 0x3, 0x2, 
       0x2, 0x2, 0x38, 0x305, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x313, 0x3, 0x2, 
       0x2, 0x2, 0x3c, 0x315, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x320, 0x3, 0x2, 
       0x2, 0x2, 0x40, 0x322, 0x3, 0x2, 0x2, 0x2, 0x42, 0x330, 0x3, 0x2, 
       0x2, 0x2, 0x44, 0x341, 0x3, 0x2, 0x2, 0x2, 0x46, 0x34f, 0x3, 0x2, 
       0x2, 0x2, 0x48, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x35d, 0x3, 0x2, 
       0x2, 0x2, 0x4c, 0x371, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x37f, 0x3, 0x2, 
       0x2, 0x2, 0x50, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x52, 0x395, 0x3, 0x2, 
       0x2, 0x2, 0x54, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x56, 0x3ae, 0x3, 0x2, 
       0x2, 0x2, 0x58, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x3cb, 0x3, 0x2, 
       0x2, 0x2, 0x5c, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x3cf, 0x3, 0x2, 
       0x2, 0x2, 0x60, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x62, 0x3f6, 0x3, 0x2, 
       0x2, 0x2, 0x64, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x66, 0x40f, 0x3, 0x2, 
       0x2, 0x2, 0x68, 0x413, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x419, 0x3, 0x2, 
       0x2, 0x2, 0x6c, 0x437, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x449, 0x3, 0x2, 
       0x2, 0x2, 0x70, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x472, 0x3, 0x2, 
       0x2, 0x2, 0x74, 0x475, 0x3, 0x2, 0x2, 0x2, 0x76, 0x47c, 0x3, 0x2, 
       0x2, 0x2, 0x78, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x490, 0x3, 0x2, 
       0x2, 0x2, 0x7c, 0x492, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x4a5, 0x3, 0x2, 
       0x2, 0x2, 0x80, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x82, 0x4b1, 0x3, 0x2, 
       0x2, 0x2, 0x84, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x86, 0x4ca, 0x3, 0x2, 
       0x2, 0x2, 0x88, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x4d4, 0x3, 0x2, 
       0x2, 0x2, 0x8c, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x4e6, 0x3, 0x2, 
       0x2, 0x2, 0x90, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x92, 0x4ea, 0x3, 0x2, 
       0x2, 0x2, 0x94, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x96, 0x4f1, 0x3, 0x2, 
       0x2, 0x2, 0x98, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x500, 0x3, 0x2, 
       0x2, 0x2, 0x9c, 0x509, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x522, 0x3, 0x2, 
       0x2, 0x2, 0xa0, 0x528, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x533, 0x3, 0x2, 
       0x2, 0x2, 0xa4, 0x54d, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x54f, 0x3, 0x2, 
       0x2, 0x2, 0xa8, 0x55e, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x573, 0x3, 0x2, 
       0x2, 0x2, 0xac, 0x575, 0x3, 0x2, 0x2, 0x2, 0xae, 0x584, 0x3, 0x2, 
       0x2, 0x2, 0xb0, 0x586, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x589, 0x3, 0x2, 
       0x2, 0x2, 0xb4, 0x599, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x59b, 0x3, 0x2, 
       0x2, 0x2, 0xb8, 0x59f, 0x3, 0x2, 0x2, 0x2, 0xba, 0x5a1, 0x3, 0x2, 
       0x2, 0x2, 0xbc, 0x5a5, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x5a9, 0x3, 0x2, 
       0x2, 0x2, 0xc0, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x5b5, 0x3, 0x2, 
       0x2, 0x2, 0xc4, 0x5be, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x5c6, 0x3, 0x2, 
       0x2, 0x2, 0xc8, 0x5c8, 0x3, 0x2, 0x2, 0x2, 0xca, 0x5ca, 0x3, 0x2, 
       0x2, 0x2, 0xcc, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0xce, 0x5e2, 0x3, 0x2, 
       0x2, 0x2, 0xd0, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x5ef, 0x3, 0x2, 
       0x2, 0x2, 0xd4, 0x5ff, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x601, 0x3, 0x2, 
       0x2, 0x2, 0xd8, 0x612, 0x3, 0x2, 0x2, 0x2, 0xda, 0x624, 0x3, 0x2, 
       0x2, 0x2, 0xdc, 0x62d, 0x3, 0x2, 0x2, 0x2, 0xde, 0x63e, 0x3, 0x2, 
       0x2, 0x2, 0xe0, 0x644, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x646, 0x3, 0x2, 
       0x2, 0x2, 0xe4, 0x64a, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x64c, 0x3, 0x2, 
       0x2, 0x2, 0xe8, 0x650, 0x3, 0x2, 0x2, 0x2, 0xea, 0x66c, 0x3, 0x2, 
       0x2, 0x2, 0xec, 0x66e, 0x3, 0x2, 0x2, 0x2, 0xee, 0x679, 0x3, 0x2, 
       0x2, 0x2, 0xf0, 0x682, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x688, 0x3, 0x2, 
       0x2, 0x2, 0xf4, 0x693, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x6a5, 0x3, 0x2, 
       0x2, 0x2, 0xf8, 0x6b4, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x6d0, 0x3, 0x2, 
       0x2, 0x2, 0xfc, 0x6d2, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x6d6, 0x3, 0x2, 
       0x2, 0x2, 0x100, 0x6d8, 0x3, 0x2, 0x2, 0x2, 0x102, 0x6db, 0x3, 0x2, 
       0x2, 0x2, 0x104, 0x6df, 0x3, 0x2, 0x2, 0x2, 0x106, 0x6eb, 0x3, 0x2, 
       0x2, 0x2, 0x108, 0x6f2, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x702, 0x3, 0x2, 
       0x2, 0x2, 0x10c, 0x718, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x71a, 0x3, 0x2, 
       0x2, 0x2, 0x110, 0x737, 0x3, 0x2, 0x2, 0x2, 0x112, 0x739, 0x3, 0x2, 
       0x2, 0x2, 0x114, 0x763, 0x3, 0x2, 0x2, 0x2, 0x116, 0x766, 0x3, 0x2, 
       0x2, 0x2, 0x118, 0x77c, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x783, 0x3, 0x2, 
       0x2, 0x2, 0x11c, 0x788, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x78c, 0x3, 0x2, 
       0x2, 0x2, 0x120, 0x78e, 0x3, 0x2, 0x2, 0x2, 0x122, 0x7a7, 0x3, 0x2, 
       0x2, 0x2, 0x124, 0x7ab, 0x3, 0x2, 0x2, 0x2, 0x126, 0x7ad, 0x3, 0x2, 
       0x2, 0x2, 0x128, 0x7c6, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x7c9, 0x3, 0x2, 
       0x2, 0x2, 0x12c, 0x7cd, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x7cf, 0x3, 0x2, 
       0x2, 0x2, 0x130, 0x7da, 0x3, 0x2, 0x2, 0x2, 0x132, 0x7ec, 0x3, 0x2, 
       0x2, 0x2, 0x134, 0x7ee, 0x3, 0x2, 0x2, 0x2, 0x136, 0x80c, 0x3, 0x2, 
       0x2, 0x2, 0x138, 0x80e, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x818, 0x3, 0x2, 
       0x2, 0x2, 0x13c, 0x81a, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x81e, 0x3, 0x2, 
       0x2, 0x2, 0x140, 0x821, 0x3, 0x2, 0x2, 0x2, 0x142, 0x846, 0x3, 0x2, 
       0x2, 0x2, 0x144, 0x84d, 0x3, 0x2, 0x2, 0x2, 0x146, 0x84f, 0x3, 0x2, 
       0x2, 0x2, 0x148, 0x851, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x853, 0x3, 0x2, 
       0x2, 0x2, 0x14c, 0x856, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x85a, 0x3, 0x2, 
       0x2, 0x2, 0x150, 0x85e, 0x3, 0x2, 0x2, 0x2, 0x152, 0x86c, 0x3, 0x2, 
       0x2, 0x2, 0x154, 0x878, 0x3, 0x2, 0x2, 0x2, 0x156, 0x87c, 0x3, 0x2, 
       0x2, 0x2, 0x158, 0x87e, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x886, 0x3, 0x2, 
       0x2, 0x2, 0x15c, 0x888, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x88e, 0x3, 0x2, 
       0x2, 0x2, 0x160, 0x89b, 0x3, 0x2, 0x2, 0x2, 0x162, 0x8cd, 0x3, 0x2, 
       0x2, 0x2, 0x164, 0x8cf, 0x3, 0x2, 0x2, 0x2, 0x166, 0x8e5, 0x3, 0x2, 
       0x2, 0x2, 0x168, 0x8e7, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x8e9, 0x3, 0x2, 
       0x2, 0x2, 0x16c, 0x8fc, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x909, 0x3, 0x2, 
       0x2, 0x2, 0x170, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x172, 0x911, 0x3, 0x2, 
       0x2, 0x2, 0x174, 0x916, 0x3, 0x2, 0x2, 0x2, 0x176, 0x91a, 0x3, 0x2, 
       0x2, 0x2, 0x178, 0x921, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x925, 0x3, 0x2, 
       0x2, 0x2, 0x17c, 0x939, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x93b, 0x3, 0x2, 
       0x2, 0x2, 0x180, 0x941, 0x3, 0x2, 0x2, 0x2, 0x182, 0x943, 0x3, 0x2, 
       0x2, 0x2, 0x184, 0x94a, 0x3, 0x2, 0x2, 0x2, 0x186, 0x960, 0x3, 0x2, 
       0x2, 0x2, 0x188, 0x995, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x99e, 0x3, 0x2, 
       0x2, 0x2, 0x18c, 0x9a0, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x9a2, 0x3, 0x2, 
       0x2, 0x2, 0x190, 0x9a4, 0x3, 0x2, 0x2, 0x2, 0x192, 0x194, 0x5, 0x7c, 
       0x3f, 0x2, 0x193, 0x192, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 
       0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 0x2, 
       0x2, 0x3, 0x196, 0x3, 0x3, 0x2, 0x2, 0x2, 0x197, 0x1a0, 0x5, 0x18a, 
       0xc6, 0x2, 0x198, 0x1a0, 0x7, 0x46, 0x2, 0x2, 0x199, 0x19a, 0x7, 
       0x56, 0x2, 0x2, 0x19a, 0x19b, 0x5, 0x5e, 0x30, 0x2, 0x19b, 0x19c, 
       0x7, 0x57, 0x2, 0x2, 0x19c, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x1a0, 
       0x5, 0x6, 0x4, 0x2, 0x19e, 0x1a0, 0x5, 0xe, 0x8, 0x2, 0x19f, 0x197, 
       0x3, 0x2, 0x2, 0x2, 0x19f, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x199, 
       0x3, 0x2, 0x2, 0x2, 0x19f, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19e, 
       0x3, 0x2, 0x2, 0x2, 0x1a0, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a4, 
       0x5, 0x8, 0x5, 0x2, 0x1a2, 0x1a4, 0x5, 0xa, 0x6, 0x2, 0x1a3, 0x1a1, 
       0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x7, 
       0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1af, 0x7, 0x87, 0x2, 0x2, 0x1a6, 0x1af, 
       0x5, 0x158, 0xad, 0x2, 0x1a7, 0x1af, 0x5, 0x14a, 0xa6, 0x2, 0x1a8, 
       0x1af, 0x5, 0x15a, 0xae, 0x2, 0x1a9, 0x1aa, 0x7, 0x64, 0x2, 0x2, 
       0x1aa, 0x1af, 0x5, 0x124, 0x93, 0x2, 0x1ab, 0x1ac, 0x7, 0x64, 0x2, 
       0x2, 0x1ac, 0x1af, 0x5, 0xa2, 0x52, 0x2, 0x1ad, 0x1af, 0x5, 0x166, 
       0xb4, 0x2, 0x1ae, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1a6, 0x3, 0x2, 
       0x2, 0x2, 0x1ae, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1a8, 0x3, 0x2, 
       0x2, 0x2, 0x1ae, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ab, 0x3, 0x2, 
       0x2, 0x2, 0x1ae, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x1b0, 0x1b2, 0x5, 0xc, 0x7, 0x2, 0x1b1, 0x1b3, 0x7, 0x45, 
       0x2, 0x2, 0x1b2, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 
       0x2, 0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x5, 0x8, 
       0x5, 0x2, 0x1b5, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x8, 0x7, 
       0x1, 0x2, 0x1b7, 0x1c2, 0x7, 0x82, 0x2, 0x2, 0x1b8, 0x1b9, 0x5, 0xa0, 
       0x51, 0x2, 0x1b9, 0x1ba, 0x7, 0x82, 0x2, 0x2, 0x1ba, 0x1c2, 0x3, 
       0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x5, 0xb8, 0x5d, 0x2, 0x1bc, 0x1bd, 
       0x7, 0x82, 0x2, 0x2, 0x1bd, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 
       0x5, 0xa2, 0x52, 0x2, 0x1bf, 0x1c0, 0x7, 0x82, 0x2, 0x2, 0x1c0, 0x1c2, 
       0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1b8, 
       0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1be, 
       0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 
       0xc, 0x4, 0x2, 0x2, 0x1c4, 0x1c5, 0x7, 0x87, 0x2, 0x2, 0x1c5, 0x1ce, 
       0x7, 0x82, 0x2, 0x2, 0x1c6, 0x1c8, 0xc, 0x3, 0x2, 0x2, 0x1c7, 0x1c9, 
       0x7, 0x45, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 
       0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 
       0x5, 0x164, 0xb3, 0x2, 0x1cb, 0x1cc, 0x7, 0x82, 0x2, 0x2, 0x1cc, 
       0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1cd, 
       0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1cf, 
       0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d0, 
       0xd, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d2, 
       0x1d4, 0x5, 0x10, 0x9, 0x2, 0x1d3, 0x1d5, 0x5, 0x1e, 0x10, 0x2, 0x1d4, 
       0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d5, 
       0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x5, 0x68, 0x35, 0x2, 0x1d7, 
       0xf, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1da, 0x7, 0x58, 0x2, 0x2, 0x1d9, 
       0x1db, 0x5, 0x12, 0xa, 0x2, 0x1da, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1da, 
       0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
       0x1dd, 0x7, 0x59, 0x2, 0x2, 0x1dd, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1de, 
       0x1e5, 0x5, 0x14, 0xb, 0x2, 0x1df, 0x1e5, 0x5, 0x16, 0xc, 0x2, 0x1e0, 
       0x1e1, 0x5, 0x14, 0xb, 0x2, 0x1e1, 0x1e2, 0x7, 0x7d, 0x2, 0x2, 0x1e2, 
       0x1e3, 0x5, 0x16, 0xc, 0x2, 0x1e3, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
       0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
       0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
       0x1e7, 0x9, 0x2, 0x2, 0x2, 0x1e7, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1e8, 
       0x1e9, 0x8, 0xc, 0x1, 0x2, 0x1e9, 0x1eb, 0x5, 0x18, 0xd, 0x2, 0x1ea, 
       0x1ec, 0x7, 0x86, 0x2, 0x2, 0x1eb, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1eb, 
       0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1ed, 
       0x1ee, 0xc, 0x3, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x7d, 0x2, 0x2, 0x1ef, 
       0x1f1, 0x5, 0x18, 0xd, 0x2, 0x1f0, 0x1f2, 0x7, 0x86, 0x2, 0x2, 0x1f1, 
       0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
       0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f4, 
       0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
       0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1f7, 
       0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1fb, 0x5, 0x1a, 0xe, 0x2, 0x1f9, 
       0x1fb, 0x5, 0x1c, 0xf, 0x2, 0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
       0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
       0x201, 0x7, 0x87, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x62, 0x2, 0x2, 0x1fe, 
       0x201, 0x7, 0x87, 0x2, 0x2, 0x1ff, 0x201, 0x7, 0x46, 0x2, 0x2, 0x200, 
       0x1fc, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x200, 
       0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x202, 
       0x203, 0x7, 0x87, 0x2, 0x2, 0x203, 0x208, 0x5, 0x11a, 0x8e, 0x2, 
       0x204, 0x205, 0x7, 0x62, 0x2, 0x2, 0x205, 0x206, 0x7, 0x87, 0x2, 
       0x2, 0x206, 0x208, 0x5, 0x11a, 0x8e, 0x2, 0x207, 0x202, 0x3, 0x2, 
       0x2, 0x2, 0x207, 0x204, 0x3, 0x2, 0x2, 0x2, 0x208, 0x1d, 0x3, 0x2, 
       0x2, 0x2, 0x209, 0x20a, 0x7, 0x56, 0x2, 0x2, 0x20a, 0x20b, 0x5, 0x110, 
       0x89, 0x2, 0x20b, 0x20d, 0x7, 0x57, 0x2, 0x2, 0x20c, 0x20e, 0x7, 
       0x30, 0x2, 0x2, 0x20d, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 
       0x2, 0x2, 0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x211, 0x5, 
       0x180, 0xc1, 0x2, 0x210, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x213, 0x3, 0x2, 0x2, 0x2, 0x212, 0x214, 
       0x5, 0xd6, 0x6c, 0x2, 0x213, 0x212, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 
       0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x3, 0x2, 0x2, 0x2, 0x215, 0x217, 
       0x5, 0xf8, 0x7d, 0x2, 0x216, 0x215, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 
       0x3, 0x2, 0x2, 0x2, 0x217, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 
       0x8, 0x11, 0x1, 0x2, 0x219, 0x259, 0x5, 0x4, 0x3, 0x2, 0x21a, 0x21b, 
       0x5, 0x9e, 0x50, 0x2, 0x21b, 0x21d, 0x7, 0x56, 0x2, 0x2, 0x21c, 0x21e, 
       0x5, 0x26, 0x14, 0x2, 0x21d, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 
       0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 
       0x7, 0x57, 0x2, 0x2, 0x220, 0x259, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 
       0x5, 0x16e, 0xb8, 0x2, 0x222, 0x224, 0x7, 0x56, 0x2, 0x2, 0x223, 
       0x225, 0x5, 0x26, 0x14, 0x2, 0x224, 0x223, 0x3, 0x2, 0x2, 0x2, 0x224, 
       0x225, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 
       0x227, 0x7, 0x57, 0x2, 0x2, 0x227, 0x259, 0x3, 0x2, 0x2, 0x2, 0x228, 
       0x229, 0x5, 0x9e, 0x50, 0x2, 0x229, 0x22a, 0x5, 0x122, 0x92, 0x2, 
       0x22a, 0x259, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x5, 0x16e, 0xb8, 
       0x2, 0x22c, 0x22d, 0x5, 0x122, 0x92, 0x2, 0x22d, 0x259, 0x3, 0x2, 
       0x2, 0x2, 0x22e, 0x22f, 0x7, 0x20, 0x2, 0x2, 0x22f, 0x230, 0x7, 0x67, 
       0x2, 0x2, 0x230, 0x231, 0x5, 0x104, 0x83, 0x2, 0x231, 0x232, 0x7, 
       0x68, 0x2, 0x2, 0x232, 0x233, 0x7, 0x56, 0x2, 0x2, 0x233, 0x234, 
       0x5, 0x5e, 0x30, 0x2, 0x234, 0x235, 0x7, 0x57, 0x2, 0x2, 0x235, 0x259, 
       0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x7, 0x42, 0x2, 0x2, 0x237, 0x238, 
       0x7, 0x67, 0x2, 0x2, 0x238, 0x239, 0x5, 0x104, 0x83, 0x2, 0x239, 
       0x23a, 0x7, 0x68, 0x2, 0x2, 0x23a, 0x23b, 0x7, 0x56, 0x2, 0x2, 0x23b, 
       0x23c, 0x5, 0x5e, 0x30, 0x2, 0x23c, 0x23d, 0x7, 0x57, 0x2, 0x2, 0x23d, 
       0x259, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0x3b, 0x2, 0x2, 0x23f, 
       0x240, 0x7, 0x67, 0x2, 0x2, 0x240, 0x241, 0x5, 0x104, 0x83, 0x2, 
       0x241, 0x242, 0x7, 0x68, 0x2, 0x2, 0x242, 0x243, 0x7, 0x56, 0x2, 
       0x2, 0x243, 0x244, 0x5, 0x5e, 0x30, 0x2, 0x244, 0x245, 0x7, 0x57, 
       0x2, 0x2, 0x245, 0x259, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x7, 0x19, 
       0x2, 0x2, 0x247, 0x248, 0x7, 0x67, 0x2, 0x2, 0x248, 0x249, 0x5, 0x104, 
       0x83, 0x2, 0x249, 0x24a, 0x7, 0x68, 0x2, 0x2, 0x24a, 0x24b, 0x7, 
       0x56, 0x2, 0x2, 0x24b, 0x24c, 0x5, 0x5e, 0x30, 0x2, 0x24c, 0x24d, 
       0x7, 0x57, 0x2, 0x2, 0x24d, 0x259, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 
       0x5, 0x24, 0x13, 0x2, 0x24f, 0x250, 0x7, 0x56, 0x2, 0x2, 0x250, 0x251, 
       0x5, 0x5e, 0x30, 0x2, 0x251, 0x252, 0x7, 0x57, 0x2, 0x2, 0x252, 0x259, 
       0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x5, 0x24, 0x13, 0x2, 0x254, 0x255, 
       0x7, 0x56, 0x2, 0x2, 0x255, 0x256, 0x5, 0x104, 0x83, 0x2, 0x256, 
       0x257, 0x7, 0x57, 0x2, 0x2, 0x257, 0x259, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x218, 0x3, 0x2, 0x2, 0x2, 0x258, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x221, 0x3, 0x2, 0x2, 0x2, 0x258, 0x228, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x22b, 0x3, 0x2, 0x2, 0x2, 0x258, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x236, 0x3, 0x2, 0x2, 0x2, 0x258, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x246, 0x3, 0x2, 0x2, 0x2, 0x258, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x253, 0x3, 0x2, 0x2, 0x2, 0x259, 0x282, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x25b, 0xc, 0x15, 0x2, 0x2, 0x25b, 0x25c, 0x7, 0x58, 0x2, 0x2, 0x25c, 
       0x25d, 0x5, 0x5e, 0x30, 0x2, 0x25d, 0x25e, 0x7, 0x59, 0x2, 0x2, 0x25e, 
       0x281, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0xc, 0x14, 0x2, 0x2, 0x260, 
       0x261, 0x7, 0x58, 0x2, 0x2, 0x261, 0x262, 0x5, 0x122, 0x92, 0x2, 
       0x262, 0x263, 0x7, 0x59, 0x2, 0x2, 0x263, 0x281, 0x3, 0x2, 0x2, 0x2, 
       0x264, 0x265, 0xc, 0x13, 0x2, 0x2, 0x265, 0x267, 0x7, 0x56, 0x2, 
       0x2, 0x266, 0x268, 0x5, 0x26, 0x14, 0x2, 0x267, 0x266, 0x3, 0x2, 
       0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 
       0x2, 0x2, 0x269, 0x281, 0x7, 0x57, 0x2, 0x2, 0x26a, 0x26b, 0xc, 0xe, 
       0x2, 0x2, 0x26b, 0x26d, 0x7, 0x84, 0x2, 0x2, 0x26c, 0x26e, 0x7, 0x45, 
       0x2, 0x2, 0x26d, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x3, 0x2, 
       0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x281, 0x5, 0x6, 
       0x4, 0x2, 0x270, 0x271, 0xc, 0xd, 0x2, 0x2, 0x271, 0x273, 0x7, 0x7f, 
       0x2, 0x2, 0x272, 0x274, 0x7, 0x45, 0x2, 0x2, 0x273, 0x272, 0x3, 0x2, 
       0x2, 0x2, 0x273, 0x274, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 
       0x2, 0x2, 0x275, 0x281, 0x5, 0x6, 0x4, 0x2, 0x276, 0x277, 0xc, 0xc, 
       0x2, 0x2, 0x277, 0x278, 0x7, 0x84, 0x2, 0x2, 0x278, 0x281, 0x5, 0x28, 
       0x15, 0x2, 0x279, 0x27a, 0xc, 0xb, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x7f, 
       0x2, 0x2, 0x27b, 0x281, 0x5, 0x28, 0x15, 0x2, 0x27c, 0x27d, 0xc, 
       0xa, 0x2, 0x2, 0x27d, 0x281, 0x7, 0x7b, 0x2, 0x2, 0x27e, 0x27f, 0xc, 
       0x9, 0x2, 0x2, 0x27f, 0x281, 0x7, 0x7c, 0x2, 0x2, 0x280, 0x25a, 0x3, 
       0x2, 0x2, 0x2, 0x280, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x280, 0x264, 0x3, 
       0x2, 0x2, 0x2, 0x280, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x280, 0x270, 0x3, 
       0x2, 0x2, 0x2, 0x280, 0x276, 0x3, 0x2, 0x2, 0x2, 0x280, 0x279, 0x3, 
       0x2, 0x2, 0x2, 0x280, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 
       0x2, 0x2, 0x2, 0x281, 0x284, 0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 0x3, 
       0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 0x2, 0x2, 0x283, 0x21, 0x3, 
       0x2, 0x2, 0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 0x285, 0x286, 0x7, 
       0x4c, 0x2, 0x2, 0x286, 0x23, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x7, 
       0x4c, 0x2, 0x2, 0x288, 0x25, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x5, 
       0x120, 0x91, 0x2, 0x28a, 0x27, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28d, 
       0x5, 0xc, 0x7, 0x2, 0x28c, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 
       0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 
       0x5, 0xa0, 0x51, 0x2, 0x28f, 0x290, 0x7, 0x82, 0x2, 0x2, 0x290, 0x291, 
       0x7, 0x64, 0x2, 0x2, 0x291, 0x292, 0x5, 0xa0, 0x51, 0x2, 0x292, 0x2a2, 
       0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x5, 0xc, 0x7, 0x2, 0x294, 0x295, 
       0x7, 0x45, 0x2, 0x2, 0x295, 0x296, 0x5, 0x164, 0xb3, 0x2, 0x296, 
       0x297, 0x7, 0x82, 0x2, 0x2, 0x297, 0x298, 0x7, 0x64, 0x2, 0x2, 0x298, 
       0x299, 0x5, 0xa0, 0x51, 0x2, 0x299, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x29a, 
       0x29c, 0x5, 0xc, 0x7, 0x2, 0x29b, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29b, 
       0x29c, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29d, 
       0x29e, 0x7, 0x64, 0x2, 0x2, 0x29e, 0x2a2, 0x5, 0xa0, 0x51, 0x2, 0x29f, 
       0x2a0, 0x7, 0x64, 0x2, 0x2, 0x2a0, 0x2a2, 0x5, 0xa2, 0x52, 0x2, 0x2a1, 
       0x28c, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x293, 0x3, 0x2, 0x2, 0x2, 0x2a1, 
       0x29b, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a2, 
       0x29, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2c0, 0x5, 0x20, 0x11, 0x2, 0x2a4, 
       0x2a5, 0x7, 0x7b, 0x2, 0x2, 0x2a5, 0x2c0, 0x5, 0x3e, 0x20, 0x2, 0x2a6, 
       0x2a7, 0x7, 0x7c, 0x2, 0x2, 0x2a7, 0x2c0, 0x5, 0x3e, 0x20, 0x2, 0x2a8, 
       0x2a9, 0x5, 0x2c, 0x17, 0x2, 0x2a9, 0x2aa, 0x5, 0x3e, 0x20, 0x2, 
       0x2aa, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 0x7, 0x3f, 0x2, 0x2, 
       0x2ac, 0x2c0, 0x5, 0x2a, 0x16, 0x2, 0x2ad, 0x2ae, 0x7, 0x3f, 0x2, 
       0x2, 0x2ae, 0x2af, 0x7, 0x56, 0x2, 0x2, 0x2af, 0x2b0, 0x5, 0x104, 
       0x83, 0x2, 0x2b0, 0x2b1, 0x7, 0x57, 0x2, 0x2, 0x2b1, 0x2c0, 0x3, 
       0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0x3f, 0x2, 0x2, 0x2b3, 0x2b4, 0x7, 
       0x86, 0x2, 0x2, 0x2b4, 0x2b5, 0x7, 0x56, 0x2, 0x2, 0x2b5, 0x2b6, 
       0x7, 0x87, 0x2, 0x2, 0x2b6, 0x2c0, 0x7, 0x57, 0x2, 0x2, 0x2b7, 0x2b8, 
       0x7, 0xc, 0x2, 0x2, 0x2b8, 0x2b9, 0x7, 0x56, 0x2, 0x2, 0x2b9, 0x2ba, 
       0x5, 0x104, 0x83, 0x2, 0x2ba, 0x2bb, 0x7, 0x57, 0x2, 0x2, 0x2bb, 
       0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2c0, 0x5, 0x3c, 0x1f, 0x2, 0x2bd, 
       0x2c0, 0x5, 0x2e, 0x18, 0x2, 0x2be, 0x2c0, 0x5, 0x3a, 0x1e, 0x2, 
       0x2bf, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2a4, 0x3, 0x2, 0x2, 0x2, 
       0x2bf, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2a8, 0x3, 0x2, 0x2, 0x2, 
       0x2bf, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2ad, 0x3, 0x2, 0x2, 0x2, 
       0x2bf, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2b7, 0x3, 0x2, 0x2, 0x2, 
       0x2bf, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bd, 0x3, 0x2, 0x2, 0x2, 
       0x2bf, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2b, 0x3, 0x2, 0x2, 0x2, 
       0x2c1, 0x2c2, 0x9, 0x3, 0x2, 0x2, 0x2c2, 0x2d, 0x3, 0x2, 0x2, 0x2, 
       0x2c3, 0x2c5, 0x7, 0x82, 0x2, 0x2, 0x2c4, 0x2c3, 0x3, 0x2, 0x2, 0x2, 
       0x2c4, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x3, 0x2, 0x2, 0x2, 
       0x2c6, 0x2c8, 0x7, 0x32, 0x2, 0x2, 0x2c7, 0x2c9, 0x5, 0x30, 0x19, 
       0x2, 0x2c8, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 0x2, 
       0x2, 0x2c9, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cc, 0x5, 0x32, 0x1a, 
       0x2, 0x2cb, 0x2cd, 0x5, 0x38, 0x1d, 0x2, 0x2cc, 0x2cb, 0x3, 0x2, 
       0x2, 0x2, 0x2cc, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2dc, 0x3, 0x2, 
       0x2, 0x2, 0x2ce, 0x2d0, 0x7, 0x82, 0x2, 0x2, 0x2cf, 0x2ce, 0x3, 0x2, 
       0x2, 0x2, 0x2cf, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 
       0x2, 0x2, 0x2d1, 0x2d3, 0x7, 0x32, 0x2, 0x2, 0x2d2, 0x2d4, 0x5, 0x30, 
       0x19, 0x2, 0x2d3, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x3, 0x2, 
       0x2, 0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x7, 0x56, 
       0x2, 0x2, 0x2d6, 0x2d7, 0x5, 0x104, 0x83, 0x2, 0x2d7, 0x2d9, 0x7, 
       0x57, 0x2, 0x2, 0x2d8, 0x2da, 0x5, 0x38, 0x1d, 0x2, 0x2d9, 0x2d8, 
       0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2dc, 
       0x3, 0x2, 0x2, 0x2, 0x2db, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2cf, 
       0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 
       0x7, 0x56, 0x2, 0x2, 0x2de, 0x2df, 0x5, 0x26, 0x14, 0x2, 0x2df, 0x2e0, 
       0x7, 0x57, 0x2, 0x2, 0x2e0, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e3, 
       0x5, 0x9a, 0x4e, 0x2, 0x2e2, 0x2e4, 0x5, 0x34, 0x1b, 0x2, 0x2e3, 
       0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e4, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e7, 0x5, 0xfa, 0x7e, 0x2, 0x2e6, 
       0x2e8, 0x5, 0x34, 0x1b, 0x2, 0x2e7, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e7, 
       0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2e9, 
       0x2eb, 0x5, 0x36, 0x1c, 0x2, 0x2ea, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2ea, 
       0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2ec, 
       0x2ed, 0x8, 0x1c, 0x1, 0x2, 0x2ed, 0x2ee, 0x7, 0x58, 0x2, 0x2, 0x2ee, 
       0x2ef, 0x5, 0x5e, 0x30, 0x2, 0x2ef, 0x2f1, 0x7, 0x59, 0x2, 0x2, 0x2f0, 
       0x2f2, 0x5, 0xd6, 0x6c, 0x2, 0x2f1, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f1, 
       0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2f3, 
       0x2f4, 0xc, 0x3, 0x2, 0x2, 0x2f4, 0x2f5, 0x7, 0x58, 0x2, 0x2, 0x2f5, 
       0x2f6, 0x5, 0x60, 0x31, 0x2, 0x2f6, 0x2f8, 0x7, 0x59, 0x2, 0x2, 0x2f7, 
       0x2f9, 0x5, 0xd6, 0x6c, 0x2, 0x2f8, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f8, 
       0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fa, 
       0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fc, 
       0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fd, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2ff, 
       0x301, 0x7, 0x56, 0x2, 0x2, 0x300, 0x302, 0x5, 0x26, 0x14, 0x2, 0x301, 
       0x300, 0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0x3, 0x2, 0x2, 0x2, 0x302, 
       0x303, 0x3, 0x2, 0x2, 0x2, 0x303, 0x306, 0x7, 0x57, 0x2, 0x2, 0x304, 
       0x306, 0x5, 0x122, 0x92, 0x2, 0x305, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x305, 
       0x304, 0x3, 0x2, 0x2, 0x2, 0x306, 0x39, 0x3, 0x2, 0x2, 0x2, 0x307, 
       0x309, 0x7, 0x82, 0x2, 0x2, 0x308, 0x307, 0x3, 0x2, 0x2, 0x2, 0x308, 
       0x309, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30a, 
       0x30b, 0x7, 0x1d, 0x2, 0x2, 0x30b, 0x314, 0x5, 0x3e, 0x20, 0x2, 0x30c, 
       0x30e, 0x7, 0x82, 0x2, 0x2, 0x30d, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30d, 
       0x30e, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x30f, 
       0x310, 0x7, 0x1d, 0x2, 0x2, 0x310, 0x311, 0x7, 0x58, 0x2, 0x2, 0x311, 
       0x312, 0x7, 0x59, 0x2, 0x2, 0x312, 0x314, 0x5, 0x3e, 0x20, 0x2, 0x313, 
       0x308, 0x3, 0x2, 0x2, 0x2, 0x313, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x314, 
       0x3b, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x7, 0x33, 0x2, 0x2, 0x316, 
       0x317, 0x7, 0x56, 0x2, 0x2, 0x317, 0x318, 0x5, 0x5e, 0x30, 0x2, 0x318, 
       0x319, 0x7, 0x57, 0x2, 0x2, 0x319, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x31a, 
       0x321, 0x5, 0x2a, 0x16, 0x2, 0x31b, 0x31c, 0x7, 0x56, 0x2, 0x2, 0x31c, 
       0x31d, 0x5, 0x104, 0x83, 0x2, 0x31d, 0x31e, 0x7, 0x57, 0x2, 0x2, 
       0x31e, 0x31f, 0x5, 0x3e, 0x20, 0x2, 0x31f, 0x321, 0x3, 0x2, 0x2, 
       0x2, 0x320, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x320, 0x31b, 0x3, 0x2, 0x2, 
       0x2, 0x321, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 0x8, 0x21, 0x1, 
       0x2, 0x323, 0x324, 0x5, 0x3e, 0x20, 0x2, 0x324, 0x32d, 0x3, 0x2, 
       0x2, 0x2, 0x325, 0x326, 0xc, 0x4, 0x2, 0x2, 0x326, 0x327, 0x7, 0x85, 
       0x2, 0x2, 0x327, 0x32c, 0x5, 0x3e, 0x20, 0x2, 0x328, 0x329, 0xc, 
       0x3, 0x2, 0x2, 0x329, 0x32a, 0x7, 0x7e, 0x2, 0x2, 0x32a, 0x32c, 0x5, 
       0x3e, 0x20, 0x2, 0x32b, 0x325, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x328, 
       0x3, 0x2, 0x2, 0x2, 0x32c, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32b, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x32f, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 
       0x8, 0x22, 0x1, 0x2, 0x331, 0x332, 0x5, 0x40, 0x21, 0x2, 0x332, 0x33e, 
       0x3, 0x2, 0x2, 0x2, 0x333, 0x334, 0xc, 0x5, 0x2, 0x2, 0x334, 0x335, 
       0x7, 0x5e, 0x2, 0x2, 0x335, 0x33d, 0x5, 0x40, 0x21, 0x2, 0x336, 0x337, 
       0xc, 0x4, 0x2, 0x2, 0x337, 0x338, 0x7, 0x5f, 0x2, 0x2, 0x338, 0x33d, 
       0x5, 0x40, 0x21, 0x2, 0x339, 0x33a, 0xc, 0x3, 0x2, 0x2, 0x33a, 0x33b, 
       0x7, 0x60, 0x2, 0x2, 0x33b, 0x33d, 0x5, 0x40, 0x21, 0x2, 0x33c, 0x333, 
       0x3, 0x2, 0x2, 0x2, 0x33c, 0x336, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x339, 
       0x3, 0x2, 0x2, 0x2, 0x33d, 0x340, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 
       0x3, 0x2, 0x2, 0x2, 0x33e, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x340, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 
       0x8, 0x23, 0x1, 0x2, 0x342, 0x343, 0x5, 0x42, 0x22, 0x2, 0x343, 0x34c, 
       0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0xc, 0x4, 0x2, 0x2, 0x345, 0x346, 
       0x7, 0x5c, 0x2, 0x2, 0x346, 0x34b, 0x5, 0x42, 0x22, 0x2, 0x347, 0x348, 
       0xc, 0x3, 0x2, 0x2, 0x348, 0x349, 0x7, 0x5d, 0x2, 0x2, 0x349, 0x34b, 
       0x5, 0x42, 0x22, 0x2, 0x34a, 0x344, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x347, 
       0x3, 0x2, 0x2, 0x2, 0x34b, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34a, 
       0x3, 0x2, 0x2, 0x2, 0x34c, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x34e, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 
       0x8, 0x24, 0x1, 0x2, 0x350, 0x351, 0x5, 0x44, 0x23, 0x2, 0x351, 0x358, 
       0x3, 0x2, 0x2, 0x2, 0x352, 0x353, 0xc, 0x3, 0x2, 0x2, 0x353, 0x354, 
       0x5, 0x48, 0x25, 0x2, 0x354, 0x355, 0x5, 0x44, 0x23, 0x2, 0x355, 
       0x357, 0x3, 0x2, 0x2, 0x2, 0x356, 0x352, 0x3, 0x2, 0x2, 0x2, 0x357, 
       0x35a, 0x3, 0x2, 0x2, 0x2, 0x358, 0x356, 0x3, 0x2, 0x2, 0x2, 0x358, 
       0x359, 0x3, 0x2, 0x2, 0x2, 0x359, 0x47, 0x3, 0x2, 0x2, 0x2, 0x35a, 
       0x358, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 0x9, 0x4, 0x2, 0x2, 0x35c, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35e, 0x8, 0x26, 0x1, 0x2, 0x35e, 
       0x35f, 0x5, 0x46, 0x24, 0x2, 0x35f, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x360, 
       0x361, 0xc, 0x6, 0x2, 0x2, 0x361, 0x362, 0x7, 0x67, 0x2, 0x2, 0x362, 
       0x36d, 0x5, 0x46, 0x24, 0x2, 0x363, 0x364, 0xc, 0x5, 0x2, 0x2, 0x364, 
       0x365, 0x7, 0x68, 0x2, 0x2, 0x365, 0x36d, 0x5, 0x46, 0x24, 0x2, 0x366, 
       0x367, 0xc, 0x4, 0x2, 0x2, 0x367, 0x368, 0x7, 0x77, 0x2, 0x2, 0x368, 
       0x36d, 0x5, 0x46, 0x24, 0x2, 0x369, 0x36a, 0xc, 0x3, 0x2, 0x2, 0x36a, 
       0x36b, 0x7, 0x78, 0x2, 0x2, 0x36b, 0x36d, 0x5, 0x46, 0x24, 0x2, 0x36c, 
       0x360, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x363, 0x3, 0x2, 0x2, 0x2, 0x36c, 
       0x366, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x369, 0x3, 0x2, 0x2, 0x2, 0x36d, 
       0x370, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x36e, 
       0x36f, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x370, 
       0x36e, 0x3, 0x2, 0x2, 0x2, 0x371, 0x372, 0x8, 0x27, 0x1, 0x2, 0x372, 
       0x373, 0x5, 0x4a, 0x26, 0x2, 0x373, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x374, 
       0x375, 0xc, 0x4, 0x2, 0x2, 0x375, 0x376, 0x7, 0x75, 0x2, 0x2, 0x376, 
       0x37b, 0x5, 0x4a, 0x26, 0x2, 0x377, 0x378, 0xc, 0x3, 0x2, 0x2, 0x378, 
       0x379, 0x7, 0x76, 0x2, 0x2, 0x379, 0x37b, 0x5, 0x4a, 0x26, 0x2, 0x37a, 
       0x374, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x377, 0x3, 0x2, 0x2, 0x2, 0x37b, 
       0x37e, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37c, 
       0x37d, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x37e, 
       0x37c, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x380, 0x8, 0x28, 0x1, 0x2, 0x380, 
       0x381, 0x5, 0x4c, 0x27, 0x2, 0x381, 0x387, 0x3, 0x2, 0x2, 0x2, 0x382, 
       0x383, 0xc, 0x3, 0x2, 0x2, 0x383, 0x384, 0x7, 0x62, 0x2, 0x2, 0x384, 
       0x386, 0x5, 0x4c, 0x27, 0x2, 0x385, 0x382, 0x3, 0x2, 0x2, 0x2, 0x386, 
       0x389, 0x3, 0x2, 0x2, 0x2, 0x387, 0x385, 0x3, 0x2, 0x2, 0x2, 0x387, 
       0x388, 0x3, 0x2, 0x2, 0x2, 0x388, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x389, 
       0x387, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 0x8, 0x29, 0x1, 0x2, 0x38b, 
       0x38c, 0x5, 0x4e, 0x28, 0x2, 0x38c, 0x392, 0x3, 0x2, 0x2, 0x2, 0x38d, 
       0x38e, 0xc, 0x3, 0x2, 0x2, 0x38e, 0x38f, 0x7, 0x61, 0x2, 0x2, 0x38f, 
       0x391, 0x5, 0x4e, 0x28, 0x2, 0x390, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x391, 
       0x394, 0x3, 0x2, 0x2, 0x2, 0x392, 0x390, 0x3, 0x2, 0x2, 0x2, 0x392, 
       0x393, 0x3, 0x2, 0x2, 0x2, 0x393, 0x51, 0x3, 0x2, 0x2, 0x2, 0x394, 
       0x392, 0x3, 0x2, 0x2, 0x2, 0x395, 0x396, 0x8, 0x2a, 0x1, 0x2, 0x396, 
       0x397, 0x5, 0x50, 0x29, 0x2, 0x397, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x398, 
       0x399, 0xc, 0x3, 0x2, 0x2, 0x399, 0x39a, 0x7, 0x63, 0x2, 0x2, 0x39a, 
       0x39c, 0x5, 0x50, 0x29, 0x2, 0x39b, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39c, 
       0x39f, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39d, 
       0x39e, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x53, 0x3, 0x2, 0x2, 0x2, 0x39f, 
       0x39d, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 0x8, 0x2b, 0x1, 0x2, 0x3a1, 
       0x3a2, 0x5, 0x52, 0x2a, 0x2, 0x3a2, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3a3, 
       0x3a4, 0xc, 0x4, 0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x5, 0x2, 0x2, 0x3a5, 
       0x3aa, 0x5, 0x52, 0x2a, 0x2, 0x3a6, 0x3a7, 0xc, 0x3, 0x2, 0x2, 0x3a7, 
       0x3a8, 0x7, 0x6, 0x2, 0x2, 0x3a8, 0x3aa, 0x5, 0x52, 0x2a, 0x2, 0x3a9, 
       0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3aa, 
       0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
       0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x55, 0x3, 0x2, 0x2, 0x2, 0x3ad, 
       0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 0x8, 0x2c, 0x1, 0x2, 0x3af, 
       0x3b0, 0x5, 0x54, 0x2b, 0x2, 0x3b0, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b1, 
       0x3b2, 0xc, 0x4, 0x2, 0x2, 0x3b2, 0x3b3, 0x7, 0x7, 0x2, 0x2, 0x3b3, 
       0x3b8, 0x5, 0x54, 0x2b, 0x2, 0x3b4, 0x3b5, 0xc, 0x3, 0x2, 0x2, 0x3b5, 
       0x3b6, 0x7, 0x8, 0x2, 0x2, 0x3b6, 0x3b8, 0x5, 0x54, 0x2b, 0x2, 0x3b7, 
       0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b8, 
       0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
       0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x57, 0x3, 0x2, 0x2, 0x2, 0x3bb, 
       0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3c4, 0x5, 0x56, 0x2c, 0x2, 0x3bd, 
       0x3be, 0x5, 0x56, 0x2c, 0x2, 0x3be, 0x3bf, 0x7, 0x80, 0x2, 0x2, 0x3bf, 
       0x3c0, 0x5, 0x5e, 0x30, 0x2, 0x3c0, 0x3c1, 0x7, 0x81, 0x2, 0x2, 0x3c1, 
       0x3c2, 0x5, 0x5a, 0x2e, 0x2, 0x3c2, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c3, 
       0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3c4, 
       0x59, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3cc, 0x5, 0x58, 0x2d, 0x2, 0x3c6, 
       0x3c7, 0x5, 0x56, 0x2c, 0x2, 0x3c7, 0x3c8, 0x5, 0x5c, 0x2f, 0x2, 
       0x3c8, 0x3c9, 0x5, 0x11e, 0x90, 0x2, 0x3c9, 0x3cc, 0x3, 0x2, 0x2, 
       0x2, 0x3ca, 0x3cc, 0x5, 0x17e, 0xc0, 0x2, 0x3cb, 0x3c5, 0x3, 0x2, 
       0x2, 0x2, 0x3cb, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3ca, 0x3, 0x2, 
       0x2, 0x2, 0x3cc, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 0x9, 0x5, 
       0x2, 0x2, 0x3ce, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x8, 0x30, 
       0x1, 0x2, 0x3d0, 0x3d1, 0x5, 0x5a, 0x2e, 0x2, 0x3d1, 0x3d7, 0x3, 
       0x2, 0x2, 0x2, 0x3d2, 0x3d3, 0xc, 0x3, 0x2, 0x2, 0x3d3, 0x3d4, 0x7, 
       0x7d, 0x2, 0x2, 0x3d4, 0x3d6, 0x5, 0x5a, 0x2e, 0x2, 0x3d5, 0x3d2, 
       0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d5, 
       0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3db, 
       0x5, 0x58, 0x2d, 0x2, 0x3db, 0x61, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3f7, 
       0x5, 0x64, 0x33, 0x2, 0x3dd, 0x3df, 0x5, 0xd6, 0x6c, 0x2, 0x3de, 
       0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3df, 
       0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3f7, 0x5, 0x66, 0x34, 0x2, 0x3e1, 
       0x3e3, 0x5, 0xd6, 0x6c, 0x2, 0x3e2, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e2, 
       0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
       0x3f7, 0x5, 0x68, 0x35, 0x2, 0x3e5, 0x3e7, 0x5, 0xd6, 0x6c, 0x2, 
       0x3e6, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e7, 0x3, 0x2, 0x2, 0x2, 
       0x3e7, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3f7, 0x5, 0x6c, 0x37, 
       0x2, 0x3e9, 0x3eb, 0x5, 0xd6, 0x6c, 0x2, 0x3ea, 0x3e9, 0x3, 0x2, 
       0x2, 0x2, 0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x3, 0x2, 
       0x2, 0x2, 0x3ec, 0x3f7, 0x5, 0x70, 0x39, 0x2, 0x3ed, 0x3ef, 0x5, 
       0xd6, 0x6c, 0x2, 0x3ee, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 
       0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f7, 
       0x5, 0x78, 0x3d, 0x2, 0x3f1, 0x3f7, 0x5, 0x7a, 0x3e, 0x2, 0x3f2, 
       0x3f4, 0x5, 0xd6, 0x6c, 0x2, 0x3f3, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f3, 
       0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f5, 
       0x3f7, 0x5, 0x174, 0xbb, 0x2, 0x3f6, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
       0x3de, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
       0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
       0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
       0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x63, 0x3, 0x2, 0x2, 0x2, 0x3f8, 
       0x3fa, 0x5, 0xd6, 0x6c, 0x2, 0x3f9, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f9, 
       0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fb, 
       0x3fc, 0x7, 0x87, 0x2, 0x2, 0x3fc, 0x3fd, 0x7, 0x81, 0x2, 0x2, 0x3fd, 
       0x40d, 0x5, 0x62, 0x32, 0x2, 0x3fe, 0x400, 0x5, 0xd6, 0x6c, 0x2, 
       0x3ff, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x3, 0x2, 0x2, 0x2, 
       0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x7, 0x11, 0x2, 0x2, 
       0x402, 0x403, 0x5, 0x60, 0x31, 0x2, 0x403, 0x404, 0x7, 0x81, 0x2, 
       0x2, 0x404, 0x405, 0x5, 0x62, 0x32, 0x2, 0x405, 0x40d, 0x3, 0x2, 
       0x2, 0x2, 0x406, 0x408, 0x5, 0xd6, 0x6c, 0x2, 0x407, 0x406, 0x3, 
       0x2, 0x2, 0x2, 0x407, 0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 0x3, 
       0x2, 0x2, 0x2, 0x409, 0x40a, 0x7, 0x1c, 0x2, 0x2, 0x40a, 0x40b, 0x7, 
       0x81, 0x2, 0x2, 0x40b, 0x40d, 0x5, 0x62, 0x32, 0x2, 0x40c, 0x3f9, 
       0x3, 0x2, 0x2, 0x2, 0x40c, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x407, 
       0x3, 0x2, 0x2, 0x2, 0x40d, 0x65, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x410, 
       0x5, 0x5e, 0x30, 0x2, 0x40f, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x410, 
       0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 
       0x7, 0x83, 0x2, 0x2, 0x412, 0x67, 0x3, 0x2, 0x2, 0x2, 0x413, 0x415, 
       0x7, 0x5a, 0x2, 0x2, 0x414, 0x416, 0x5, 0x6a, 0x36, 0x2, 0x415, 0x414, 
       0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 
       0x3, 0x2, 0x2, 0x2, 0x417, 0x418, 0x7, 0x5b, 0x2, 0x2, 0x418, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 0x8, 0x36, 0x1, 0x2, 0x41a, 0x41b, 
       0x5, 0x62, 0x32, 0x2, 0x41b, 0x420, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41d, 
       0xc, 0x3, 0x2, 0x2, 0x41d, 0x41f, 0x5, 0x62, 0x32, 0x2, 0x41e, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x422, 0x3, 0x2, 0x2, 0x2, 0x420, 0x41e, 
       0x3, 0x2, 0x2, 0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 0x2, 0x421, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 
       0x7, 0x2c, 0x2, 0x2, 0x424, 0x425, 0x7, 0x56, 0x2, 0x2, 0x425, 0x426, 
       0x5, 0x6e, 0x38, 0x2, 0x426, 0x427, 0x7, 0x57, 0x2, 0x2, 0x427, 0x428, 
       0x5, 0x62, 0x32, 0x2, 0x428, 0x438, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 
       0x7, 0x2c, 0x2, 0x2, 0x42a, 0x42b, 0x7, 0x56, 0x2, 0x2, 0x42b, 0x42c, 
       0x5, 0x6e, 0x38, 0x2, 0x42c, 0x42d, 0x7, 0x57, 0x2, 0x2, 0x42d, 0x42e, 
       0x5, 0x62, 0x32, 0x2, 0x42e, 0x42f, 0x7, 0x21, 0x2, 0x2, 0x42f, 0x430, 
       0x5, 0x62, 0x32, 0x2, 0x430, 0x438, 0x3, 0x2, 0x2, 0x2, 0x431, 0x432, 
       0x7, 0x44, 0x2, 0x2, 0x432, 0x433, 0x7, 0x56, 0x2, 0x2, 0x433, 0x434, 
       0x5, 0x6e, 0x38, 0x2, 0x434, 0x435, 0x7, 0x57, 0x2, 0x2, 0x435, 0x436, 
       0x5, 0x62, 0x32, 0x2, 0x436, 0x438, 0x3, 0x2, 0x2, 0x2, 0x437, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x437, 0x429, 0x3, 0x2, 0x2, 0x2, 0x437, 0x431, 
       0x3, 0x2, 0x2, 0x2, 0x438, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x439, 0x44a, 
       0x5, 0x5e, 0x30, 0x2, 0x43a, 0x43c, 0x5, 0xd6, 0x6c, 0x2, 0x43b, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x43c, 
       0x43d, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x5, 0x8e, 0x48, 0x2, 0x43e, 
       0x43f, 0x5, 0xf0, 0x79, 0x2, 0x43f, 0x440, 0x7, 0x66, 0x2, 0x2, 0x440, 
       0x441, 0x5, 0x11e, 0x90, 0x2, 0x441, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x442, 
       0x444, 0x5, 0xd6, 0x6c, 0x2, 0x443, 0x442, 0x3, 0x2, 0x2, 0x2, 0x443, 
       0x444, 0x3, 0x2, 0x2, 0x2, 0x444, 0x445, 0x3, 0x2, 0x2, 0x2, 0x445, 
       0x446, 0x5, 0x8e, 0x48, 0x2, 0x446, 0x447, 0x5, 0xf0, 0x79, 0x2, 
       0x447, 0x448, 0x5, 0x122, 0x92, 0x2, 0x448, 0x44a, 0x3, 0x2, 0x2, 
       0x2, 0x449, 0x439, 0x3, 0x2, 0x2, 0x2, 0x449, 0x43b, 0x3, 0x2, 0x2, 
       0x2, 0x449, 0x443, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x6f, 0x3, 0x2, 0x2, 
       0x2, 0x44b, 0x44c, 0x7, 0x55, 0x2, 0x2, 0x44c, 0x44d, 0x7, 0x56, 
       0x2, 0x2, 0x44d, 0x44e, 0x5, 0x6e, 0x38, 0x2, 0x44e, 0x44f, 0x7, 
       0x57, 0x2, 0x2, 0x44f, 0x450, 0x5, 0x62, 0x32, 0x2, 0x450, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x7, 0x1e, 0x2, 0x2, 0x452, 0x453, 
       0x5, 0x62, 0x32, 0x2, 0x453, 0x454, 0x7, 0x55, 0x2, 0x2, 0x454, 0x455, 
       0x7, 0x56, 0x2, 0x2, 0x455, 0x456, 0x5, 0x5e, 0x30, 0x2, 0x456, 0x457, 
       0x7, 0x57, 0x2, 0x2, 0x457, 0x458, 0x7, 0x83, 0x2, 0x2, 0x458, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x459, 0x45a, 0x7, 0x29, 0x2, 0x2, 0x45a, 0x45b, 
       0x7, 0x56, 0x2, 0x2, 0x45b, 0x45d, 0x5, 0x72, 0x3a, 0x2, 0x45c, 0x45e, 
       0x5, 0x6e, 0x38, 0x2, 0x45d, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45e, 
       0x3, 0x2, 0x2, 0x2, 0x45e, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x461, 
       0x7, 0x83, 0x2, 0x2, 0x460, 0x462, 0x5, 0x5e, 0x30, 0x2, 0x461, 0x460, 
       0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 
       0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 0x7, 0x57, 0x2, 0x2, 0x464, 0x465, 
       0x5, 0x62, 0x32, 0x2, 0x465, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x466, 0x467, 
       0x7, 0x29, 0x2, 0x2, 0x467, 0x468, 0x7, 0x56, 0x2, 0x2, 0x468, 0x469, 
       0x5, 0x74, 0x3b, 0x2, 0x469, 0x46a, 0x7, 0x81, 0x2, 0x2, 0x46a, 0x46b, 
       0x5, 0x76, 0x3c, 0x2, 0x46b, 0x46c, 0x7, 0x57, 0x2, 0x2, 0x46c, 0x46d, 
       0x5, 0x62, 0x32, 0x2, 0x46d, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x44b, 
       0x3, 0x2, 0x2, 0x2, 0x46e, 0x451, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x459, 
       0x3, 0x2, 0x2, 0x2, 0x46e, 0x466, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x71, 
       0x3, 0x2, 0x2, 0x2, 0x470, 0x473, 0x5, 0x66, 0x34, 0x2, 0x471, 0x473, 
       0x5, 0x84, 0x43, 0x2, 0x472, 0x470, 0x3, 0x2, 0x2, 0x2, 0x472, 0x471, 
       0x3, 0x2, 0x2, 0x2, 0x473, 0x73, 0x3, 0x2, 0x2, 0x2, 0x474, 0x476, 
       0x5, 0xd6, 0x6c, 0x2, 0x475, 0x474, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 
       0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 
       0x5, 0x8e, 0x48, 0x2, 0x478, 0x479, 0x5, 0xf0, 0x79, 0x2, 0x479, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x47d, 0x5, 0x5e, 0x30, 0x2, 0x47b, 
       0x47d, 0x5, 0x122, 0x92, 0x2, 0x47c, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x47c, 
       0x47b, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x77, 0x3, 0x2, 0x2, 0x2, 0x47e, 
       0x47f, 0x7, 0x10, 0x2, 0x2, 0x47f, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x480, 
       0x481, 0x7, 0x1a, 0x2, 0x2, 0x481, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x482, 
       0x484, 0x7, 0x3c, 0x2, 0x2, 0x483, 0x485, 0x5, 0x5e, 0x30, 0x2, 0x484, 
       0x483, 0x3, 0x2, 0x2, 0x2, 0x484, 0x485, 0x3, 0x2, 0x2, 0x2, 0x485, 
       0x486, 0x3, 0x2, 0x2, 0x2, 0x486, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x487, 
       0x488, 0x7, 0x3c, 0x2, 0x2, 0x488, 0x489, 0x5, 0x122, 0x92, 0x2, 
       0x489, 0x48a, 0x7, 0x83, 0x2, 0x2, 0x48a, 0x48f, 0x3, 0x2, 0x2, 0x2, 
       0x48b, 0x48c, 0x7, 0x2b, 0x2, 0x2, 0x48c, 0x48d, 0x7, 0x87, 0x2, 
       0x2, 0x48d, 0x48f, 0x7, 0x83, 0x2, 0x2, 0x48e, 0x47e, 0x3, 0x2, 0x2, 
       0x2, 0x48e, 0x480, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x482, 0x3, 0x2, 0x2, 
       0x2, 0x48e, 0x487, 0x3, 0x2, 0x2, 0x2, 0x48e, 0x48b, 0x3, 0x2, 0x2, 
       0x2, 0x48f, 0x79, 0x3, 0x2, 0x2, 0x2, 0x490, 0x491, 0x5, 0x80, 0x41, 
       0x2, 0x491, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x492, 0x493, 0x8, 0x3f, 0x1, 
       0x2, 0x493, 0x494, 0x5, 0x7e, 0x40, 0x2, 0x494, 0x499, 0x3, 0x2, 
       0x2, 0x2, 0x495, 0x496, 0xc, 0x3, 0x2, 0x2, 0x496, 0x498, 0x5, 0x7e, 
       0x40, 0x2, 0x497, 0x495, 0x3, 0x2, 0x2, 0x2, 0x498, 0x49b, 0x3, 0x2, 
       0x2, 0x2, 0x499, 0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x3, 0x2, 
       0x2, 0x2, 0x49a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x499, 0x3, 0x2, 
       0x2, 0x2, 0x49c, 0x4a6, 0x5, 0x80, 0x41, 0x2, 0x49d, 0x4a6, 0x5, 
       0x116, 0x8c, 0x2, 0x49e, 0x4a6, 0x5, 0x15c, 0xaf, 0x2, 0x49f, 0x4a6, 
       0x5, 0x170, 0xb9, 0x2, 0x4a0, 0x4a6, 0x5, 0x172, 0xba, 0x2, 0x4a1, 
       0x4a6, 0x5, 0xd4, 0x6b, 0x2, 0x4a2, 0x4a6, 0x5, 0xbc, 0x5f, 0x2, 
       0x4a3, 0x4a6, 0x5, 0x88, 0x45, 0x2, 0x4a4, 0x4a6, 0x5, 0x8a, 0x46, 
       0x2, 0x4a5, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x49d, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x49f, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a1, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a3, 0x3, 0x2, 0x2, 
       0x2, 0x4a5, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x7f, 0x3, 0x2, 0x2, 
       0x2, 0x4a7, 0x4b0, 0x5, 0x84, 0x43, 0x2, 0x4a8, 0x4b0, 0x5, 0xd2, 
       0x6a, 0x2, 0x4a9, 0x4b0, 0x5, 0xca, 0x66, 0x2, 0x4aa, 0x4b0, 0x5, 
       0xce, 0x68, 0x2, 0x4ab, 0x4b0, 0x5, 0xd0, 0x69, 0x2, 0x4ac, 0x4b0, 
       0x5, 0x86, 0x44, 0x2, 0x4ad, 0x4b0, 0x5, 0x82, 0x42, 0x2, 0x4ae, 
       0x4b0, 0x5, 0xac, 0x57, 0x2, 0x4af, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x81, 0x3, 0x2, 0x2, 0x2, 0x4b1, 
       0x4b2, 0x7, 0x50, 0x2, 0x2, 0x4b2, 0x4b4, 0x7, 0x87, 0x2, 0x2, 0x4b3, 
       0x4b5, 0x5, 0xd6, 0x6c, 0x2, 0x4b4, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b4, 
       0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4b6, 
       0x4b7, 0x7, 0x66, 0x2, 0x2, 0x4b7, 0x4b8, 0x5, 0x104, 0x83, 0x2, 
       0x4b8, 0x4b9, 0x7, 0x83, 0x2, 0x2, 0x4b9, 0x83, 0x3, 0x2, 0x2, 0x2, 
       0x4ba, 0x4bc, 0x5, 0x8e, 0x48, 0x2, 0x4bb, 0x4ba, 0x3, 0x2, 0x2, 
       0x2, 0x4bb, 0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4be, 0x3, 0x2, 0x2, 
       0x2, 0x4bd, 0x4bf, 0x5, 0xec, 0x77, 0x2, 0x4be, 0x4bd, 0x3, 0x2, 
       0x2, 0x2, 0x4be, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 0x3, 0x2, 
       0x2, 0x2, 0x4c0, 0x4c9, 0x7, 0x83, 0x2, 0x2, 0x4c1, 0x4c3, 0x5, 0xd6, 
       0x6c, 0x2, 0x4c2, 0x4c4, 0x5, 0x8e, 0x48, 0x2, 0x4c3, 0x4c2, 0x3, 
       0x2, 0x2, 0x2, 0x4c3, 0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c5, 0x3, 
       0x2, 0x2, 0x2, 0x4c5, 0x4c6, 0x5, 0xec, 0x77, 0x2, 0x4c6, 0x4c7, 
       0x7, 0x83, 0x2, 0x2, 0x4c7, 0x4c9, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4bb, 
       0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x85, 
       0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x7, 0x41, 0x2, 0x2, 0x4cb, 0x4cc, 
       0x7, 0x56, 0x2, 0x2, 0x4cc, 0x4cd, 0x5, 0x60, 0x31, 0x2, 0x4cd, 0x4ce, 
       0x7, 0x7d, 0x2, 0x2, 0x4ce, 0x4cf, 0x7, 0x90, 0x2, 0x2, 0x4cf, 0x4d0, 
       0x7, 0x57, 0x2, 0x2, 0x4d0, 0x4d1, 0x7, 0x83, 0x2, 0x2, 0x4d1, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d3, 0x7, 0x83, 0x2, 0x2, 0x4d3, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d5, 0x5, 0xd6, 0x6c, 0x2, 0x4d5, 0x4d6, 
       0x7, 0x83, 0x2, 0x2, 0x4d6, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4de, 
       0x5, 0x90, 0x49, 0x2, 0x4d8, 0x4de, 0x5, 0x96, 0x4c, 0x2, 0x4d9, 
       0x4de, 0x5, 0x92, 0x4a, 0x2, 0x4da, 0x4de, 0x7, 0x2a, 0x2, 0x2, 0x4db, 
       0x4de, 0x7, 0x4b, 0x2, 0x2, 0x4dc, 0x4de, 0x7, 0x18, 0x2, 0x2, 0x4dd, 
       0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4dd, 
       0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dd, 
       0x4db, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4de, 
       0x8d, 0x3, 0x2, 0x2, 0x2, 0x4df, 0x4e1, 0x5, 0x8c, 0x47, 0x2, 0x4e0, 
       0x4e2, 0x5, 0xd6, 0x6c, 0x2, 0x4e1, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4e1, 
       0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e3, 
       0x4e4, 0x5, 0x8c, 0x47, 0x2, 0x4e4, 0x4e5, 0x5, 0x8e, 0x48, 0x2, 
       0x4e5, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4df, 0x3, 0x2, 0x2, 0x2, 
       0x4e6, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x8f, 0x3, 0x2, 0x2, 0x2, 
       0x4e8, 0x4e9, 0x9, 0x6, 0x2, 0x2, 0x4e9, 0x91, 0x3, 0x2, 0x2, 0x2, 
       0x4ea, 0x4eb, 0x9, 0x7, 0x2, 0x2, 0x4eb, 0x93, 0x3, 0x2, 0x2, 0x2, 
       0x4ec, 0x4ed, 0x7, 0x87, 0x2, 0x2, 0x4ed, 0x95, 0x3, 0x2, 0x2, 0x2, 
       0x4ee, 0x4f2, 0x5, 0x98, 0x4d, 0x2, 0x4ef, 0x4f2, 0x5, 0x126, 0x94, 
       0x2, 0x4f0, 0x4f2, 0x5, 0xa8, 0x55, 0x2, 0x4f1, 0x4ee, 0x3, 0x2, 
       0x2, 0x2, 0x4f1, 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f0, 0x3, 0x2, 
       0x2, 0x2, 0x4f2, 0x97, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4f8, 0x5, 0x9e, 
       0x50, 0x2, 0x4f4, 0x4f8, 0x5, 0xa4, 0x53, 0x2, 0x4f5, 0x4f8, 0x5, 
       0x16e, 0xb8, 0x2, 0x4f6, 0x4f8, 0x5, 0xfe, 0x80, 0x2, 0x4f7, 0x4f3, 
       0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f5, 
       0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x99, 
       0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4fb, 0x5, 0x96, 0x4c, 0x2, 0x4fa, 0x4fc, 
       0x5, 0xd6, 0x6c, 0x2, 0x4fb, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fc, 
       0x3, 0x2, 0x2, 0x2, 0x4fc, 0x501, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fe, 
       0x5, 0x96, 0x4c, 0x2, 0x4fe, 0x4ff, 0x5, 0x9a, 0x4e, 0x2, 0x4ff, 
       0x501, 0x3, 0x2, 0x2, 0x2, 0x500, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x500, 
       0x4fd, 0x3, 0x2, 0x2, 0x2, 0x501, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x502, 
       0x504, 0x5, 0x98, 0x4d, 0x2, 0x503, 0x505, 0x5, 0xd6, 0x6c, 0x2, 
       0x504, 0x503, 0x3, 0x2, 0x2, 0x2, 0x504, 0x505, 0x3, 0x2, 0x2, 0x2, 
       0x505, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x506, 0x507, 0x5, 0x98, 0x4d, 
       0x2, 0x507, 0x508, 0x5, 0x9c, 0x4f, 0x2, 0x508, 0x50a, 0x3, 0x2, 
       0x2, 0x2, 0x509, 0x502, 0x3, 0x2, 0x2, 0x2, 0x509, 0x506, 0x3, 0x2, 
       0x2, 0x2, 0x50a, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x50d, 0x5, 0xc, 
       0x7, 0x2, 0x50c, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50d, 0x3, 0x2, 
       0x2, 0x2, 0x50d, 0x50e, 0x3, 0x2, 0x2, 0x2, 0x50e, 0x523, 0x5, 0xa0, 
       0x51, 0x2, 0x50f, 0x510, 0x5, 0xc, 0x7, 0x2, 0x510, 0x511, 0x7, 0x45, 
       0x2, 0x2, 0x511, 0x512, 0x5, 0x164, 0xb3, 0x2, 0x512, 0x523, 0x3, 
       0x2, 0x2, 0x2, 0x513, 0x523, 0x7, 0x13, 0x2, 0x2, 0x514, 0x523, 0x7, 
       0x14, 0x2, 0x2, 0x515, 0x523, 0x7, 0x15, 0x2, 0x2, 0x516, 0x523, 
       0x7, 0x54, 0x2, 0x2, 0x517, 0x523, 0x7, 0xf, 0x2, 0x2, 0x518, 0x523, 
       0x7, 0x3d, 0x2, 0x2, 0x519, 0x523, 0x7, 0x2e, 0x2, 0x2, 0x51a, 0x523, 
       0x7, 0x2f, 0x2, 0x2, 0x51b, 0x523, 0x7, 0x3e, 0x2, 0x2, 0x51c, 0x523, 
       0x7, 0x4f, 0x2, 0x2, 0x51d, 0x523, 0x7, 0x28, 0x2, 0x2, 0x51e, 0x523, 
       0x7, 0x1f, 0x2, 0x2, 0x51f, 0x523, 0x7, 0x52, 0x2, 0x2, 0x520, 0x523, 
       0x7, 0xe, 0x2, 0x2, 0x521, 0x523, 0x5, 0xa2, 0x52, 0x2, 0x522, 0x50c, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x522, 0x513, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x514, 0x3, 0x2, 0x2, 0x2, 0x522, 0x515, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x516, 0x3, 0x2, 0x2, 0x2, 0x522, 0x517, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x518, 0x3, 0x2, 0x2, 0x2, 0x522, 0x519, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x51a, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51b, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51d, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x522, 0x51f, 
       0x3, 0x2, 0x2, 0x2, 0x522, 0x520, 0x3, 0x2, 0x2, 0x2, 0x522, 0x521, 
       0x3, 0x2, 0x2, 0x2, 0x523, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x524, 0x529, 
       0x5, 0x124, 0x93, 0x2, 0x525, 0x529, 0x5, 0xa6, 0x54, 0x2, 0x526, 
       0x529, 0x5, 0x94, 0x4b, 0x2, 0x527, 0x529, 0x5, 0x164, 0xb3, 0x2, 
       0x528, 0x524, 0x3, 0x2, 0x2, 0x2, 0x528, 0x525, 0x3, 0x2, 0x2, 0x2, 
       0x528, 0x526, 0x3, 0x2, 0x2, 0x2, 0x528, 0x527, 0x3, 0x2, 0x2, 0x2, 
       0x529, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x52a, 0x52b, 0x7, 0x1b, 0x2, 0x2, 
       0x52b, 0x52c, 0x7, 0x56, 0x2, 0x2, 0x52c, 0x52d, 0x5, 0x5e, 0x30, 
       0x2, 0x52d, 0x52e, 0x7, 0x57, 0x2, 0x2, 0x52e, 0x534, 0x3, 0x2, 0x2, 
       0x2, 0x52f, 0x530, 0x7, 0x1b, 0x2, 0x2, 0x530, 0x531, 0x7, 0x56, 
       0x2, 0x2, 0x531, 0x532, 0x7, 0xe, 0x2, 0x2, 0x532, 0x534, 0x7, 0x57, 
       0x2, 0x2, 0x533, 0x52a, 0x3, 0x2, 0x2, 0x2, 0x533, 0x52f, 0x3, 0x2, 
       0x2, 0x2, 0x534, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x535, 0x537, 0x5, 0x12e, 
       0x98, 0x2, 0x536, 0x538, 0x5, 0xd6, 0x6c, 0x2, 0x537, 0x536, 0x3, 
       0x2, 0x2, 0x2, 0x537, 0x538, 0x3, 0x2, 0x2, 0x2, 0x538, 0x53a, 0x3, 
       0x2, 0x2, 0x2, 0x539, 0x53b, 0x5, 0xc, 0x7, 0x2, 0x53a, 0x539, 0x3, 
       0x2, 0x2, 0x2, 0x53a, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x53c, 0x3, 
       0x2, 0x2, 0x2, 0x53c, 0x53d, 0x7, 0x87, 0x2, 0x2, 0x53d, 0x54e, 0x3, 
       0x2, 0x2, 0x2, 0x53e, 0x53f, 0x5, 0x12e, 0x98, 0x2, 0x53f, 0x540, 
       0x5, 0x164, 0xb3, 0x2, 0x540, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x541, 0x542, 
       0x5, 0x12e, 0x98, 0x2, 0x542, 0x544, 0x5, 0xc, 0x7, 0x2, 0x543, 0x545, 
       0x7, 0x45, 0x2, 0x2, 0x544, 0x543, 0x3, 0x2, 0x2, 0x2, 0x544, 0x545, 
       0x3, 0x2, 0x2, 0x2, 0x545, 0x546, 0x3, 0x2, 0x2, 0x2, 0x546, 0x547, 
       0x5, 0x164, 0xb3, 0x2, 0x547, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x548, 0x54a, 
       0x7, 0x22, 0x2, 0x2, 0x549, 0x54b, 0x5, 0xc, 0x7, 0x2, 0x54a, 0x549, 
       0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54b, 0x54c, 
       0x3, 0x2, 0x2, 0x2, 0x54c, 0x54e, 0x7, 0x87, 0x2, 0x2, 0x54d, 0x535, 
       0x3, 0x2, 0x2, 0x2, 0x54d, 0x53e, 0x3, 0x2, 0x2, 0x2, 0x54d, 0x541, 
       0x3, 0x2, 0x2, 0x2, 0x54d, 0x548, 0x3, 0x2, 0x2, 0x2, 0x54e, 0xa5, 
       0x3, 0x2, 0x2, 0x2, 0x54f, 0x550, 0x7, 0x87, 0x2, 0x2, 0x550, 0xa7, 
       0x3, 0x2, 0x2, 0x2, 0x551, 0x552, 0x5, 0xaa, 0x56, 0x2, 0x552, 0x554, 
       0x7, 0x5a, 0x2, 0x2, 0x553, 0x555, 0x5, 0xb2, 0x5a, 0x2, 0x554, 0x553, 
       0x3, 0x2, 0x2, 0x2, 0x554, 0x555, 0x3, 0x2, 0x2, 0x2, 0x555, 0x556, 
       0x3, 0x2, 0x2, 0x2, 0x556, 0x557, 0x7, 0x5b, 0x2, 0x2, 0x557, 0x55f, 
       0x3, 0x2, 0x2, 0x2, 0x558, 0x559, 0x5, 0xaa, 0x56, 0x2, 0x559, 0x55a, 
       0x7, 0x5a, 0x2, 0x2, 0x55a, 0x55b, 0x5, 0xb2, 0x5a, 0x2, 0x55b, 0x55c, 
       0x7, 0x7d, 0x2, 0x2, 0x55c, 0x55d, 0x7, 0x5b, 0x2, 0x2, 0x55d, 0x55f, 
       0x3, 0x2, 0x2, 0x2, 0x55e, 0x551, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x558, 
       0x3, 0x2, 0x2, 0x2, 0x55f, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x560, 0x562, 
       0x5, 0xae, 0x58, 0x2, 0x561, 0x563, 0x5, 0xd6, 0x6c, 0x2, 0x562, 
       0x561, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 0x3, 0x2, 0x2, 0x2, 0x563, 
       0x565, 0x3, 0x2, 0x2, 0x2, 0x564, 0x566, 0x7, 0x87, 0x2, 0x2, 0x565, 
       0x564, 0x3, 0x2, 0x2, 0x2, 0x565, 0x566, 0x3, 0x2, 0x2, 0x2, 0x566, 
       0x568, 0x3, 0x2, 0x2, 0x2, 0x567, 0x569, 0x5, 0xb0, 0x59, 0x2, 0x568, 
       0x567, 0x3, 0x2, 0x2, 0x2, 0x568, 0x569, 0x3, 0x2, 0x2, 0x2, 0x569, 
       0x574, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x56c, 0x5, 0xae, 0x58, 0x2, 0x56b, 
       0x56d, 0x5, 0xd6, 0x6c, 0x2, 0x56c, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x56c, 
       0x56d, 0x3, 0x2, 0x2, 0x2, 0x56d, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x56e, 
       0x56f, 0x5, 0xc, 0x7, 0x2, 0x56f, 0x571, 0x7, 0x87, 0x2, 0x2, 0x570, 
       0x572, 0x5, 0xb0, 0x59, 0x2, 0x571, 0x570, 0x3, 0x2, 0x2, 0x2, 0x571, 
       0x572, 0x3, 0x2, 0x2, 0x2, 0x572, 0x574, 0x3, 0x2, 0x2, 0x2, 0x573, 
       0x560, 0x3, 0x2, 0x2, 0x2, 0x573, 0x56a, 0x3, 0x2, 0x2, 0x2, 0x574, 
       0xab, 0x3, 0x2, 0x2, 0x2, 0x575, 0x577, 0x5, 0xae, 0x58, 0x2, 0x576, 
       0x578, 0x5, 0xd6, 0x6c, 0x2, 0x577, 0x576, 0x3, 0x2, 0x2, 0x2, 0x577, 
       0x578, 0x3, 0x2, 0x2, 0x2, 0x578, 0x579, 0x3, 0x2, 0x2, 0x2, 0x579, 
       0x57b, 0x7, 0x87, 0x2, 0x2, 0x57a, 0x57c, 0x5, 0xb0, 0x59, 0x2, 0x57b, 
       0x57a, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x57c, 0x3, 0x2, 0x2, 0x2, 0x57c, 
       0x57d, 0x3, 0x2, 0x2, 0x2, 0x57d, 0x57e, 0x7, 0x83, 0x2, 0x2, 0x57e, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x585, 0x7, 0x22, 0x2, 0x2, 0x580, 
       0x581, 0x7, 0x22, 0x2, 0x2, 0x581, 0x585, 0x7, 0x16, 0x2, 0x2, 0x582, 
       0x583, 0x7, 0x22, 0x2, 0x2, 0x583, 0x585, 0x7, 0x43, 0x2, 0x2, 0x584, 
       0x57f, 0x3, 0x2, 0x2, 0x2, 0x584, 0x580, 0x3, 0x2, 0x2, 0x2, 0x584, 
       0x582, 0x3, 0x2, 0x2, 0x2, 0x585, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x586, 
       0x587, 0x7, 0x81, 0x2, 0x2, 0x587, 0x588, 0x5, 0x9a, 0x4e, 0x2, 0x588, 
       0xb1, 0x3, 0x2, 0x2, 0x2, 0x589, 0x58a, 0x8, 0x5a, 0x1, 0x2, 0x58a, 
       0x58b, 0x5, 0xb4, 0x5b, 0x2, 0x58b, 0x591, 0x3, 0x2, 0x2, 0x2, 0x58c, 
       0x58d, 0xc, 0x3, 0x2, 0x2, 0x58d, 0x58e, 0x7, 0x7d, 0x2, 0x2, 0x58e, 
       0x590, 0x5, 0xb4, 0x5b, 0x2, 0x58f, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x590, 
       0x593, 0x3, 0x2, 0x2, 0x2, 0x591, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x591, 
       0x592, 0x3, 0x2, 0x2, 0x2, 0x592, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x593, 
       0x591, 0x3, 0x2, 0x2, 0x2, 0x594, 0x59a, 0x5, 0xb6, 0x5c, 0x2, 0x595, 
       0x596, 0x5, 0xb6, 0x5c, 0x2, 0x596, 0x597, 0x7, 0x66, 0x2, 0x2, 0x597, 
       0x598, 0x5, 0x60, 0x31, 0x2, 0x598, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x599, 
       0x594, 0x3, 0x2, 0x2, 0x2, 0x599, 0x595, 0x3, 0x2, 0x2, 0x2, 0x59a, 
       0xb5, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x59c, 0x7, 0x87, 0x2, 0x2, 0x59c, 
       0xb7, 0x3, 0x2, 0x2, 0x2, 0x59d, 0x5a0, 0x5, 0xba, 0x5e, 0x2, 0x59e, 
       0x5a0, 0x5, 0xc8, 0x65, 0x2, 0x59f, 0x59d, 0x3, 0x2, 0x2, 0x2, 0x59f, 
       0x59e, 0x3, 0x2, 0x2, 0x2, 0x5a0, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x5a1, 
       0x5a2, 0x7, 0x87, 0x2, 0x2, 0x5a2, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x5a3, 
       0x5a6, 0x5, 0xbe, 0x60, 0x2, 0x5a4, 0x5a6, 0x5, 0xc4, 0x63, 0x2, 
       0x5a5, 0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a4, 0x3, 0x2, 0x2, 0x2, 
       0x5a6, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x5aa, 0x5, 0xc0, 0x61, 0x2, 
       0x5a8, 0x5aa, 0x5, 0xc2, 0x62, 0x2, 0x5a9, 0x5a7, 0x3, 0x2, 0x2, 
       0x2, 0x5a9, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0xbf, 0x3, 0x2, 0x2, 
       0x2, 0x5ab, 0x5ad, 0x7, 0x2d, 0x2, 0x2, 0x5ac, 0x5ab, 0x3, 0x2, 0x2, 
       0x2, 0x5ac, 0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ae, 0x3, 0x2, 0x2, 
       0x2, 0x5ae, 0x5af, 0x7, 0x31, 0x2, 0x2, 0x5af, 0x5b0, 0x7, 0x87, 
       0x2, 0x2, 0x5b0, 0x5b1, 0x7, 0x5a, 0x2, 0x2, 0x5b1, 0x5b2, 0x5, 0xc6, 
       0x64, 0x2, 0x5b2, 0x5b3, 0x7, 0x5b, 0x2, 0x2, 0x5b3, 0xc1, 0x3, 0x2, 
       0x2, 0x2, 0x5b4, 0x5b6, 0x7, 0x2d, 0x2, 0x2, 0x5b5, 0x5b4, 0x3, 0x2, 
       0x2, 0x2, 0x5b5, 0x5b6, 0x3, 0x2, 0x2, 0x2, 0x5b6, 0x5b7, 0x3, 0x2, 
       0x2, 0x2, 0x5b7, 0x5b8, 0x7, 0x31, 0x2, 0x2, 0x5b8, 0x5b9, 0x5, 0xba, 
       0x5e, 0x2, 0x5b9, 0x5ba, 0x7, 0x5a, 0x2, 0x2, 0x5ba, 0x5bb, 0x5, 
       0xc6, 0x64, 0x2, 0x5bb, 0x5bc, 0x7, 0x5b, 0x2, 0x2, 0x5bc, 0xc3, 
       0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5bf, 0x7, 0x2d, 0x2, 0x2, 0x5be, 0x5bd, 
       0x3, 0x2, 0x2, 0x2, 0x5be, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c0, 
       0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c1, 0x7, 0x31, 0x2, 0x2, 0x5c1, 0x5c2, 
       0x7, 0x5a, 0x2, 0x2, 0x5c2, 0x5c3, 0x5, 0xc6, 0x64, 0x2, 0x5c3, 0x5c4, 
       0x7, 0x5b, 0x2, 0x2, 0x5c4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x5c7, 
       0x5, 0x7c, 0x3f, 0x2, 0x5c6, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c7, 
       0x3, 0x2, 0x2, 0x2, 0x5c7, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c9, 
       0x7, 0x87, 0x2, 0x2, 0x5c9, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x5ca, 0x5cb, 
       0x7, 0x31, 0x2, 0x2, 0x5cb, 0x5cc, 0x7, 0x87, 0x2, 0x2, 0x5cc, 0x5cd, 
       0x7, 0x66, 0x2, 0x2, 0x5cd, 0x5ce, 0x5, 0xcc, 0x67, 0x2, 0x5ce, 0x5cf, 
       0x7, 0x83, 0x2, 0x2, 0x5cf, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d2, 
       0x5, 0xc, 0x7, 0x2, 0x5d1, 0x5d0, 0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5d2, 
       0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5d4, 
       0x5, 0xb8, 0x5d, 0x2, 0x5d4, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d7, 
       0x7, 0x50, 0x2, 0x2, 0x5d6, 0x5d8, 0x7, 0x4d, 0x2, 0x2, 0x5d7, 0x5d6, 
       0x3, 0x2, 0x2, 0x2, 0x5d7, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d9, 
       0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5da, 0x5, 0xc, 0x7, 0x2, 0x5da, 0x5db, 
       0x5, 0x8, 0x5, 0x2, 0x5db, 0x5dc, 0x7, 0x83, 0x2, 0x2, 0x5dc, 0x5e3, 
       0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 0x7, 0x50, 0x2, 0x2, 0x5de, 0x5df, 
       0x7, 0x82, 0x2, 0x2, 0x5df, 0x5e0, 0x5, 0x8, 0x5, 0x2, 0x5e0, 0x5e1, 
       0x7, 0x83, 0x2, 0x2, 0x5e1, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5d5, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5e3, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5e6, 0x5, 0xd6, 0x6c, 0x2, 0x5e5, 0x5e4, 
       0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e6, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e7, 
       0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5e8, 0x7, 0x50, 0x2, 0x2, 0x5e8, 0x5ea, 
       0x7, 0x31, 0x2, 0x2, 0x5e9, 0x5eb, 0x5, 0xc, 0x7, 0x2, 0x5ea, 0x5e9, 
       0x3, 0x2, 0x2, 0x2, 0x5ea, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5ec, 
       0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ed, 0x5, 0xb8, 0x5d, 0x2, 0x5ed, 0x5ee, 
       0x7, 0x83, 0x2, 0x2, 0x5ee, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x5ef, 0x5f0, 
       0x7, 0xd, 0x2, 0x2, 0x5f0, 0x5f1, 0x7, 0x56, 0x2, 0x2, 0x5f1, 0x5f2, 
       0x7, 0x90, 0x2, 0x2, 0x5f2, 0x5f3, 0x7, 0x57, 0x2, 0x2, 0x5f3, 0x5f4, 
       0x7, 0x83, 0x2, 0x2, 0x5f4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x5f5, 0x5f6, 
       0x7, 0x25, 0x2, 0x2, 0x5f6, 0x5f7, 0x7, 0x90, 0x2, 0x2, 0x5f7, 0x5f9, 
       0x7, 0x5a, 0x2, 0x2, 0x5f8, 0x5fa, 0x5, 0x7c, 0x3f, 0x2, 0x5f9, 0x5f8, 
       0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fb, 
       0x3, 0x2, 0x2, 0x2, 0x5fb, 0x600, 0x7, 0x5b, 0x2, 0x2, 0x5fc, 0x5fd, 
       0x7, 0x25, 0x2, 0x2, 0x5fd, 0x5fe, 0x7, 0x90, 0x2, 0x2, 0x5fe, 0x600, 
       0x5, 0x7e, 0x40, 0x2, 0x5ff, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5ff, 0x5fc, 
       0x3, 0x2, 0x2, 0x2, 0x600, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x601, 0x602, 
       0x8, 0x6c, 0x1, 0x2, 0x602, 0x603, 0x5, 0xd8, 0x6d, 0x2, 0x603, 0x608, 
       0x3, 0x2, 0x2, 0x2, 0x604, 0x605, 0xc, 0x3, 0x2, 0x2, 0x605, 0x607, 
       0x5, 0xd8, 0x6d, 0x2, 0x606, 0x604, 0x3, 0x2, 0x2, 0x2, 0x607, 0x60a, 
       0x3, 0x2, 0x2, 0x2, 0x608, 0x606, 0x3, 0x2, 0x2, 0x2, 0x608, 0x609, 
       0x3, 0x2, 0x2, 0x2, 0x609, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x60a, 0x608, 
       0x3, 0x2, 0x2, 0x2, 0x60b, 0x60c, 0x7, 0x58, 0x2, 0x2, 0x60c, 0x60d, 
       0x7, 0x58, 0x2, 0x2, 0x60d, 0x60e, 0x5, 0xdc, 0x6f, 0x2, 0x60e, 0x60f, 
       0x7, 0x59, 0x2, 0x2, 0x60f, 0x610, 0x7, 0x59, 0x2, 0x2, 0x610, 0x613, 
       0x3, 0x2, 0x2, 0x2, 0x611, 0x613, 0x5, 0xda, 0x6e, 0x2, 0x612, 0x60b, 
       0x3, 0x2, 0x2, 0x2, 0x612, 0x611, 0x3, 0x2, 0x2, 0x2, 0x613, 0xd9, 
       0x3, 0x2, 0x2, 0x2, 0x614, 0x615, 0x7, 0xb, 0x2, 0x2, 0x615, 0x616, 
       0x7, 0x56, 0x2, 0x2, 0x616, 0x618, 0x5, 0x104, 0x83, 0x2, 0x617, 
       0x619, 0x7, 0x86, 0x2, 0x2, 0x618, 0x617, 0x3, 0x2, 0x2, 0x2, 0x618, 
       0x619, 0x3, 0x2, 0x2, 0x2, 0x619, 0x61a, 0x3, 0x2, 0x2, 0x2, 0x61a, 
       0x61b, 0x7, 0x57, 0x2, 0x2, 0x61b, 0x625, 0x3, 0x2, 0x2, 0x2, 0x61c, 
       0x61d, 0x7, 0xb, 0x2, 0x2, 0x61d, 0x61e, 0x7, 0x56, 0x2, 0x2, 0x61e, 
       0x620, 0x5, 0x60, 0x31, 0x2, 0x61f, 0x621, 0x7, 0x86, 0x2, 0x2, 0x620, 
       0x61f, 0x3, 0x2, 0x2, 0x2, 0x620, 0x621, 0x3, 0x2, 0x2, 0x2, 0x621, 
       0x622, 0x3, 0x2, 0x2, 0x2, 0x622, 0x623, 0x7, 0x57, 0x2, 0x2, 0x623, 
       0x625, 0x3, 0x2, 0x2, 0x2, 0x624, 0x614, 0x3, 0x2, 0x2, 0x2, 0x624, 
       0x61c, 0x3, 0x2, 0x2, 0x2, 0x625, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x626, 
       0x628, 0x8, 0x6f, 0x1, 0x2, 0x627, 0x629, 0x5, 0xde, 0x70, 0x2, 0x628, 
       0x627, 0x3, 0x2, 0x2, 0x2, 0x628, 0x629, 0x3, 0x2, 0x2, 0x2, 0x629, 
       0x62e, 0x3, 0x2, 0x2, 0x2, 0x62a, 0x62b, 0x5, 0xde, 0x70, 0x2, 0x62b, 
       0x62c, 0x7, 0x86, 0x2, 0x2, 0x62c, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x62d, 
       0x626, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x62a, 0x3, 0x2, 0x2, 0x2, 0x62e, 
       0x63b, 0x3, 0x2, 0x2, 0x2, 0x62f, 0x630, 0xc, 0x5, 0x2, 0x2, 0x630, 
       0x632, 0x7, 0x7d, 0x2, 0x2, 0x631, 0x633, 0x5, 0xde, 0x70, 0x2, 0x632, 
       0x631, 0x3, 0x2, 0x2, 0x2, 0x632, 0x633, 0x3, 0x2, 0x2, 0x2, 0x633, 
       0x63a, 0x3, 0x2, 0x2, 0x2, 0x634, 0x635, 0xc, 0x3, 0x2, 0x2, 0x635, 
       0x636, 0x7, 0x7d, 0x2, 0x2, 0x636, 0x637, 0x5, 0xde, 0x70, 0x2, 0x637, 
       0x638, 0x7, 0x86, 0x2, 0x2, 0x638, 0x63a, 0x3, 0x2, 0x2, 0x2, 0x639, 
       0x62f, 0x3, 0x2, 0x2, 0x2, 0x639, 0x634, 0x3, 0x2, 0x2, 0x2, 0x63a, 
       0x63d, 0x3, 0x2, 0x2, 0x2, 0x63b, 0x639, 0x3, 0x2, 0x2, 0x2, 0x63b, 
       0x63c, 0x3, 0x2, 0x2, 0x2, 0x63c, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x63d, 
       0x63b, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x640, 0x5, 0xe0, 0x71, 0x2, 0x63f, 
       0x641, 0x5, 0xe6, 0x74, 0x2, 0x640, 0x63f, 0x3, 0x2, 0x2, 0x2, 0x640, 
       0x641, 0x3, 0x2, 0x2, 0x2, 0x641, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x642, 
       0x645, 0x7, 0x87, 0x2, 0x2, 0x643, 0x645, 0x5, 0xe2, 0x72, 0x2, 0x644, 
       0x642, 0x3, 0x2, 0x2, 0x2, 0x644, 0x643, 0x3, 0x2, 0x2, 0x2, 0x645, 
       0xe1, 0x3, 0x2, 0x2, 0x2, 0x646, 0x647, 0x5, 0xe4, 0x73, 0x2, 0x647, 
       0x648, 0x7, 0x82, 0x2, 0x2, 0x648, 0x649, 0x7, 0x87, 0x2, 0x2, 0x649, 
       0xe3, 0x3, 0x2, 0x2, 0x2, 0x64a, 0x64b, 0x7, 0x87, 0x2, 0x2, 0x64b, 
       0xe5, 0x3, 0x2, 0x2, 0x2, 0x64c, 0x64d, 0x7, 0x56, 0x2, 0x2, 0x64d, 
       0x64e, 0x5, 0xe8, 0x75, 0x2, 0x64e, 0x64f, 0x7, 0x57, 0x2, 0x2, 0x64f, 
       0xe7, 0x3, 0x2, 0x2, 0x2, 0x650, 0x652, 0x8, 0x75, 0x1, 0x2, 0x651, 
       0x653, 0x5, 0xea, 0x76, 0x2, 0x652, 0x651, 0x3, 0x2, 0x2, 0x2, 0x652, 
       0x653, 0x3, 0x2, 0x2, 0x2, 0x653, 0x658, 0x3, 0x2, 0x2, 0x2, 0x654, 
       0x655, 0xc, 0x3, 0x2, 0x2, 0x655, 0x657, 0x5, 0xea, 0x76, 0x2, 0x656, 
       0x654, 0x3, 0x2, 0x2, 0x2, 0x657, 0x65a, 0x3, 0x2, 0x2, 0x2, 0x658, 
       0x656, 0x3, 0x2, 0x2, 0x2, 0x658, 0x659, 0x3, 0x2, 0x2, 0x2, 0x659, 
       0xe9, 0x3, 0x2, 0x2, 0x2, 0x65a, 0x658, 0x3, 0x2, 0x2, 0x2, 0x65b, 
       0x65c, 0x7, 0x56, 0x2, 0x2, 0x65c, 0x65d, 0x5, 0xe8, 0x75, 0x2, 0x65d, 
       0x65e, 0x7, 0x57, 0x2, 0x2, 0x65e, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x65f, 
       0x660, 0x7, 0x58, 0x2, 0x2, 0x660, 0x661, 0x5, 0xe8, 0x75, 0x2, 0x661, 
       0x662, 0x7, 0x59, 0x2, 0x2, 0x662, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x663, 
       0x664, 0x7, 0x5a, 0x2, 0x2, 0x664, 0x665, 0x5, 0xe8, 0x75, 0x2, 0x665, 
       0x666, 0x7, 0x5b, 0x2, 0x2, 0x666, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x667, 
       0x669, 0xa, 0x8, 0x2, 0x2, 0x668, 0x667, 0x3, 0x2, 0x2, 0x2, 0x669, 
       0x66a, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x668, 0x3, 0x2, 0x2, 0x2, 0x66a, 
       0x66b, 0x3, 0x2, 0x2, 0x2, 0x66b, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x66c, 
       0x65b, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x65f, 0x3, 0x2, 0x2, 0x2, 0x66c, 
       0x663, 0x3, 0x2, 0x2, 0x2, 0x66c, 0x668, 0x3, 0x2, 0x2, 0x2, 0x66d, 
       0xeb, 0x3, 0x2, 0x2, 0x2, 0x66e, 0x66f, 0x8, 0x77, 0x1, 0x2, 0x66f, 
       0x670, 0x5, 0xee, 0x78, 0x2, 0x670, 0x676, 0x3, 0x2, 0x2, 0x2, 0x671, 
       0x672, 0xc, 0x3, 0x2, 0x2, 0x672, 0x673, 0x7, 0x7d, 0x2, 0x2, 0x673, 
       0x675, 0x5, 0xee, 0x78, 0x2, 0x674, 0x671, 0x3, 0x2, 0x2, 0x2, 0x675, 
       0x678, 0x3, 0x2, 0x2, 0x2, 0x676, 0x674, 0x3, 0x2, 0x2, 0x2, 0x676, 
       0x677, 0x3, 0x2, 0x2, 0x2, 0x677, 0xed, 0x3, 0x2, 0x2, 0x2, 0x678, 
       0x676, 0x3, 0x2, 0x2, 0x2, 0x679, 0x67b, 0x5, 0xf0, 0x79, 0x2, 0x67a, 
       0x67c, 0x5, 0x11a, 0x8e, 0x2, 0x67b, 0x67a, 0x3, 0x2, 0x2, 0x2, 0x67b, 
       0x67c, 0x3, 0x2, 0x2, 0x2, 0x67c, 0xef, 0x3, 0x2, 0x2, 0x2, 0x67d, 
       0x683, 0x5, 0xf2, 0x7a, 0x2, 0x67e, 0x67f, 0x5, 0xf4, 0x7b, 0x2, 
       0x67f, 0x680, 0x5, 0xf6, 0x7c, 0x2, 0x680, 0x681, 0x5, 0xf8, 0x7d, 
       0x2, 0x681, 0x683, 0x3, 0x2, 0x2, 0x2, 0x682, 0x67d, 0x3, 0x2, 0x2, 
       0x2, 0x682, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x683, 0xf1, 0x3, 0x2, 0x2, 
       0x2, 0x684, 0x689, 0x5, 0xf4, 0x7b, 0x2, 0x685, 0x686, 0x5, 0xfa, 
       0x7e, 0x2, 0x686, 0x687, 0x5, 0xf2, 0x7a, 0x2, 0x687, 0x689, 0x3, 
       0x2, 0x2, 0x2, 0x688, 0x684, 0x3, 0x2, 0x2, 0x2, 0x688, 0x685, 0x3, 
       0x2, 0x2, 0x2, 0x689, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x68b, 0x8, 
       0x7b, 0x1, 0x2, 0x68b, 0x68d, 0x5, 0x102, 0x82, 0x2, 0x68c, 0x68e, 
       0x5, 0xd6, 0x6c, 0x2, 0x68d, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x68d, 0x68e, 
       0x3, 0x2, 0x2, 0x2, 0x68e, 0x694, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x690, 
       0x7, 0x56, 0x2, 0x2, 0x690, 0x691, 0x5, 0xf2, 0x7a, 0x2, 0x691, 0x692, 
       0x7, 0x57, 0x2, 0x2, 0x692, 0x694, 0x3, 0x2, 0x2, 0x2, 0x693, 0x68a, 
       0x3, 0x2, 0x2, 0x2, 0x693, 0x68f, 0x3, 0x2, 0x2, 0x2, 0x694, 0x6a2, 
       0x3, 0x2, 0x2, 0x2, 0x695, 0x696, 0xc, 0x5, 0x2, 0x2, 0x696, 0x6a1, 
       0x5, 0xf6, 0x7c, 0x2, 0x697, 0x698, 0xc, 0x4, 0x2, 0x2, 0x698, 0x69a, 
       0x7, 0x58, 0x2, 0x2, 0x699, 0x69b, 0x5, 0x60, 0x31, 0x2, 0x69a, 0x699, 
       0x3, 0x2, 0x2, 0x2, 0x69a, 0x69b, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x69c, 
       0x3, 0x2, 0x2, 0x2, 0x69c, 0x69e, 0x7, 0x59, 0x2, 0x2, 0x69d, 0x69f, 
       0x5, 0xd6, 0x6c, 0x2, 0x69e, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x69f, 
       0x3, 0x2, 0x2, 0x2, 0x69f, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x695, 
       0x3, 0x2, 0x2, 0x2, 0x6a0, 0x697, 0x3, 0x2, 0x2, 0x2, 0x6a1, 0x6a4, 
       0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 
       0x3, 0x2, 0x2, 0x2, 0x6a3, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a2, 
       0x3, 0x2, 0x2, 0x2, 0x6a5, 0x6a6, 0x7, 0x56, 0x2, 0x2, 0x6a6, 0x6a7, 
       0x5, 0x110, 0x89, 0x2, 0x6a7, 0x6a9, 0x7, 0x57, 0x2, 0x2, 0x6a8, 
       0x6aa, 0x5, 0xfc, 0x7f, 0x2, 0x6a9, 0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6a9, 
       0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6ab, 
       0x6ad, 0x5, 0x100, 0x81, 0x2, 0x6ac, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6ac, 
       0x6ad, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6ae, 
       0x6b0, 0x5, 0x180, 0xc1, 0x2, 0x6af, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x6af, 
       0x6b0, 0x3, 0x2, 0x2, 0x2, 0x6b0, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6b1, 
       0x6b3, 0x5, 0xd6, 0x6c, 0x2, 0x6b2, 0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b2, 
       0x6b3, 0x3, 0x2, 0x2, 0x2, 0x6b3, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x6b4, 
       0x6b5, 0x7, 0x7f, 0x2, 0x2, 0x6b5, 0x6b7, 0x5, 0x9c, 0x4f, 0x2, 0x6b6, 
       0x6b8, 0x5, 0x106, 0x84, 0x2, 0x6b7, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6b7, 
       0x6b8, 0x3, 0x2, 0x2, 0x2, 0x6b8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x6b9, 
       0x6bb, 0x7, 0x5e, 0x2, 0x2, 0x6ba, 0x6bc, 0x5, 0xd6, 0x6c, 0x2, 0x6bb, 
       0x6ba, 0x3, 0x2, 0x2, 0x2, 0x6bb, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6bc, 
       0x6be, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6bf, 0x5, 0xfc, 0x7f, 0x2, 0x6be, 
       0x6bd, 0x3, 0x2, 0x2, 0x2, 0x6be, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6bf, 
       0x6d1, 0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6c2, 0x7, 0x62, 0x2, 0x2, 0x6c1, 
       0x6c3, 0x5, 0xd6, 0x6c, 0x2, 0x6c2, 0x6c1, 0x3, 0x2, 0x2, 0x2, 0x6c2, 
       0x6c3, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6d1, 0x3, 0x2, 0x2, 0x2, 0x6c4, 
       0x6c6, 0x7, 0x5, 0x2, 0x2, 0x6c5, 0x6c7, 0x5, 0xd6, 0x6c, 0x2, 0x6c6, 
       0x6c5, 0x3, 0x2, 0x2, 0x2, 0x6c6, 0x6c7, 0x3, 0x2, 0x2, 0x2, 0x6c7, 
       0x6d1, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c9, 0x5, 0xc, 0x7, 0x2, 0x6c9, 
       0x6cb, 0x7, 0x5e, 0x2, 0x2, 0x6ca, 0x6cc, 0x5, 0xd6, 0x6c, 0x2, 0x6cb, 
       0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6cc, 0x3, 0x2, 0x2, 0x2, 0x6cc, 
       0x6ce, 0x3, 0x2, 0x2, 0x2, 0x6cd, 0x6cf, 0x5, 0xfc, 0x7f, 0x2, 0x6ce, 
       0x6cd, 0x3, 0x2, 0x2, 0x2, 0x6ce, 0x6cf, 0x3, 0x2, 0x2, 0x2, 0x6cf, 
       0x6d1, 0x3, 0x2, 0x2, 0x2, 0x6d0, 0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6d0, 
       0x6c0, 0x3, 0x2, 0x2, 0x2, 0x6d0, 0x6c4, 0x3, 0x2, 0x2, 0x2, 0x6d0, 
       0x6c8, 0x3, 0x2, 0x2, 0x2, 0x6d1, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x6d2, 
       0x6d4, 0x5, 0xfe, 0x80, 0x2, 0x6d3, 0x6d5, 0x5, 0xfc, 0x7f, 0x2, 
       0x6d4, 0x6d3, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d5, 0x3, 0x2, 0x2, 0x2, 
       0x6d5, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d7, 0x9, 0x9, 0x2, 0x2, 
       0x6d7, 0xff, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6d9, 0x9, 0xa, 0x2, 0x2, 
       0x6d9, 0x101, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6dc, 0x7, 0x86, 0x2, 0x2, 
       0x6db, 0x6da, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6dc, 0x3, 0x2, 0x2, 0x2, 
       0x6dc, 0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0x6de, 0x5, 0x6, 0x4, 0x2, 
       0x6de, 0x103, 0x3, 0x2, 0x2, 0x2, 0x6df, 0x6e1, 0x5, 0x9a, 0x4e, 
       0x2, 0x6e0, 0x6e2, 0x5, 0x106, 0x84, 0x2, 0x6e1, 0x6e0, 0x3, 0x2, 
       0x2, 0x2, 0x6e1, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x6e2, 0x105, 0x3, 0x2, 
       0x2, 0x2, 0x6e3, 0x6ec, 0x5, 0x108, 0x85, 0x2, 0x6e4, 0x6e6, 0x5, 
       0x10a, 0x86, 0x2, 0x6e5, 0x6e4, 0x3, 0x2, 0x2, 0x2, 0x6e5, 0x6e6, 
       0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e7, 0x6e8, 
       0x5, 0xf6, 0x7c, 0x2, 0x6e8, 0x6e9, 0x5, 0xf8, 0x7d, 0x2, 0x6e9, 
       0x6ec, 0x3, 0x2, 0x2, 0x2, 0x6ea, 0x6ec, 0x5, 0x10c, 0x87, 0x2, 0x6eb, 
       0x6e3, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6e5, 0x3, 0x2, 0x2, 0x2, 0x6eb, 
       0x6ea, 0x3, 0x2, 0x2, 0x2, 0x6ec, 0x107, 0x3, 0x2, 0x2, 0x2, 0x6ed, 
       0x6f3, 0x5, 0x10a, 0x86, 0x2, 0x6ee, 0x6f0, 0x5, 0xfa, 0x7e, 0x2, 
       0x6ef, 0x6f1, 0x5, 0x108, 0x85, 0x2, 0x6f0, 0x6ef, 0x3, 0x2, 0x2, 
       0x2, 0x6f0, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6f3, 0x3, 0x2, 0x2, 
       0x2, 0x6f2, 0x6ed, 0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6ee, 0x3, 0x2, 0x2, 
       0x2, 0x6f3, 0x109, 0x3, 0x2, 0x2, 0x2, 0x6f4, 0x6f5, 0x8, 0x86, 0x1, 
       0x2, 0x6f5, 0x703, 0x5, 0xf6, 0x7c, 0x2, 0x6f6, 0x6f8, 0x7, 0x58, 
       0x2, 0x2, 0x6f7, 0x6f9, 0x5, 0x60, 0x31, 0x2, 0x6f8, 0x6f7, 0x3, 
       0x2, 0x2, 0x2, 0x6f8, 0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fa, 0x3, 
       0x2, 0x2, 0x2, 0x6fa, 0x6fc, 0x7, 0x59, 0x2, 0x2, 0x6fb, 0x6fd, 0x5, 
       0xd6, 0x6c, 0x2, 0x6fc, 0x6fb, 0x3, 0x2, 0x2, 0x2, 0x6fc, 0x6fd, 
       0x3, 0x2, 0x2, 0x2, 0x6fd, 0x703, 0x3, 0x2, 0x2, 0x2, 0x6fe, 0x6ff, 
       0x7, 0x56, 0x2, 0x2, 0x6ff, 0x700, 0x5, 0x108, 0x85, 0x2, 0x700, 
       0x701, 0x7, 0x57, 0x2, 0x2, 0x701, 0x703, 0x3, 0x2, 0x2, 0x2, 0x702, 
       0x6f4, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6f6, 0x3, 0x2, 0x2, 0x2, 0x702, 
       0x6fe, 0x3, 0x2, 0x2, 0x2, 0x703, 0x711, 0x3, 0x2, 0x2, 0x2, 0x704, 
       0x705, 0xc, 0x7, 0x2, 0x2, 0x705, 0x710, 0x5, 0xf6, 0x7c, 0x2, 0x706, 
       0x707, 0xc, 0x5, 0x2, 0x2, 0x707, 0x709, 0x7, 0x58, 0x2, 0x2, 0x708, 
       0x70a, 0x5, 0x60, 0x31, 0x2, 0x709, 0x708, 0x3, 0x2, 0x2, 0x2, 0x709, 
       0x70a, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x70b, 0x3, 0x2, 0x2, 0x2, 0x70b, 
       0x70d, 0x7, 0x59, 0x2, 0x2, 0x70c, 0x70e, 0x5, 0xd6, 0x6c, 0x2, 0x70d, 
       0x70c, 0x3, 0x2, 0x2, 0x2, 0x70d, 0x70e, 0x3, 0x2, 0x2, 0x2, 0x70e, 
       0x710, 0x3, 0x2, 0x2, 0x2, 0x70f, 0x704, 0x3, 0x2, 0x2, 0x2, 0x70f, 
       0x706, 0x3, 0x2, 0x2, 0x2, 0x710, 0x713, 0x3, 0x2, 0x2, 0x2, 0x711, 
       0x70f, 0x3, 0x2, 0x2, 0x2, 0x711, 0x712, 0x3, 0x2, 0x2, 0x2, 0x712, 
       0x10b, 0x3, 0x2, 0x2, 0x2, 0x713, 0x711, 0x3, 0x2, 0x2, 0x2, 0x714, 
       0x719, 0x5, 0x10e, 0x88, 0x2, 0x715, 0x716, 0x5, 0xfa, 0x7e, 0x2, 
       0x716, 0x717, 0x5, 0x10c, 0x87, 0x2, 0x717, 0x719, 0x3, 0x2, 0x2, 
       0x2, 0x718, 0x714, 0x3, 0x2, 0x2, 0x2, 0x718, 0x715, 0x3, 0x2, 0x2, 
       0x2, 0x719, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x71a, 0x71b, 0x8, 0x88, 0x1, 
       0x2, 0x71b, 0x71c, 0x7, 0x86, 0x2, 0x2, 0x71c, 0x72a, 0x3, 0x2, 0x2, 
       0x2, 0x71d, 0x71e, 0xc, 0x5, 0x2, 0x2, 0x71e, 0x729, 0x5, 0xf6, 0x7c, 
       0x2, 0x71f, 0x720, 0xc, 0x4, 0x2, 0x2, 0x720, 0x722, 0x7, 0x58, 0x2, 
       0x2, 0x721, 0x723, 0x5, 0x60, 0x31, 0x2, 0x722, 0x721, 0x3, 0x2, 
       0x2, 0x2, 0x722, 0x723, 0x3, 0x2, 0x2, 0x2, 0x723, 0x724, 0x3, 0x2, 
       0x2, 0x2, 0x724, 0x726, 0x7, 0x59, 0x2, 0x2, 0x725, 0x727, 0x5, 0xd6, 
       0x6c, 0x2, 0x726, 0x725, 0x3, 0x2, 0x2, 0x2, 0x726, 0x727, 0x3, 0x2, 
       0x2, 0x2, 0x727, 0x729, 0x3, 0x2, 0x2, 0x2, 0x728, 0x71d, 0x3, 0x2, 
       0x2, 0x2, 0x728, 0x71f, 0x3, 0x2, 0x2, 0x2, 0x729, 0x72c, 0x3, 0x2, 
       0x2, 0x2, 0x72a, 0x728, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x72b, 0x3, 0x2, 
       0x2, 0x2, 0x72b, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x72a, 0x3, 0x2, 
       0x2, 0x2, 0x72d, 0x72f, 0x5, 0x112, 0x8a, 0x2, 0x72e, 0x72d, 0x3, 
       0x2, 0x2, 0x2, 0x72e, 0x72f, 0x3, 0x2, 0x2, 0x2, 0x72f, 0x731, 0x3, 
       0x2, 0x2, 0x2, 0x730, 0x732, 0x7, 0x86, 0x2, 0x2, 0x731, 0x730, 0x3, 
       0x2, 0x2, 0x2, 0x731, 0x732, 0x3, 0x2, 0x2, 0x2, 0x732, 0x738, 0x3, 
       0x2, 0x2, 0x2, 0x733, 0x734, 0x5, 0x112, 0x8a, 0x2, 0x734, 0x735, 
       0x7, 0x7d, 0x2, 0x2, 0x735, 0x736, 0x7, 0x86, 0x2, 0x2, 0x736, 0x738, 
       0x3, 0x2, 0x2, 0x2, 0x737, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x737, 0x733, 
       0x3, 0x2, 0x2, 0x2, 0x738, 0x111, 0x3, 0x2, 0x2, 0x2, 0x739, 0x73a, 
       0x8, 0x8a, 0x1, 0x2, 0x73a, 0x73b, 0x5, 0x114, 0x8b, 0x2, 0x73b, 
       0x741, 0x3, 0x2, 0x2, 0x2, 0x73c, 0x73d, 0xc, 0x3, 0x2, 0x2, 0x73d, 
       0x73e, 0x7, 0x7d, 0x2, 0x2, 0x73e, 0x740, 0x5, 0x114, 0x8b, 0x2, 
       0x73f, 0x73c, 0x3, 0x2, 0x2, 0x2, 0x740, 0x743, 0x3, 0x2, 0x2, 0x2, 
       0x741, 0x73f, 0x3, 0x2, 0x2, 0x2, 0x741, 0x742, 0x3, 0x2, 0x2, 0x2, 
       0x742, 0x113, 0x3, 0x2, 0x2, 0x2, 0x743, 0x741, 0x3, 0x2, 0x2, 0x2, 
       0x744, 0x746, 0x5, 0xd6, 0x6c, 0x2, 0x745, 0x744, 0x3, 0x2, 0x2, 
       0x2, 0x745, 0x746, 0x3, 0x2, 0x2, 0x2, 0x746, 0x747, 0x3, 0x2, 0x2, 
       0x2, 0x747, 0x748, 0x5, 0x8e, 0x48, 0x2, 0x748, 0x749, 0x5, 0xf0, 
       0x79, 0x2, 0x749, 0x764, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x74c, 0x5, 0xd6, 
       0x6c, 0x2, 0x74b, 0x74a, 0x3, 0x2, 0x2, 0x2, 0x74b, 0x74c, 0x3, 0x2, 
       0x2, 0x2, 0x74c, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x74e, 0x5, 0x8e, 
       0x48, 0x2, 0x74e, 0x74f, 0x5, 0xf0, 0x79, 0x2, 0x74f, 0x750, 0x7, 
       0x66, 0x2, 0x2, 0x750, 0x751, 0x5, 0x11e, 0x90, 0x2, 0x751, 0x764, 
       0x3, 0x2, 0x2, 0x2, 0x752, 0x754, 0x5, 0xd6, 0x6c, 0x2, 0x753, 0x752, 
       0x3, 0x2, 0x2, 0x2, 0x753, 0x754, 0x3, 0x2, 0x2, 0x2, 0x754, 0x755, 
       0x3, 0x2, 0x2, 0x2, 0x755, 0x757, 0x5, 0x8e, 0x48, 0x2, 0x756, 0x758, 
       0x5, 0x106, 0x84, 0x2, 0x757, 0x756, 0x3, 0x2, 0x2, 0x2, 0x757, 0x758, 
       0x3, 0x2, 0x2, 0x2, 0x758, 0x764, 0x3, 0x2, 0x2, 0x2, 0x759, 0x75b, 
       0x5, 0xd6, 0x6c, 0x2, 0x75a, 0x759, 0x3, 0x2, 0x2, 0x2, 0x75a, 0x75b, 
       0x3, 0x2, 0x2, 0x2, 0x75b, 0x75c, 0x3, 0x2, 0x2, 0x2, 0x75c, 0x75e, 
       0x5, 0x8e, 0x48, 0x2, 0x75d, 0x75f, 0x5, 0x106, 0x84, 0x2, 0x75e, 
       0x75d, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x75f, 
       0x760, 0x3, 0x2, 0x2, 0x2, 0x760, 0x761, 0x7, 0x66, 0x2, 0x2, 0x761, 
       0x762, 0x5, 0x11e, 0x90, 0x2, 0x762, 0x764, 0x3, 0x2, 0x2, 0x2, 0x763, 
       0x745, 0x3, 0x2, 0x2, 0x2, 0x763, 0x74b, 0x3, 0x2, 0x2, 0x2, 0x763, 
       0x753, 0x3, 0x2, 0x2, 0x2, 0x763, 0x75a, 0x3, 0x2, 0x2, 0x2, 0x764, 
       0x115, 0x3, 0x2, 0x2, 0x2, 0x765, 0x767, 0x5, 0xd6, 0x6c, 0x2, 0x766, 
       0x765, 0x3, 0x2, 0x2, 0x2, 0x766, 0x767, 0x3, 0x2, 0x2, 0x2, 0x767, 
       0x769, 0x3, 0x2, 0x2, 0x2, 0x768, 0x76a, 0x5, 0x8e, 0x48, 0x2, 0x769, 
       0x768, 0x3, 0x2, 0x2, 0x2, 0x769, 0x76a, 0x3, 0x2, 0x2, 0x2, 0x76a, 
       0x76b, 0x3, 0x2, 0x2, 0x2, 0x76b, 0x76d, 0x5, 0xf0, 0x79, 0x2, 0x76c, 
       0x76e, 0x5, 0x138, 0x9d, 0x2, 0x76d, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x76d, 
       0x76e, 0x3, 0x2, 0x2, 0x2, 0x76e, 0x76f, 0x3, 0x2, 0x2, 0x2, 0x76f, 
       0x770, 0x5, 0x118, 0x8d, 0x2, 0x770, 0x117, 0x3, 0x2, 0x2, 0x2, 0x771, 
       0x773, 0x5, 0x150, 0xa9, 0x2, 0x772, 0x771, 0x3, 0x2, 0x2, 0x2, 0x772, 
       0x773, 0x3, 0x2, 0x2, 0x2, 0x773, 0x774, 0x3, 0x2, 0x2, 0x2, 0x774, 
       0x77d, 0x5, 0x68, 0x35, 0x2, 0x775, 0x77d, 0x5, 0x176, 0xbc, 0x2, 
       0x776, 0x777, 0x7, 0x66, 0x2, 0x2, 0x777, 0x778, 0x7, 0x1c, 0x2, 
       0x2, 0x778, 0x77d, 0x7, 0x83, 0x2, 0x2, 0x779, 0x77a, 0x7, 0x66, 
       0x2, 0x2, 0x77a, 0x77b, 0x7, 0x1d, 0x2, 0x2, 0x77b, 0x77d, 0x7, 0x83, 
       0x2, 0x2, 0x77c, 0x772, 0x3, 0x2, 0x2, 0x2, 0x77c, 0x775, 0x3, 0x2, 
       0x2, 0x2, 0x77c, 0x776, 0x3, 0x2, 0x2, 0x2, 0x77c, 0x779, 0x3, 0x2, 
       0x2, 0x2, 0x77d, 0x119, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x784, 0x5, 0x11c, 
       0x8f, 0x2, 0x77f, 0x780, 0x7, 0x56, 0x2, 0x2, 0x780, 0x781, 0x5, 
       0x26, 0x14, 0x2, 0x781, 0x782, 0x7, 0x57, 0x2, 0x2, 0x782, 0x784, 
       0x3, 0x2, 0x2, 0x2, 0x783, 0x77e, 0x3, 0x2, 0x2, 0x2, 0x783, 0x77f, 
       0x3, 0x2, 0x2, 0x2, 0x784, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x785, 0x786, 
       0x7, 0x66, 0x2, 0x2, 0x786, 0x789, 0x5, 0x11e, 0x90, 0x2, 0x787, 
       0x789, 0x5, 0x122, 0x92, 0x2, 0x788, 0x785, 0x3, 0x2, 0x2, 0x2, 0x788, 
       0x787, 0x3, 0x2, 0x2, 0x2, 0x789, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x78a, 
       0x78d, 0x5, 0x5a, 0x2e, 0x2, 0x78b, 0x78d, 0x5, 0x122, 0x92, 0x2, 
       0x78c, 0x78a, 0x3, 0x2, 0x2, 0x2, 0x78c, 0x78b, 0x3, 0x2, 0x2, 0x2, 
       0x78d, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x78e, 0x78f, 0x8, 0x91, 0x1, 0x2, 
       0x78f, 0x791, 0x5, 0x11e, 0x90, 0x2, 0x790, 0x792, 0x7, 0x86, 0x2, 
       0x2, 0x791, 0x790, 0x3, 0x2, 0x2, 0x2, 0x791, 0x792, 0x3, 0x2, 0x2, 
       0x2, 0x792, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x793, 0x794, 0xc, 0x3, 0x2, 
       0x2, 0x794, 0x795, 0x7, 0x7d, 0x2, 0x2, 0x795, 0x797, 0x5, 0x11e, 
       0x90, 0x2, 0x796, 0x798, 0x7, 0x86, 0x2, 0x2, 0x797, 0x796, 0x3, 
       0x2, 0x2, 0x2, 0x797, 0x798, 0x3, 0x2, 0x2, 0x2, 0x798, 0x79a, 0x3, 
       0x2, 0x2, 0x2, 0x799, 0x793, 0x3, 0x2, 0x2, 0x2, 0x79a, 0x79d, 0x3, 
       0x2, 0x2, 0x2, 0x79b, 0x799, 0x3, 0x2, 0x2, 0x2, 0x79b, 0x79c, 0x3, 
       0x2, 0x2, 0x2, 0x79c, 0x121, 0x3, 0x2, 0x2, 0x2, 0x79d, 0x79b, 0x3, 
       0x2, 0x2, 0x2, 0x79e, 0x79f, 0x7, 0x5a, 0x2, 0x2, 0x79f, 0x7a1, 0x5, 
       0x120, 0x91, 0x2, 0x7a0, 0x7a2, 0x7, 0x7d, 0x2, 0x2, 0x7a1, 0x7a0, 
       0x3, 0x2, 0x2, 0x2, 0x7a1, 0x7a2, 0x3, 0x2, 0x2, 0x2, 0x7a2, 0x7a3, 
       0x3, 0x2, 0x2, 0x2, 0x7a3, 0x7a4, 0x7, 0x5b, 0x2, 0x2, 0x7a4, 0x7a8, 
       0x3, 0x2, 0x2, 0x2, 0x7a5, 0x7a6, 0x7, 0x5a, 0x2, 0x2, 0x7a6, 0x7a8, 
       0x7, 0x5b, 0x2, 0x2, 0x7a7, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x7a7, 0x7a5, 
       0x3, 0x2, 0x2, 0x2, 0x7a8, 0x123, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7ac, 
       0x7, 0x87, 0x2, 0x2, 0x7aa, 0x7ac, 0x5, 0x164, 0xb3, 0x2, 0x7ab, 
       0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7ab, 0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7ac, 
       0x125, 0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7ae, 0x5, 0x128, 0x95, 0x2, 0x7ae, 
       0x7b0, 0x7, 0x5a, 0x2, 0x2, 0x7af, 0x7b1, 0x5, 0x130, 0x99, 0x2, 
       0x7b0, 0x7af, 0x3, 0x2, 0x2, 0x2, 0x7b0, 0x7b1, 0x3, 0x2, 0x2, 0x2, 
       0x7b1, 0x7b2, 0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7b3, 0x7, 0x5b, 0x2, 0x2, 
       0x7b3, 0x127, 0x3, 0x2, 0x2, 0x2, 0x7b4, 0x7b6, 0x5, 0x12e, 0x98, 
       0x2, 0x7b5, 0x7b7, 0x5, 0xd6, 0x6c, 0x2, 0x7b6, 0x7b5, 0x3, 0x2, 
       0x2, 0x2, 0x7b6, 0x7b7, 0x3, 0x2, 0x2, 0x2, 0x7b7, 0x7b8, 0x3, 0x2, 
       0x2, 0x2, 0x7b8, 0x7ba, 0x5, 0x12a, 0x96, 0x2, 0x7b9, 0x7bb, 0x5, 
       0x12c, 0x97, 0x2, 0x7ba, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7ba, 0x7bb, 
       0x3, 0x2, 0x2, 0x2, 0x7bb, 0x7bd, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7be, 
       0x5, 0x13e, 0xa0, 0x2, 0x7bd, 0x7bc, 0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7be, 
       0x3, 0x2, 0x2, 0x2, 0x7be, 0x7c7, 0x3, 0x2, 0x2, 0x2, 0x7bf, 0x7c1, 
       0x5, 0x12e, 0x98, 0x2, 0x7c0, 0x7c2, 0x5, 0xd6, 0x6c, 0x2, 0x7c1, 
       0x7c0, 0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c2, 
       0x7c4, 0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c5, 0x5, 0x13e, 0xa0, 0x2, 0x7c4, 
       0x7c3, 0x3, 0x2, 0x2, 0x2, 0x7c4, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7c5, 
       0x7c7, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7b4, 0x3, 0x2, 0x2, 0x2, 0x7c6, 
       0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7c7, 0x129, 0x3, 0x2, 0x2, 0x2, 0x7c8, 
       0x7ca, 0x5, 0xc, 0x7, 0x2, 0x7c9, 0x7c8, 0x3, 0x2, 0x2, 0x2, 0x7c9, 
       0x7ca, 0x3, 0x2, 0x2, 0x2, 0x7ca, 0x7cb, 0x3, 0x2, 0x2, 0x2, 0x7cb, 
       0x7cc, 0x5, 0x124, 0x93, 0x2, 0x7cc, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x7cd, 
       0x7ce, 0x7, 0x27, 0x2, 0x2, 0x7ce, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x7cf, 
       0x7d0, 0x9, 0xb, 0x2, 0x2, 0x7d0, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x7d1, 
       0x7d3, 0x5, 0x132, 0x9a, 0x2, 0x7d2, 0x7d4, 0x5, 0x130, 0x99, 0x2, 
       0x7d3, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d3, 0x7d4, 0x3, 0x2, 0x2, 0x2, 
       0x7d4, 0x7db, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d6, 0x5, 0x148, 0xa5, 
       0x2, 0x7d6, 0x7d8, 0x7, 0x81, 0x2, 0x2, 0x7d7, 0x7d9, 0x5, 0x130, 
       0x99, 0x2, 0x7d8, 0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7d9, 0x3, 0x2, 
       0x2, 0x2, 0x7d9, 0x7db, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x7d1, 0x3, 0x2, 
       0x2, 0x2, 0x7da, 0x7d5, 0x3, 0x2, 0x2, 0x2, 0x7db, 0x131, 0x3, 0x2, 
       0x2, 0x2, 0x7dc, 0x7de, 0x5, 0xd6, 0x6c, 0x2, 0x7dd, 0x7dc, 0x3, 
       0x2, 0x2, 0x2, 0x7dd, 0x7de, 0x3, 0x2, 0x2, 0x2, 0x7de, 0x7e0, 0x3, 
       0x2, 0x2, 0x2, 0x7df, 0x7e1, 0x5, 0x8e, 0x48, 0x2, 0x7e0, 0x7df, 
       0x3, 0x2, 0x2, 0x2, 0x7e0, 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x7e1, 0x7e3, 
       0x3, 0x2, 0x2, 0x2, 0x7e2, 0x7e4, 0x5, 0x134, 0x9b, 0x2, 0x7e3, 0x7e2, 
       0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e4, 0x3, 0x2, 0x2, 0x2, 0x7e4, 0x7e5, 
       0x3, 0x2, 0x2, 0x2, 0x7e5, 0x7ed, 0x7, 0x83, 0x2, 0x2, 0x7e6, 0x7ed, 
       0x5, 0x116, 0x8c, 0x2, 0x7e7, 0x7ed, 0x5, 0xce, 0x68, 0x2, 0x7e8, 
       0x7ed, 0x5, 0x86, 0x44, 0x2, 0x7e9, 0x7ed, 0x5, 0x15c, 0xaf, 0x2, 
       0x7ea, 0x7ed, 0x5, 0x82, 0x42, 0x2, 0x7eb, 0x7ed, 0x5, 0x88, 0x45, 
       0x2, 0x7ec, 0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7e6, 0x3, 0x2, 0x2, 
       0x2, 0x7ec, 0x7e7, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7e8, 0x3, 0x2, 0x2, 
       0x2, 0x7ec, 0x7e9, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7ea, 0x3, 0x2, 0x2, 
       0x2, 0x7ec, 0x7eb, 0x3, 0x2, 0x2, 0x2, 0x7ed, 0x133, 0x3, 0x2, 0x2, 
       0x2, 0x7ee, 0x7ef, 0x8, 0x9b, 0x1, 0x2, 0x7ef, 0x7f0, 0x5, 0x136, 
       0x9c, 0x2, 0x7f0, 0x7f6, 0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7f2, 0xc, 0x3, 
       0x2, 0x2, 0x7f2, 0x7f3, 0x7, 0x7d, 0x2, 0x2, 0x7f3, 0x7f5, 0x5, 0x136, 
       0x9c, 0x2, 0x7f4, 0x7f1, 0x3, 0x2, 0x2, 0x2, 0x7f5, 0x7f8, 0x3, 0x2, 
       0x2, 0x2, 0x7f6, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f7, 0x3, 0x2, 
       0x2, 0x2, 0x7f7, 0x135, 0x3, 0x2, 0x2, 0x2, 0x7f8, 0x7f6, 0x3, 0x2, 
       0x2, 0x2, 0x7f9, 0x7fb, 0x5, 0xf0, 0x79, 0x2, 0x7fa, 0x7fc, 0x5, 
       0x138, 0x9d, 0x2, 0x7fb, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x7fb, 0x7fc, 
       0x3, 0x2, 0x2, 0x2, 0x7fc, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x7fd, 0x7ff, 
       0x5, 0x13c, 0x9f, 0x2, 0x7fe, 0x7fd, 0x3, 0x2, 0x2, 0x2, 0x7fe, 0x7ff, 
       0x3, 0x2, 0x2, 0x2, 0x7ff, 0x80d, 0x3, 0x2, 0x2, 0x2, 0x800, 0x802, 
       0x5, 0xf0, 0x79, 0x2, 0x801, 0x803, 0x5, 0x11c, 0x8f, 0x2, 0x802, 
       0x801, 0x3, 0x2, 0x2, 0x2, 0x802, 0x803, 0x3, 0x2, 0x2, 0x2, 0x803, 
       0x80d, 0x3, 0x2, 0x2, 0x2, 0x804, 0x806, 0x7, 0x87, 0x2, 0x2, 0x805, 
       0x804, 0x3, 0x2, 0x2, 0x2, 0x805, 0x806, 0x3, 0x2, 0x2, 0x2, 0x806, 
       0x808, 0x3, 0x2, 0x2, 0x2, 0x807, 0x809, 0x5, 0xd6, 0x6c, 0x2, 0x808, 
       0x807, 0x3, 0x2, 0x2, 0x2, 0x808, 0x809, 0x3, 0x2, 0x2, 0x2, 0x809, 
       0x80a, 0x3, 0x2, 0x2, 0x2, 0x80a, 0x80b, 0x7, 0x81, 0x2, 0x2, 0x80b, 
       0x80d, 0x5, 0x60, 0x31, 0x2, 0x80c, 0x7f9, 0x3, 0x2, 0x2, 0x2, 0x80c, 
       0x800, 0x3, 0x2, 0x2, 0x2, 0x80c, 0x805, 0x3, 0x2, 0x2, 0x2, 0x80d, 
       0x137, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x80f, 0x8, 0x9d, 0x1, 0x2, 0x80f, 
       0x810, 0x5, 0x13a, 0x9e, 0x2, 0x810, 0x815, 0x3, 0x2, 0x2, 0x2, 0x811, 
       0x812, 0xc, 0x3, 0x2, 0x2, 0x812, 0x814, 0x5, 0x13a, 0x9e, 0x2, 0x813, 
       0x811, 0x3, 0x2, 0x2, 0x2, 0x814, 0x817, 0x3, 0x2, 0x2, 0x2, 0x815, 
       0x813, 0x3, 0x2, 0x2, 0x2, 0x815, 0x816, 0x3, 0x2, 0x2, 0x2, 0x816, 
       0x139, 0x3, 0x2, 0x2, 0x2, 0x817, 0x815, 0x3, 0x2, 0x2, 0x2, 0x818, 
       0x819, 0x9, 0xc, 0x2, 0x2, 0x819, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x81a, 
       0x81b, 0x7, 0x66, 0x2, 0x2, 0x81b, 0x81c, 0x7, 0x8a, 0x2, 0x2, 0x81c, 
       0x81d, 0x8, 0x9f, 0x1, 0x2, 0x81d, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x81e, 
       0x81f, 0x7, 0x81, 0x2, 0x2, 0x81f, 0x820, 0x5, 0x140, 0xa1, 0x2, 
       0x820, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x821, 0x822, 0x8, 0xa1, 0x1, 0x2, 
       0x822, 0x824, 0x5, 0x142, 0xa2, 0x2, 0x823, 0x825, 0x7, 0x86, 0x2, 
       0x2, 0x824, 0x823, 0x3, 0x2, 0x2, 0x2, 0x824, 0x825, 0x3, 0x2, 0x2, 
       0x2, 0x825, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x826, 0x827, 0xc, 0x3, 0x2, 
       0x2, 0x827, 0x828, 0x7, 0x7d, 0x2, 0x2, 0x828, 0x82a, 0x5, 0x142, 
       0xa2, 0x2, 0x829, 0x82b, 0x7, 0x86, 0x2, 0x2, 0x82a, 0x829, 0x3, 
       0x2, 0x2, 0x2, 0x82a, 0x82b, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x82d, 0x3, 
       0x2, 0x2, 0x2, 0x82c, 0x826, 0x3, 0x2, 0x2, 0x2, 0x82d, 0x830, 0x3, 
       0x2, 0x2, 0x2, 0x82e, 0x82c, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x82f, 0x3, 
       0x2, 0x2, 0x2, 0x82f, 0x141, 0x3, 0x2, 0x2, 0x2, 0x830, 0x82e, 0x3, 
       0x2, 0x2, 0x2, 0x831, 0x833, 0x5, 0xd6, 0x6c, 0x2, 0x832, 0x831, 
       0x3, 0x2, 0x2, 0x2, 0x832, 0x833, 0x3, 0x2, 0x2, 0x2, 0x833, 0x834, 
       0x3, 0x2, 0x2, 0x2, 0x834, 0x847, 0x5, 0x146, 0xa4, 0x2, 0x835, 0x837, 
       0x5, 0xd6, 0x6c, 0x2, 0x836, 0x835, 0x3, 0x2, 0x2, 0x2, 0x836, 0x837, 
       0x3, 0x2, 0x2, 0x2, 0x837, 0x838, 0x3, 0x2, 0x2, 0x2, 0x838, 0x83a, 
       0x7, 0x51, 0x2, 0x2, 0x839, 0x83b, 0x5, 0x148, 0xa5, 0x2, 0x83a, 
       0x839, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x83b, 
       0x83c, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x847, 0x5, 0x146, 0xa4, 0x2, 0x83d, 
       0x83f, 0x5, 0xd6, 0x6c, 0x2, 0x83e, 0x83d, 0x3, 0x2, 0x2, 0x2, 0x83e, 
       0x83f, 0x3, 0x2, 0x2, 0x2, 0x83f, 0x840, 0x3, 0x2, 0x2, 0x2, 0x840, 
       0x842, 0x5, 0x148, 0xa5, 0x2, 0x841, 0x843, 0x7, 0x51, 0x2, 0x2, 
       0x842, 0x841, 0x3, 0x2, 0x2, 0x2, 0x842, 0x843, 0x3, 0x2, 0x2, 0x2, 
       0x843, 0x844, 0x3, 0x2, 0x2, 0x2, 0x844, 0x845, 0x5, 0x146, 0xa4, 
       0x2, 0x845, 0x847, 0x3, 0x2, 0x2, 0x2, 0x846, 0x832, 0x3, 0x2, 0x2, 
       0x2, 0x846, 0x836, 0x3, 0x2, 0x2, 0x2, 0x846, 0x83e, 0x3, 0x2, 0x2, 
       0x2, 0x847, 0x143, 0x3, 0x2, 0x2, 0x2, 0x848, 0x84a, 0x5, 0xc, 0x7, 
       0x2, 0x849, 0x848, 0x3, 0x2, 0x2, 0x2, 0x849, 0x84a, 0x3, 0x2, 0x2, 
       0x2, 0x84a, 0x84b, 0x3, 0x2, 0x2, 0x2, 0x84b, 0x84e, 0x5, 0x124, 
       0x93, 0x2, 0x84c, 0x84e, 0x5, 0xa2, 0x52, 0x2, 0x84d, 0x849, 0x3, 
       0x2, 0x2, 0x2, 0x84d, 0x84c, 0x3, 0x2, 0x2, 0x2, 0x84e, 0x145, 0x3, 
       0x2, 0x2, 0x2, 0x84f, 0x850, 0x5, 0x144, 0xa3, 0x2, 0x850, 0x147, 
       0x3, 0x2, 0x2, 0x2, 0x851, 0x852, 0x9, 0xd, 0x2, 0x2, 0x852, 0x149, 
       0x3, 0x2, 0x2, 0x2, 0x853, 0x854, 0x7, 0x35, 0x2, 0x2, 0x854, 0x855, 
       0x5, 0x14c, 0xa7, 0x2, 0x855, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x856, 0x858, 
       0x5, 0x9a, 0x4e, 0x2, 0x857, 0x859, 0x5, 0x14e, 0xa8, 0x2, 0x858, 
       0x857, 0x3, 0x2, 0x2, 0x2, 0x858, 0x859, 0x3, 0x2, 0x2, 0x2, 0x859, 
       0x14d, 0x3, 0x2, 0x2, 0x2, 0x85a, 0x85c, 0x5, 0xfa, 0x7e, 0x2, 0x85b, 
       0x85d, 0x5, 0x14e, 0xa8, 0x2, 0x85c, 0x85b, 0x3, 0x2, 0x2, 0x2, 0x85c, 
       0x85d, 0x3, 0x2, 0x2, 0x2, 0x85d, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x85e, 
       0x85f, 0x7, 0x81, 0x2, 0x2, 0x85f, 0x860, 0x5, 0x152, 0xaa, 0x2, 
       0x860, 0x151, 0x3, 0x2, 0x2, 0x2, 0x861, 0x863, 0x5, 0x154, 0xab, 
       0x2, 0x862, 0x864, 0x7, 0x86, 0x2, 0x2, 0x863, 0x862, 0x3, 0x2, 0x2, 
       0x2, 0x863, 0x864, 0x3, 0x2, 0x2, 0x2, 0x864, 0x86d, 0x3, 0x2, 0x2, 
       0x2, 0x865, 0x867, 0x5, 0x154, 0xab, 0x2, 0x866, 0x868, 0x7, 0x86, 
       0x2, 0x2, 0x867, 0x866, 0x3, 0x2, 0x2, 0x2, 0x867, 0x868, 0x3, 0x2, 
       0x2, 0x2, 0x868, 0x869, 0x3, 0x2, 0x2, 0x2, 0x869, 0x86a, 0x7, 0x7d, 
       0x2, 0x2, 0x86a, 0x86b, 0x5, 0x152, 0xaa, 0x2, 0x86b, 0x86d, 0x3, 
       0x2, 0x2, 0x2, 0x86c, 0x861, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x865, 0x3, 
       0x2, 0x2, 0x2, 0x86d, 0x153, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86f, 0x5, 
       0x156, 0xac, 0x2, 0x86f, 0x871, 0x7, 0x56, 0x2, 0x2, 0x870, 0x872, 
       0x5, 0x26, 0x14, 0x2, 0x871, 0x870, 0x3, 0x2, 0x2, 0x2, 0x871, 0x872, 
       0x3, 0x2, 0x2, 0x2, 0x872, 0x873, 0x3, 0x2, 0x2, 0x2, 0x873, 0x874, 
       0x7, 0x57, 0x2, 0x2, 0x874, 0x879, 0x3, 0x2, 0x2, 0x2, 0x875, 0x876, 
       0x5, 0x156, 0xac, 0x2, 0x876, 0x877, 0x5, 0x122, 0x92, 0x2, 0x877, 
       0x879, 0x3, 0x2, 0x2, 0x2, 0x878, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x878, 
       0x875, 0x3, 0x2, 0x2, 0x2, 0x879, 0x155, 0x3, 0x2, 0x2, 0x2, 0x87a, 
       0x87d, 0x5, 0x144, 0xa3, 0x2, 0x87b, 0x87d, 0x7, 0x87, 0x2, 0x2, 
       0x87c, 0x87a, 0x3, 0x2, 0x2, 0x2, 0x87c, 0x87b, 0x3, 0x2, 0x2, 0x2, 
       0x87d, 0x157, 0x3, 0x2, 0x2, 0x2, 0x87e, 0x87f, 0x7, 0x35, 0x2, 0x2, 
       0x87f, 0x880, 0x5, 0x188, 0xc5, 0x2, 0x880, 0x159, 0x3, 0x2, 0x2, 
       0x2, 0x881, 0x882, 0x7, 0x35, 0x2, 0x2, 0x882, 0x883, 0x7, 0x90, 
       0x2, 0x2, 0x883, 0x887, 0x7, 0x87, 0x2, 0x2, 0x884, 0x885, 0x7, 0x35, 
       0x2, 0x2, 0x885, 0x887, 0x7, 0x93, 0x2, 0x2, 0x886, 0x881, 0x3, 0x2, 
       0x2, 0x2, 0x886, 0x884, 0x3, 0x2, 0x2, 0x2, 0x887, 0x15b, 0x3, 0x2, 
       0x2, 0x2, 0x888, 0x889, 0x7, 0x45, 0x2, 0x2, 0x889, 0x88a, 0x7, 0x67, 
       0x2, 0x2, 0x88a, 0x88b, 0x5, 0x15e, 0xb0, 0x2, 0x88b, 0x88c, 0x7, 
       0x68, 0x2, 0x2, 0x88c, 0x88d, 0x5, 0x7e, 0x40, 0x2, 0x88d, 0x15d, 
       0x3, 0x2, 0x2, 0x2, 0x88e, 0x88f, 0x8, 0xb0, 0x1, 0x2, 0x88f, 0x890, 
       0x5, 0x160, 0xb1, 0x2, 0x890, 0x896, 0x3, 0x2, 0x2, 0x2, 0x891, 0x892, 
       0xc, 0x3, 0x2, 0x2, 0x892, 0x893, 0x7, 0x7d, 0x2, 0x2, 0x893, 0x895, 
       0x5, 0x160, 0xb1, 0x2, 0x894, 0x891, 0x3, 0x2, 0x2, 0x2, 0x895, 0x898, 
       0x3, 0x2, 0x2, 0x2, 0x896, 0x894, 0x3, 0x2, 0x2, 0x2, 0x896, 0x897, 
       0x3, 0x2, 0x2, 0x2, 0x897, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x898, 0x896, 
       0x3, 0x2, 0x2, 0x2, 0x899, 0x89c, 0x5, 0x162, 0xb2, 0x2, 0x89a, 0x89c, 
       0x5, 0x114, 0x8b, 0x2, 0x89b, 0x899, 0x3, 0x2, 0x2, 0x2, 0x89b, 0x89a, 
       0x3, 0x2, 0x2, 0x2, 0x89c, 0x161, 0x3, 0x2, 0x2, 0x2, 0x89d, 0x89f, 
       0x7, 0x16, 0x2, 0x2, 0x89e, 0x8a0, 0x7, 0x86, 0x2, 0x2, 0x89f, 0x89e, 
       0x3, 0x2, 0x2, 0x2, 0x89f, 0x8a0, 0x3, 0x2, 0x2, 0x2, 0x8a0, 0x8a2, 
       0x3, 0x2, 0x2, 0x2, 0x8a1, 0x8a3, 0x7, 0x87, 0x2, 0x2, 0x8a2, 0x8a1, 
       0x3, 0x2, 0x2, 0x2, 0x8a2, 0x8a3, 0x3, 0x2, 0x2, 0x2, 0x8a3, 0x8ce, 
       0x3, 0x2, 0x2, 0x2, 0x8a4, 0x8a6, 0x7, 0x16, 0x2, 0x2, 0x8a5, 0x8a7, 
       0x7, 0x87, 0x2, 0x2, 0x8a6, 0x8a5, 0x3, 0x2, 0x2, 0x2, 0x8a6, 0x8a7, 
       0x3, 0x2, 0x2, 0x2, 0x8a7, 0x8a8, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8a9, 
       0x7, 0x66, 0x2, 0x2, 0x8a9, 0x8ce, 0x5, 0x104, 0x83, 0x2, 0x8aa, 
       0x8ac, 0x7, 0x4d, 0x2, 0x2, 0x8ab, 0x8ad, 0x7, 0x86, 0x2, 0x2, 0x8ac, 
       0x8ab, 0x3, 0x2, 0x2, 0x2, 0x8ac, 0x8ad, 0x3, 0x2, 0x2, 0x2, 0x8ad, 
       0x8af, 0x3, 0x2, 0x2, 0x2, 0x8ae, 0x8b0, 0x7, 0x87, 0x2, 0x2, 0x8af, 
       0x8ae, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x8b0, 
       0x8ce, 0x3, 0x2, 0x2, 0x2, 0x8b1, 0x8b3, 0x7, 0x4d, 0x2, 0x2, 0x8b2, 
       0x8b4, 0x7, 0x87, 0x2, 0x2, 0x8b3, 0x8b2, 0x3, 0x2, 0x2, 0x2, 0x8b3, 
       0x8b4, 0x3, 0x2, 0x2, 0x2, 0x8b4, 0x8b5, 0x3, 0x2, 0x2, 0x2, 0x8b5, 
       0x8b6, 0x7, 0x66, 0x2, 0x2, 0x8b6, 0x8ce, 0x5, 0x104, 0x83, 0x2, 
       0x8b7, 0x8b8, 0x7, 0x45, 0x2, 0x2, 0x8b8, 0x8b9, 0x7, 0x67, 0x2, 
       0x2, 0x8b9, 0x8ba, 0x5, 0x15e, 0xb0, 0x2, 0x8ba, 0x8bb, 0x7, 0x68, 
       0x2, 0x2, 0x8bb, 0x8bd, 0x7, 0x16, 0x2, 0x2, 0x8bc, 0x8be, 0x7, 0x86, 
       0x2, 0x2, 0x8bd, 0x8bc, 0x3, 0x2, 0x2, 0x2, 0x8bd, 0x8be, 0x3, 0x2, 
       0x2, 0x2, 0x8be, 0x8c0, 0x3, 0x2, 0x2, 0x2, 0x8bf, 0x8c1, 0x7, 0x87, 
       0x2, 0x2, 0x8c0, 0x8bf, 0x3, 0x2, 0x2, 0x2, 0x8c0, 0x8c1, 0x3, 0x2, 
       0x2, 0x2, 0x8c1, 0x8ce, 0x3, 0x2, 0x2, 0x2, 0x8c2, 0x8c3, 0x7, 0x45, 
       0x2, 0x2, 0x8c3, 0x8c4, 0x7, 0x67, 0x2, 0x2, 0x8c4, 0x8c5, 0x5, 0x15e, 
       0xb0, 0x2, 0x8c5, 0x8c6, 0x7, 0x68, 0x2, 0x2, 0x8c6, 0x8c8, 0x7, 
       0x16, 0x2, 0x2, 0x8c7, 0x8c9, 0x7, 0x87, 0x2, 0x2, 0x8c8, 0x8c7, 
       0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8c9, 0x3, 0x2, 0x2, 0x2, 0x8c9, 0x8ca, 
       0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8cb, 0x7, 0x66, 0x2, 0x2, 0x8cb, 0x8cc, 
       0x5, 0x6, 0x4, 0x2, 0x8cc, 0x8ce, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x89d, 
       0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8aa, 
       0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8b1, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8b7, 
       0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8c2, 0x3, 0x2, 0x2, 0x2, 0x8ce, 0x163, 
       0x3, 0x2, 0x2, 0x2, 0x8cf, 0x8d0, 0x5, 0x168, 0xb5, 0x2, 0x8d0, 0x8d2, 
       0x7, 0x67, 0x2, 0x2, 0x8d1, 0x8d3, 0x5, 0x16a, 0xb6, 0x2, 0x8d2, 
       0x8d1, 0x3, 0x2, 0x2, 0x2, 0x8d2, 0x8d3, 0x3, 0x2, 0x2, 0x2, 0x8d3, 
       0x8d4, 0x3, 0x2, 0x2, 0x2, 0x8d4, 0x8d5, 0x7, 0x68, 0x2, 0x2, 0x8d5, 
       0x165, 0x3, 0x2, 0x2, 0x2, 0x8d6, 0x8e6, 0x5, 0x164, 0xb3, 0x2, 0x8d7, 
       0x8d8, 0x5, 0x158, 0xad, 0x2, 0x8d8, 0x8da, 0x7, 0x67, 0x2, 0x2, 
       0x8d9, 0x8db, 0x5, 0x16a, 0xb6, 0x2, 0x8da, 0x8d9, 0x3, 0x2, 0x2, 
       0x2, 0x8da, 0x8db, 0x3, 0x2, 0x2, 0x2, 0x8db, 0x8dc, 0x3, 0x2, 0x2, 
       0x2, 0x8dc, 0x8dd, 0x7, 0x68, 0x2, 0x2, 0x8dd, 0x8e6, 0x3, 0x2, 0x2, 
       0x2, 0x8de, 0x8df, 0x5, 0x15a, 0xae, 0x2, 0x8df, 0x8e1, 0x7, 0x67, 
       0x2, 0x2, 0x8e0, 0x8e2, 0x5, 0x16a, 0xb6, 0x2, 0x8e1, 0x8e0, 0x3, 
       0x2, 0x2, 0x2, 0x8e1, 0x8e2, 0x3, 0x2, 0x2, 0x2, 0x8e2, 0x8e3, 0x3, 
       0x2, 0x2, 0x2, 0x8e3, 0x8e4, 0x7, 0x68, 0x2, 0x2, 0x8e4, 0x8e6, 0x3, 
       0x2, 0x2, 0x2, 0x8e5, 0x8d6, 0x3, 0x2, 0x2, 0x2, 0x8e5, 0x8d7, 0x3, 
       0x2, 0x2, 0x2, 0x8e5, 0x8de, 0x3, 0x2, 0x2, 0x2, 0x8e6, 0x167, 0x3, 
       0x2, 0x2, 0x2, 0x8e7, 0x8e8, 0x7, 0x87, 0x2, 0x2, 0x8e8, 0x169, 0x3, 
       0x2, 0x2, 0x2, 0x8e9, 0x8ea, 0x8, 0xb6, 0x1, 0x2, 0x8ea, 0x8ec, 0x5, 
       0x16c, 0xb7, 0x2, 0x8eb, 0x8ed, 0x7, 0x86, 0x2, 0x2, 0x8ec, 0x8eb, 
       0x3, 0x2, 0x2, 0x2, 0x8ec, 0x8ed, 0x3, 0x2, 0x2, 0x2, 0x8ed, 0x8f6, 
       0x3, 0x2, 0x2, 0x2, 0x8ee, 0x8ef, 0xc, 0x3, 0x2, 0x2, 0x8ef, 0x8f0, 
       0x7, 0x7d, 0x2, 0x2, 0x8f0, 0x8f2, 0x5, 0x16c, 0xb7, 0x2, 0x8f1, 
       0x8f3, 0x7, 0x86, 0x2, 0x2, 0x8f2, 0x8f1, 0x3, 0x2, 0x2, 0x2, 0x8f2, 
       0x8f3, 0x3, 0x2, 0x2, 0x2, 0x8f3, 0x8f5, 0x3, 0x2, 0x2, 0x2, 0x8f4, 
       0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8f5, 0x8f8, 0x3, 0x2, 0x2, 0x2, 0x8f6, 
       0x8f4, 0x3, 0x2, 0x2, 0x2, 0x8f6, 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f7, 
       0x16b, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8f6, 0x3, 0x2, 0x2, 0x2, 0x8f9, 
       0x8fd, 0x5, 0x104, 0x83, 0x2, 0x8fa, 0x8fd, 0x5, 0x60, 0x31, 0x2, 
       0x8fb, 0x8fd, 0x5, 0x6, 0x4, 0x2, 0x8fc, 0x8f9, 0x3, 0x2, 0x2, 0x2, 
       0x8fc, 0x8fa, 0x3, 0x2, 0x2, 0x2, 0x8fc, 0x8fb, 0x3, 0x2, 0x2, 0x2, 
       0x8fd, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x8fe, 0x8ff, 0x7, 0x4d, 0x2, 0x2, 
       0x8ff, 0x900, 0x5, 0xc, 0x7, 0x2, 0x900, 0x901, 0x7, 0x87, 0x2, 0x2, 
       0x901, 0x90a, 0x3, 0x2, 0x2, 0x2, 0x902, 0x903, 0x7, 0x4d, 0x2, 0x2, 
       0x903, 0x905, 0x5, 0xc, 0x7, 0x2, 0x904, 0x906, 0x7, 0x45, 0x2, 0x2, 
       0x905, 0x904, 0x3, 0x2, 0x2, 0x2, 0x905, 0x906, 0x3, 0x2, 0x2, 0x2, 
       0x906, 0x907, 0x3, 0x2, 0x2, 0x2, 0x907, 0x908, 0x5, 0x164, 0xb3, 
       0x2, 0x908, 0x90a, 0x3, 0x2, 0x2, 0x2, 0x909, 0x8fe, 0x3, 0x2, 0x2, 
       0x2, 0x909, 0x902, 0x3, 0x2, 0x2, 0x2, 0x90a, 0x16f, 0x3, 0x2, 0x2, 
       0x2, 0x90b, 0x90d, 0x7, 0x25, 0x2, 0x2, 0x90c, 0x90b, 0x3, 0x2, 0x2, 
       0x2, 0x90c, 0x90d, 0x3, 0x2, 0x2, 0x2, 0x90d, 0x90e, 0x3, 0x2, 0x2, 
       0x2, 0x90e, 0x90f, 0x7, 0x45, 0x2, 0x2, 0x90f, 0x910, 0x5, 0x7e, 
       0x40, 0x2, 0x910, 0x171, 0x3, 0x2, 0x2, 0x2, 0x911, 0x912, 0x7, 0x45, 
       0x2, 0x2, 0x912, 0x913, 0x7, 0x67, 0x2, 0x2, 0x913, 0x914, 0x7, 0x68, 
       0x2, 0x2, 0x914, 0x915, 0x5, 0x7e, 0x40, 0x2, 0x915, 0x173, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x917, 0x7, 0x4a, 0x2, 0x2, 0x917, 0x918, 0x5, 
       0x68, 0x35, 0x2, 0x918, 0x919, 0x5, 0x178, 0xbd, 0x2, 0x919, 0x175, 
       0x3, 0x2, 0x2, 0x2, 0x91a, 0x91c, 0x7, 0x4a, 0x2, 0x2, 0x91b, 0x91d, 
       0x5, 0x150, 0xa9, 0x2, 0x91c, 0x91b, 0x3, 0x2, 0x2, 0x2, 0x91c, 0x91d, 
       0x3, 0x2, 0x2, 0x2, 0x91d, 0x91e, 0x3, 0x2, 0x2, 0x2, 0x91e, 0x91f, 
       0x5, 0x68, 0x35, 0x2, 0x91f, 0x920, 0x5, 0x178, 0xbd, 0x2, 0x920, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x921, 0x923, 0x5, 0x17a, 0xbe, 0x2, 0x922, 
       0x924, 0x5, 0x178, 0xbd, 0x2, 0x923, 0x922, 0x3, 0x2, 0x2, 0x2, 0x923, 
       0x924, 0x3, 0x2, 0x2, 0x2, 0x924, 0x179, 0x3, 0x2, 0x2, 0x2, 0x925, 
       0x926, 0x7, 0x12, 0x2, 0x2, 0x926, 0x927, 0x7, 0x56, 0x2, 0x2, 0x927, 
       0x928, 0x5, 0x17c, 0xbf, 0x2, 0x928, 0x929, 0x7, 0x57, 0x2, 0x2, 
       0x929, 0x92a, 0x5, 0x68, 0x35, 0x2, 0x92a, 0x17b, 0x3, 0x2, 0x2, 
       0x2, 0x92b, 0x92d, 0x5, 0xd6, 0x6c, 0x2, 0x92c, 0x92b, 0x3, 0x2, 
       0x2, 0x2, 0x92c, 0x92d, 0x3, 0x2, 0x2, 0x2, 0x92d, 0x92e, 0x3, 0x2, 
       0x2, 0x2, 0x92e, 0x92f, 0x5, 0x9a, 0x4e, 0x2, 0x92f, 0x930, 0x5, 
       0xf0, 0x79, 0x2, 0x930, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x931, 0x933, 
       0x5, 0xd6, 0x6c, 0x2, 0x932, 0x931, 0x3, 0x2, 0x2, 0x2, 0x932, 0x933, 
       0x3, 0x2, 0x2, 0x2, 0x933, 0x934, 0x3, 0x2, 0x2, 0x2, 0x934, 0x936, 
       0x5, 0x9a, 0x4e, 0x2, 0x935, 0x937, 0x5, 0x106, 0x84, 0x2, 0x936, 
       0x935, 0x3, 0x2, 0x2, 0x2, 0x936, 0x937, 0x3, 0x2, 0x2, 0x2, 0x937, 
       0x93a, 0x3, 0x2, 0x2, 0x2, 0x938, 0x93a, 0x7, 0x86, 0x2, 0x2, 0x939, 
       0x92c, 0x3, 0x2, 0x2, 0x2, 0x939, 0x932, 0x3, 0x2, 0x2, 0x2, 0x939, 
       0x938, 0x3, 0x2, 0x2, 0x2, 0x93a, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x93b, 
       0x93d, 0x7, 0x48, 0x2, 0x2, 0x93c, 0x93e, 0x5, 0x5a, 0x2e, 0x2, 0x93d, 
       0x93c, 0x3, 0x2, 0x2, 0x2, 0x93d, 0x93e, 0x3, 0x2, 0x2, 0x2, 0x93e, 
       0x17f, 0x3, 0x2, 0x2, 0x2, 0x93f, 0x942, 0x5, 0x182, 0xc2, 0x2, 0x940, 
       0x942, 0x5, 0x186, 0xc4, 0x2, 0x941, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x941, 
       0x940, 0x3, 0x2, 0x2, 0x2, 0x942, 0x181, 0x3, 0x2, 0x2, 0x2, 0x943, 
       0x944, 0x7, 0x48, 0x2, 0x2, 0x944, 0x946, 0x7, 0x56, 0x2, 0x2, 0x945, 
       0x947, 0x5, 0x184, 0xc3, 0x2, 0x946, 0x945, 0x3, 0x2, 0x2, 0x2, 0x946, 
       0x947, 0x3, 0x2, 0x2, 0x2, 0x947, 0x948, 0x3, 0x2, 0x2, 0x2, 0x948, 
       0x949, 0x7, 0x57, 0x2, 0x2, 0x949, 0x183, 0x3, 0x2, 0x2, 0x2, 0x94a, 
       0x94b, 0x8, 0xc3, 0x1, 0x2, 0x94b, 0x94d, 0x5, 0x104, 0x83, 0x2, 
       0x94c, 0x94e, 0x7, 0x86, 0x2, 0x2, 0x94d, 0x94c, 0x3, 0x2, 0x2, 0x2, 
       0x94d, 0x94e, 0x3, 0x2, 0x2, 0x2, 0x94e, 0x957, 0x3, 0x2, 0x2, 0x2, 
       0x94f, 0x950, 0xc, 0x3, 0x2, 0x2, 0x950, 0x951, 0x7, 0x7d, 0x2, 0x2, 
       0x951, 0x953, 0x5, 0x104, 0x83, 0x2, 0x952, 0x954, 0x7, 0x86, 0x2, 
       0x2, 0x953, 0x952, 0x3, 0x2, 0x2, 0x2, 0x953, 0x954, 0x3, 0x2, 0x2, 
       0x2, 0x954, 0x956, 0x3, 0x2, 0x2, 0x2, 0x955, 0x94f, 0x3, 0x2, 0x2, 
       0x2, 0x956, 0x959, 0x3, 0x2, 0x2, 0x2, 0x957, 0x955, 0x3, 0x2, 0x2, 
       0x2, 0x957, 0x958, 0x3, 0x2, 0x2, 0x2, 0x958, 0x185, 0x3, 0x2, 0x2, 
       0x2, 0x959, 0x957, 0x3, 0x2, 0x2, 0x2, 0x95a, 0x95b, 0x7, 0x33, 0x2, 
       0x2, 0x95b, 0x95c, 0x7, 0x56, 0x2, 0x2, 0x95c, 0x95d, 0x5, 0x60, 
       0x31, 0x2, 0x95d, 0x95e, 0x7, 0x57, 0x2, 0x2, 0x95e, 0x961, 0x3, 
       0x2, 0x2, 0x2, 0x95f, 0x961, 0x7, 0x33, 0x2, 0x2, 0x960, 0x95a, 0x3, 
       0x2, 0x2, 0x2, 0x960, 0x95f, 0x3, 0x2, 0x2, 0x2, 0x961, 0x187, 0x3, 
       0x2, 0x2, 0x2, 0x962, 0x996, 0x7, 0x32, 0x2, 0x2, 0x963, 0x996, 0x7, 
       0x1d, 0x2, 0x2, 0x964, 0x965, 0x7, 0x32, 0x2, 0x2, 0x965, 0x966, 
       0x7, 0x58, 0x2, 0x2, 0x966, 0x996, 0x7, 0x59, 0x2, 0x2, 0x967, 0x968, 
       0x7, 0x1d, 0x2, 0x2, 0x968, 0x969, 0x7, 0x58, 0x2, 0x2, 0x969, 0x996, 
       0x7, 0x59, 0x2, 0x2, 0x96a, 0x996, 0x7, 0x5c, 0x2, 0x2, 0x96b, 0x996, 
       0x7, 0x5d, 0x2, 0x2, 0x96c, 0x996, 0x7, 0x5e, 0x2, 0x2, 0x96d, 0x996, 
       0x7, 0x5f, 0x2, 0x2, 0x96e, 0x996, 0x7, 0x60, 0x2, 0x2, 0x96f, 0x996, 
       0x7, 0x61, 0x2, 0x2, 0x970, 0x996, 0x7, 0x62, 0x2, 0x2, 0x971, 0x996, 
       0x7, 0x63, 0x2, 0x2, 0x972, 0x996, 0x7, 0x64, 0x2, 0x2, 0x973, 0x996, 
       0x7, 0x3, 0x2, 0x2, 0x974, 0x996, 0x7, 0x4, 0x2, 0x2, 0x975, 0x996, 
       0x7, 0x66, 0x2, 0x2, 0x976, 0x996, 0x7, 0x67, 0x2, 0x2, 0x977, 0x996, 
       0x7, 0x68, 0x2, 0x2, 0x978, 0x996, 0x7, 0x69, 0x2, 0x2, 0x979, 0x996, 
       0x7, 0x6a, 0x2, 0x2, 0x97a, 0x996, 0x7, 0x6b, 0x2, 0x2, 0x97b, 0x996, 
       0x7, 0x6c, 0x2, 0x2, 0x97c, 0x996, 0x7, 0x6d, 0x2, 0x2, 0x97d, 0x996, 
       0x7, 0x6e, 0x2, 0x2, 0x97e, 0x996, 0x7, 0x6f, 0x2, 0x2, 0x97f, 0x996, 
       0x7, 0x70, 0x2, 0x2, 0x980, 0x996, 0x7, 0x71, 0x2, 0x2, 0x981, 0x996, 
       0x7, 0x72, 0x2, 0x2, 0x982, 0x996, 0x7, 0x74, 0x2, 0x2, 0x983, 0x996, 
       0x7, 0x73, 0x2, 0x2, 0x984, 0x996, 0x7, 0x75, 0x2, 0x2, 0x985, 0x996, 
       0x7, 0x76, 0x2, 0x2, 0x986, 0x996, 0x7, 0x77, 0x2, 0x2, 0x987, 0x996, 
       0x7, 0x78, 0x2, 0x2, 0x988, 0x996, 0x7, 0x5, 0x2, 0x2, 0x989, 0x996, 
       0x7, 0x6, 0x2, 0x2, 0x98a, 0x996, 0x7, 0x7, 0x2, 0x2, 0x98b, 0x996, 
       0x7, 0x8, 0x2, 0x2, 0x98c, 0x996, 0x7, 0x7b, 0x2, 0x2, 0x98d, 0x996, 
       0x7, 0x7c, 0x2, 0x2, 0x98e, 0x996, 0x7, 0x7d, 0x2, 0x2, 0x98f, 0x996, 
       0x7, 0x7e, 0x2, 0x2, 0x990, 0x996, 0x7, 0x7f, 0x2, 0x2, 0x991, 0x992, 
       0x7, 0x56, 0x2, 0x2, 0x992, 0x996, 0x7, 0x57, 0x2, 0x2, 0x993, 0x994, 
       0x7, 0x58, 0x2, 0x2, 0x994, 0x996, 0x7, 0x59, 0x2, 0x2, 0x995, 0x962, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x963, 0x3, 0x2, 0x2, 0x2, 0x995, 0x964, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x967, 0x3, 0x2, 0x2, 0x2, 0x995, 0x96a, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x96b, 0x3, 0x2, 0x2, 0x2, 0x995, 0x96c, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x96d, 0x3, 0x2, 0x2, 0x2, 0x995, 0x96e, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x96f, 0x3, 0x2, 0x2, 0x2, 0x995, 0x970, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x971, 0x3, 0x2, 0x2, 0x2, 0x995, 0x972, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x973, 0x3, 0x2, 0x2, 0x2, 0x995, 0x974, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x975, 0x3, 0x2, 0x2, 0x2, 0x995, 0x976, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x977, 0x3, 0x2, 0x2, 0x2, 0x995, 0x978, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x3, 0x2, 0x2, 0x2, 0x995, 0x979, 0x3, 0x2, 0x2, 0x2, 0x995, 0x97a, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x97b, 0x3, 0x2, 0x2, 0x2, 0x995, 0x97c, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x995, 0x97e, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x97f, 0x3, 0x2, 0x2, 0x2, 0x995, 0x980, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x981, 0x3, 0x2, 0x2, 0x2, 0x995, 0x982, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x983, 0x3, 0x2, 0x2, 0x2, 0x995, 0x984, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x985, 0x3, 0x2, 0x2, 0x2, 0x995, 0x986, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x987, 0x3, 0x2, 0x2, 0x2, 0x995, 0x988, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x989, 0x3, 0x2, 0x2, 0x2, 0x995, 0x98a, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x98b, 0x3, 0x2, 0x2, 0x2, 0x995, 0x98c, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x98d, 0x3, 0x2, 0x2, 0x2, 0x995, 0x98e, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x98f, 0x3, 0x2, 0x2, 0x2, 0x995, 0x990, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x991, 0x3, 0x2, 0x2, 0x2, 0x995, 0x993, 
       0x3, 0x2, 0x2, 0x2, 0x996, 0x189, 0x3, 0x2, 0x2, 0x2, 0x997, 0x99f, 
       0x7, 0x88, 0x2, 0x2, 0x998, 0x99f, 0x7, 0x8e, 0x2, 0x2, 0x999, 0x99f, 
       0x7, 0x8f, 0x2, 0x2, 0x99a, 0x99f, 0x7, 0x90, 0x2, 0x2, 0x99b, 0x99f, 
       0x5, 0x18c, 0xc7, 0x2, 0x99c, 0x99f, 0x5, 0x18e, 0xc8, 0x2, 0x99d, 
       0x99f, 0x5, 0x190, 0xc9, 0x2, 0x99e, 0x997, 0x3, 0x2, 0x2, 0x2, 0x99e, 
       0x998, 0x3, 0x2, 0x2, 0x2, 0x99e, 0x999, 0x3, 0x2, 0x2, 0x2, 0x99e, 
       0x99a, 0x3, 0x2, 0x2, 0x2, 0x99e, 0x99b, 0x3, 0x2, 0x2, 0x2, 0x99e, 
       0x99c, 0x3, 0x2, 0x2, 0x2, 0x99e, 0x99d, 0x3, 0x2, 0x2, 0x2, 0x99f, 
       0x18b, 0x3, 0x2, 0x2, 0x2, 0x9a0, 0x9a1, 0x9, 0xe, 0x2, 0x2, 0x9a1, 
       0x18d, 0x3, 0x2, 0x2, 0x2, 0x9a2, 0x9a3, 0x7, 0x34, 0x2, 0x2, 0x9a3, 
       0x18f, 0x3, 0x2, 0x2, 0x2, 0x9a4, 0x9a5, 0x9, 0xf, 0x2, 0x2, 0x9a5, 
       0x191, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x193, 0x19f, 0x1a3, 0x1ae, 0x1b2, 
       0x1c1, 0x1c8, 0x1cd, 0x1cf, 0x1d4, 0x1da, 0x1e4, 0x1eb, 0x1f1, 0x1f5, 
       0x1fa, 0x200, 0x207, 0x20d, 0x210, 0x213, 0x216, 0x21d, 0x224, 0x258, 
       0x267, 0x26d, 0x273, 0x280, 0x282, 0x28c, 0x29b, 0x2a1, 0x2bf, 0x2c4, 
       0x2c8, 0x2cc, 0x2cf, 0x2d3, 0x2d9, 0x2db, 0x2e3, 0x2e7, 0x2ea, 0x2f1, 
       0x2f8, 0x2fc, 0x301, 0x305, 0x308, 0x30d, 0x313, 0x320, 0x32b, 0x32d, 
       0x33c, 0x33e, 0x34a, 0x34c, 0x358, 0x36c, 0x36e, 0x37a, 0x37c, 0x387, 
       0x392, 0x39d, 0x3a9, 0x3ab, 0x3b7, 0x3b9, 0x3c3, 0x3cb, 0x3d7, 0x3de, 
       0x3e2, 0x3e6, 0x3ea, 0x3ee, 0x3f3, 0x3f6, 0x3f9, 0x3ff, 0x407, 0x40c, 
       0x40f, 0x415, 0x420, 0x437, 0x43b, 0x443, 0x449, 0x45d, 0x461, 0x46e, 
       0x472, 0x475, 0x47c, 0x484, 0x48e, 0x499, 0x4a5, 0x4af, 0x4b4, 0x4bb, 
       0x4be, 0x4c3, 0x4c8, 0x4dd, 0x4e1, 0x4e6, 0x4f1, 0x4f7, 0x4fb, 0x500, 
       0x504, 0x509, 0x50c, 0x522, 0x528, 0x533, 0x537, 0x53a, 0x544, 0x54a, 
       0x54d, 0x554, 0x55e, 0x562, 0x565, 0x568, 0x56c, 0x571, 0x573, 0x577, 
       0x57b, 0x584, 0x591, 0x599, 0x59f, 0x5a5, 0x5a9, 0x5ac, 0x5b5, 0x5be, 
       0x5c6, 0x5d1, 0x5d7, 0x5e2, 0x5e5, 0x5ea, 0x5f9, 0x5ff, 0x608, 0x612, 
       0x618, 0x620, 0x624, 0x628, 0x62d, 0x632, 0x639, 0x63b, 0x640, 0x644, 
       0x652, 0x658, 0x66a, 0x66c, 0x676, 0x67b, 0x682, 0x688, 0x68d, 0x693, 
       0x69a, 0x69e, 0x6a0, 0x6a2, 0x6a9, 0x6ac, 0x6af, 0x6b2, 0x6b7, 0x6bb, 
       0x6be, 0x6c2, 0x6c6, 0x6cb, 0x6ce, 0x6d0, 0x6d4, 0x6db, 0x6e1, 0x6e5, 
       0x6eb, 0x6f0, 0x6f2, 0x6f8, 0x6fc, 0x702, 0x709, 0x70d, 0x70f, 0x711, 
       0x718, 0x722, 0x726, 0x728, 0x72a, 0x72e, 0x731, 0x737, 0x741, 0x745, 
       0x74b, 0x753, 0x757, 0x75a, 0x75e, 0x763, 0x766, 0x769, 0x76d, 0x772, 
       0x77c, 0x783, 0x788, 0x78c, 0x791, 0x797, 0x79b, 0x7a1, 0x7a7, 0x7ab, 
       0x7b0, 0x7b6, 0x7ba, 0x7bd, 0x7c1, 0x7c4, 0x7c6, 0x7c9, 0x7d3, 0x7d8, 
       0x7da, 0x7dd, 0x7e0, 0x7e3, 0x7ec, 0x7f6, 0x7fb, 0x7fe, 0x802, 0x805, 
       0x808, 0x80c, 0x815, 0x824, 0x82a, 0x82e, 0x832, 0x836, 0x83a, 0x83e, 
       0x842, 0x846, 0x849, 0x84d, 0x858, 0x85c, 0x863, 0x867, 0x86c, 0x871, 
       0x878, 0x87c, 0x886, 0x896, 0x89b, 0x89f, 0x8a2, 0x8a6, 0x8ac, 0x8af, 
       0x8b3, 0x8bd, 0x8c0, 0x8c8, 0x8cd, 0x8d2, 0x8da, 0x8e1, 0x8e5, 0x8ec, 
       0x8f2, 0x8f6, 0x8fc, 0x905, 0x909, 0x90c, 0x91c, 0x923, 0x92c, 0x932, 
       0x936, 0x939, 0x93d, 0x941, 0x946, 0x94d, 0x953, 0x957, 0x960, 0x995, 
       0x99e, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JennyParser::Initializer JennyParser::_init;
