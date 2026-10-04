
 


// Generated from uC.g4 by ANTLR 4.13.1



#include "uCParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct UCParserStaticData final {
  UCParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  UCParserStaticData(const UCParserStaticData&) = delete;
  UCParserStaticData(UCParserStaticData&&) = delete;
  UCParserStaticData& operator=(const UCParserStaticData&) = delete;
  UCParserStaticData& operator=(UCParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ucParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
UCParserStaticData *ucParserStaticData = nullptr;

void ucParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (ucParserStaticData != nullptr) {
    return;
  }
#else
  assert(ucParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<UCParserStaticData>(
    std::vector<std::string>{
      "program", "decls", "var_decls", "ident", "var_decl", "str_decl", 
      "base_type", "function", "statements", "statement", "base_stmt", "read_stmt", 
      "print_stmt", "return_stmt", "assign_stmt", "if_stmt", "while_stmt", 
      "primary", "unaryminus_expr", "expr", "term", "cond", "cmpop", "mulop", 
      "addop"
    },
    std::vector<std::string>{
      "", "';'", "'string'", "'='", "'int'", "'float'", "'main'", "'('", 
      "')'", "'{'", "'}'", "'read'", "'print'", "'return'", "'if'", "'else'", 
      "'while'", "'-'", "'<'", "'<='", "'>='", "'=='", "'!='", "'>'", "'*'", 
      "'/'", "'+'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "IDENTIFIER", "INT_LITERAL", 
      "FLOAT_LITERAL", "STR_LITERAL", "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,197,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,3,1,61,8,1,1,2,1,2,1,2,1,2,3,2,67,8,2,1,3,1,3,1,4,1,4,1,4,1,4,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,
  	8,1,8,3,8,95,8,8,1,9,1,9,1,9,1,9,1,9,3,9,102,8,9,1,10,1,10,1,10,1,10,
  	3,10,108,8,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,
  	1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,3,15,139,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,157,8,17,1,18,1,18,
  	1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,5,19,169,8,19,10,19,12,19,172,
  	9,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,5,20,182,8,20,10,20,12,20,
  	185,9,20,1,21,1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,24,0,2,38,
  	40,25,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,0,4,1,0,4,5,1,0,18,23,1,0,24,25,2,0,17,17,26,26,187,0,50,1,0,0,
  	0,2,60,1,0,0,0,4,66,1,0,0,0,6,68,1,0,0,0,8,70,1,0,0,0,10,74,1,0,0,0,12,
  	80,1,0,0,0,14,82,1,0,0,0,16,94,1,0,0,0,18,101,1,0,0,0,20,107,1,0,0,0,
  	22,109,1,0,0,0,24,114,1,0,0,0,26,119,1,0,0,0,28,122,1,0,0,0,30,126,1,
  	0,0,0,32,140,1,0,0,0,34,156,1,0,0,0,36,158,1,0,0,0,38,161,1,0,0,0,40,
  	173,1,0,0,0,42,186,1,0,0,0,44,190,1,0,0,0,46,192,1,0,0,0,48,194,1,0,0,
  	0,50,51,3,2,1,0,51,52,3,14,7,0,52,1,1,0,0,0,53,54,3,8,4,0,54,55,3,2,1,
  	0,55,61,1,0,0,0,56,57,3,10,5,0,57,58,3,2,1,0,58,61,1,0,0,0,59,61,1,0,
  	0,0,60,53,1,0,0,0,60,56,1,0,0,0,60,59,1,0,0,0,61,3,1,0,0,0,62,63,3,8,
  	4,0,63,64,3,4,2,0,64,67,1,0,0,0,65,67,1,0,0,0,66,62,1,0,0,0,66,65,1,0,
  	0,0,67,5,1,0,0,0,68,69,5,27,0,0,69,7,1,0,0,0,70,71,3,12,6,0,71,72,3,6,
  	3,0,72,73,5,1,0,0,73,9,1,0,0,0,74,75,5,2,0,0,75,76,3,6,3,0,76,77,5,3,
  	0,0,77,78,5,30,0,0,78,79,5,1,0,0,79,11,1,0,0,0,80,81,7,0,0,0,81,13,1,
  	0,0,0,82,83,5,4,0,0,83,84,5,6,0,0,84,85,5,7,0,0,85,86,5,8,0,0,86,87,5,
  	9,0,0,87,88,3,16,8,0,88,89,5,10,0,0,89,15,1,0,0,0,90,91,3,18,9,0,91,92,
  	3,16,8,0,92,95,1,0,0,0,93,95,1,0,0,0,94,90,1,0,0,0,94,93,1,0,0,0,95,17,
  	1,0,0,0,96,97,3,20,10,0,97,98,5,1,0,0,98,102,1,0,0,0,99,102,3,30,15,0,
  	100,102,3,32,16,0,101,96,1,0,0,0,101,99,1,0,0,0,101,100,1,0,0,0,102,19,
  	1,0,0,0,103,108,3,28,14,0,104,108,3,22,11,0,105,108,3,24,12,0,106,108,
  	3,26,13,0,107,103,1,0,0,0,107,104,1,0,0,0,107,105,1,0,0,0,107,106,1,0,
  	0,0,108,21,1,0,0,0,109,110,5,11,0,0,110,111,5,7,0,0,111,112,3,6,3,0,112,
  	113,5,8,0,0,113,23,1,0,0,0,114,115,5,12,0,0,115,116,5,7,0,0,116,117,3,
  	38,19,0,117,118,5,8,0,0,118,25,1,0,0,0,119,120,5,13,0,0,120,121,3,38,
  	19,0,121,27,1,0,0,0,122,123,3,6,3,0,123,124,5,3,0,0,124,125,3,38,19,0,
  	125,29,1,0,0,0,126,127,5,14,0,0,127,128,5,7,0,0,128,129,3,42,21,0,129,
  	130,5,8,0,0,130,131,5,9,0,0,131,132,3,16,8,0,132,138,5,10,0,0,133,134,
  	5,15,0,0,134,135,5,9,0,0,135,136,3,16,8,0,136,137,5,10,0,0,137,139,1,
  	0,0,0,138,133,1,0,0,0,138,139,1,0,0,0,139,31,1,0,0,0,140,141,5,16,0,0,
  	141,142,5,7,0,0,142,143,3,42,21,0,143,144,5,8,0,0,144,145,5,9,0,0,145,
  	146,3,16,8,0,146,147,5,10,0,0,147,33,1,0,0,0,148,157,3,6,3,0,149,150,
  	5,7,0,0,150,151,3,38,19,0,151,152,5,8,0,0,152,157,1,0,0,0,153,157,3,36,
  	18,0,154,157,5,28,0,0,155,157,5,29,0,0,156,148,1,0,0,0,156,149,1,0,0,
  	0,156,153,1,0,0,0,156,154,1,0,0,0,156,155,1,0,0,0,157,35,1,0,0,0,158,
  	159,5,17,0,0,159,160,3,38,19,0,160,37,1,0,0,0,161,162,6,19,-1,0,162,163,
  	3,40,20,0,163,170,1,0,0,0,164,165,10,1,0,0,165,166,3,48,24,0,166,167,
  	3,40,20,0,167,169,1,0,0,0,168,164,1,0,0,0,169,172,1,0,0,0,170,168,1,0,
  	0,0,170,171,1,0,0,0,171,39,1,0,0,0,172,170,1,0,0,0,173,174,6,20,-1,0,
  	174,175,3,34,17,0,175,183,1,0,0,0,176,177,10,1,0,0,177,178,3,46,23,0,
  	178,179,3,34,17,0,179,180,5,1,0,0,180,182,1,0,0,0,181,176,1,0,0,0,182,
  	185,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,41,1,0,0,0,185,183,1,
  	0,0,0,186,187,3,38,19,0,187,188,3,44,22,0,188,189,3,38,19,0,189,43,1,
  	0,0,0,190,191,7,1,0,0,191,45,1,0,0,0,192,193,7,2,0,0,193,47,1,0,0,0,194,
  	195,7,3,0,0,195,49,1,0,0,0,9,60,66,94,101,107,138,156,170,183
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ucParserStaticData = staticData.release();
}

}

uCParser::uCParser(TokenStream *input) : uCParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

uCParser::uCParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  uCParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ucParserStaticData->atn, ucParserStaticData->decisionToDFA, ucParserStaticData->sharedContextCache, options);
}

uCParser::~uCParser() {
  delete _interpreter;
}

const atn::ATN& uCParser::getATN() const {
  return *ucParserStaticData->atn;
}

std::string uCParser::getGrammarFileName() const {
  return "uC.g4";
}

const std::vector<std::string>& uCParser::getRuleNames() const {
  return ucParserStaticData->ruleNames;
}

const dfa::Vocabulary& uCParser::getVocabulary() const {
  return ucParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView uCParser::getSerializedATN() const {
  return ucParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

uCParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::DeclsContext* uCParser::ProgramContext::decls() {
  return getRuleContext<uCParser::DeclsContext>(0);
}

uCParser::FunctionContext* uCParser::ProgramContext::function() {
  return getRuleContext<uCParser::FunctionContext>(0);
}


size_t uCParser::ProgramContext::getRuleIndex() const {
  return uCParser::RuleProgram;
}


uCParser::ProgramContext* uCParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, uCParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    decls();
    setState(51);
    function();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclsContext ------------------------------------------------------------------

uCParser::DeclsContext::DeclsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::Var_declContext* uCParser::DeclsContext::var_decl() {
  return getRuleContext<uCParser::Var_declContext>(0);
}

uCParser::DeclsContext* uCParser::DeclsContext::decls() {
  return getRuleContext<uCParser::DeclsContext>(0);
}

uCParser::Str_declContext* uCParser::DeclsContext::str_decl() {
  return getRuleContext<uCParser::Str_declContext>(0);
}


size_t uCParser::DeclsContext::getRuleIndex() const {
  return uCParser::RuleDecls;
}


uCParser::DeclsContext* uCParser::decls() {
  DeclsContext *_localctx = _tracker.createInstance<DeclsContext>(_ctx, getState());
  enterRule(_localctx, 2, uCParser::RuleDecls);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      var_decl();
      setState(54);
      decls();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      str_decl();
      setState(57);
      decls();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);

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

//----------------- Var_declsContext ------------------------------------------------------------------

uCParser::Var_declsContext::Var_declsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::Var_declContext* uCParser::Var_declsContext::var_decl() {
  return getRuleContext<uCParser::Var_declContext>(0);
}

uCParser::Var_declsContext* uCParser::Var_declsContext::var_decls() {
  return getRuleContext<uCParser::Var_declsContext>(0);
}


size_t uCParser::Var_declsContext::getRuleIndex() const {
  return uCParser::RuleVar_decls;
}


uCParser::Var_declsContext* uCParser::var_decls() {
  Var_declsContext *_localctx = _tracker.createInstance<Var_declsContext>(_ctx, getState());
  enterRule(_localctx, 4, uCParser::RuleVar_decls);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(62);
      var_decl();
      setState(63);
      var_decls();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

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

//----------------- IdentContext ------------------------------------------------------------------

uCParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* uCParser::IdentContext::IDENTIFIER() {
  return getToken(uCParser::IDENTIFIER, 0);
}


size_t uCParser::IdentContext::getRuleIndex() const {
  return uCParser::RuleIdent;
}


uCParser::IdentContext* uCParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 6, uCParser::RuleIdent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(uCParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

uCParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::Base_typeContext* uCParser::Var_declContext::base_type() {
  return getRuleContext<uCParser::Base_typeContext>(0);
}

uCParser::IdentContext* uCParser::Var_declContext::ident() {
  return getRuleContext<uCParser::IdentContext>(0);
}


size_t uCParser::Var_declContext::getRuleIndex() const {
  return uCParser::RuleVar_decl;
}


uCParser::Var_declContext* uCParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 8, uCParser::RuleVar_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    base_type();
    setState(71);
    ident();
    setState(72);
    match(uCParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Str_declContext ------------------------------------------------------------------

uCParser::Str_declContext::Str_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::IdentContext* uCParser::Str_declContext::ident() {
  return getRuleContext<uCParser::IdentContext>(0);
}

tree::TerminalNode* uCParser::Str_declContext::STR_LITERAL() {
  return getToken(uCParser::STR_LITERAL, 0);
}


size_t uCParser::Str_declContext::getRuleIndex() const {
  return uCParser::RuleStr_decl;
}


uCParser::Str_declContext* uCParser::str_decl() {
  Str_declContext *_localctx = _tracker.createInstance<Str_declContext>(_ctx, getState());
  enterRule(_localctx, 10, uCParser::RuleStr_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(uCParser::T__1);
    setState(75);
    ident();
    setState(76);
    match(uCParser::T__2);
    setState(77);
    match(uCParser::STR_LITERAL);
    setState(78);
    match(uCParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_typeContext ------------------------------------------------------------------

uCParser::Base_typeContext::Base_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t uCParser::Base_typeContext::getRuleIndex() const {
  return uCParser::RuleBase_type;
}


uCParser::Base_typeContext* uCParser::base_type() {
  Base_typeContext *_localctx = _tracker.createInstance<Base_typeContext>(_ctx, getState());
  enterRule(_localctx, 12, uCParser::RuleBase_type);
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
    setState(80);
    _la = _input->LA(1);
    if (!(_la == uCParser::T__3

    || _la == uCParser::T__4)) {
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

//----------------- FunctionContext ------------------------------------------------------------------

uCParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::StatementsContext* uCParser::FunctionContext::statements() {
  return getRuleContext<uCParser::StatementsContext>(0);
}


size_t uCParser::FunctionContext::getRuleIndex() const {
  return uCParser::RuleFunction;
}


uCParser::FunctionContext* uCParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 14, uCParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(uCParser::T__3);
    setState(83);
    match(uCParser::T__5);
    setState(84);
    match(uCParser::T__6);
    setState(85);
    match(uCParser::T__7);
    setState(86);
    match(uCParser::T__8);
    setState(87);
    statements();
    setState(88);
    match(uCParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

uCParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::StatementContext* uCParser::StatementsContext::statement() {
  return getRuleContext<uCParser::StatementContext>(0);
}

uCParser::StatementsContext* uCParser::StatementsContext::statements() {
  return getRuleContext<uCParser::StatementsContext>(0);
}


size_t uCParser::StatementsContext::getRuleIndex() const {
  return uCParser::RuleStatements;
}


uCParser::StatementsContext* uCParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 16, uCParser::RuleStatements);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(94);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case uCParser::T__10:
      case uCParser::T__11:
      case uCParser::T__12:
      case uCParser::T__13:
      case uCParser::T__15:
      case uCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(90);
        statement();
        setState(91);
        statements();
        break;
      }

      case uCParser::T__9: {
        enterOuterAlt(_localctx, 2);

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

//----------------- StatementContext ------------------------------------------------------------------

uCParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::Base_stmtContext* uCParser::StatementContext::base_stmt() {
  return getRuleContext<uCParser::Base_stmtContext>(0);
}

uCParser::If_stmtContext* uCParser::StatementContext::if_stmt() {
  return getRuleContext<uCParser::If_stmtContext>(0);
}

uCParser::While_stmtContext* uCParser::StatementContext::while_stmt() {
  return getRuleContext<uCParser::While_stmtContext>(0);
}


size_t uCParser::StatementContext::getRuleIndex() const {
  return uCParser::RuleStatement;
}


uCParser::StatementContext* uCParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 18, uCParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(101);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case uCParser::T__10:
      case uCParser::T__11:
      case uCParser::T__12:
      case uCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(96);
        base_stmt();
        setState(97);
        match(uCParser::T__0);
        break;
      }

      case uCParser::T__13: {
        enterOuterAlt(_localctx, 2);
        setState(99);
        if_stmt();
        break;
      }

      case uCParser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(100);
        while_stmt();
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

//----------------- Base_stmtContext ------------------------------------------------------------------

uCParser::Base_stmtContext::Base_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::Assign_stmtContext* uCParser::Base_stmtContext::assign_stmt() {
  return getRuleContext<uCParser::Assign_stmtContext>(0);
}

uCParser::Read_stmtContext* uCParser::Base_stmtContext::read_stmt() {
  return getRuleContext<uCParser::Read_stmtContext>(0);
}

uCParser::Print_stmtContext* uCParser::Base_stmtContext::print_stmt() {
  return getRuleContext<uCParser::Print_stmtContext>(0);
}

uCParser::Return_stmtContext* uCParser::Base_stmtContext::return_stmt() {
  return getRuleContext<uCParser::Return_stmtContext>(0);
}


size_t uCParser::Base_stmtContext::getRuleIndex() const {
  return uCParser::RuleBase_stmt;
}


uCParser::Base_stmtContext* uCParser::base_stmt() {
  Base_stmtContext *_localctx = _tracker.createInstance<Base_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, uCParser::RuleBase_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case uCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(103);
        assign_stmt();
        break;
      }

      case uCParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(104);
        read_stmt();
        break;
      }

      case uCParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(105);
        print_stmt();
        break;
      }

      case uCParser::T__12: {
        enterOuterAlt(_localctx, 4);
        setState(106);
        return_stmt();
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

//----------------- Read_stmtContext ------------------------------------------------------------------

uCParser::Read_stmtContext::Read_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::IdentContext* uCParser::Read_stmtContext::ident() {
  return getRuleContext<uCParser::IdentContext>(0);
}


size_t uCParser::Read_stmtContext::getRuleIndex() const {
  return uCParser::RuleRead_stmt;
}


uCParser::Read_stmtContext* uCParser::read_stmt() {
  Read_stmtContext *_localctx = _tracker.createInstance<Read_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, uCParser::RuleRead_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(uCParser::T__10);
    setState(110);
    match(uCParser::T__6);
    setState(111);
    ident();
    setState(112);
    match(uCParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_stmtContext ------------------------------------------------------------------

uCParser::Print_stmtContext::Print_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::ExprContext* uCParser::Print_stmtContext::expr() {
  return getRuleContext<uCParser::ExprContext>(0);
}


size_t uCParser::Print_stmtContext::getRuleIndex() const {
  return uCParser::RulePrint_stmt;
}


uCParser::Print_stmtContext* uCParser::print_stmt() {
  Print_stmtContext *_localctx = _tracker.createInstance<Print_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, uCParser::RulePrint_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(uCParser::T__11);
    setState(115);
    match(uCParser::T__6);
    setState(116);
    expr(0);
    setState(117);
    match(uCParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

uCParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::ExprContext* uCParser::Return_stmtContext::expr() {
  return getRuleContext<uCParser::ExprContext>(0);
}


size_t uCParser::Return_stmtContext::getRuleIndex() const {
  return uCParser::RuleReturn_stmt;
}


uCParser::Return_stmtContext* uCParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, uCParser::RuleReturn_stmt);

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
    match(uCParser::T__12);
    setState(120);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_stmtContext ------------------------------------------------------------------

uCParser::Assign_stmtContext::Assign_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::IdentContext* uCParser::Assign_stmtContext::ident() {
  return getRuleContext<uCParser::IdentContext>(0);
}

uCParser::ExprContext* uCParser::Assign_stmtContext::expr() {
  return getRuleContext<uCParser::ExprContext>(0);
}


size_t uCParser::Assign_stmtContext::getRuleIndex() const {
  return uCParser::RuleAssign_stmt;
}


uCParser::Assign_stmtContext* uCParser::assign_stmt() {
  Assign_stmtContext *_localctx = _tracker.createInstance<Assign_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, uCParser::RuleAssign_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    ident();
    setState(123);
    match(uCParser::T__2);
    setState(124);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

uCParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::CondContext* uCParser::If_stmtContext::cond() {
  return getRuleContext<uCParser::CondContext>(0);
}

std::vector<uCParser::StatementsContext *> uCParser::If_stmtContext::statements() {
  return getRuleContexts<uCParser::StatementsContext>();
}

uCParser::StatementsContext* uCParser::If_stmtContext::statements(size_t i) {
  return getRuleContext<uCParser::StatementsContext>(i);
}


size_t uCParser::If_stmtContext::getRuleIndex() const {
  return uCParser::RuleIf_stmt;
}


uCParser::If_stmtContext* uCParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, uCParser::RuleIf_stmt);
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
    setState(126);
    match(uCParser::T__13);
    setState(127);
    match(uCParser::T__6);
    setState(128);
    cond();
    setState(129);
    match(uCParser::T__7);
    setState(130);
    match(uCParser::T__8);
    setState(131);
    statements();
    setState(132);
    match(uCParser::T__9);
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == uCParser::T__14) {
      setState(133);
      match(uCParser::T__14);
      setState(134);
      match(uCParser::T__8);
      setState(135);
      statements();
      setState(136);
      match(uCParser::T__9);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

uCParser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::CondContext* uCParser::While_stmtContext::cond() {
  return getRuleContext<uCParser::CondContext>(0);
}

uCParser::StatementsContext* uCParser::While_stmtContext::statements() {
  return getRuleContext<uCParser::StatementsContext>(0);
}


size_t uCParser::While_stmtContext::getRuleIndex() const {
  return uCParser::RuleWhile_stmt;
}


uCParser::While_stmtContext* uCParser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 32, uCParser::RuleWhile_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(uCParser::T__15);
    setState(141);
    match(uCParser::T__6);
    setState(142);
    cond();
    setState(143);
    match(uCParser::T__7);
    setState(144);
    match(uCParser::T__8);
    setState(145);
    statements();
    setState(146);
    match(uCParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

uCParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::IdentContext* uCParser::PrimaryContext::ident() {
  return getRuleContext<uCParser::IdentContext>(0);
}

uCParser::ExprContext* uCParser::PrimaryContext::expr() {
  return getRuleContext<uCParser::ExprContext>(0);
}

uCParser::Unaryminus_exprContext* uCParser::PrimaryContext::unaryminus_expr() {
  return getRuleContext<uCParser::Unaryminus_exprContext>(0);
}

tree::TerminalNode* uCParser::PrimaryContext::INT_LITERAL() {
  return getToken(uCParser::INT_LITERAL, 0);
}

tree::TerminalNode* uCParser::PrimaryContext::FLOAT_LITERAL() {
  return getToken(uCParser::FLOAT_LITERAL, 0);
}


size_t uCParser::PrimaryContext::getRuleIndex() const {
  return uCParser::RulePrimary;
}


uCParser::PrimaryContext* uCParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 34, uCParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case uCParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(148);
        ident();
        break;
      }

      case uCParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(149);
        match(uCParser::T__6);
        setState(150);
        expr(0);
        setState(151);
        match(uCParser::T__7);
        break;
      }

      case uCParser::T__16: {
        enterOuterAlt(_localctx, 3);
        setState(153);
        unaryminus_expr();
        break;
      }

      case uCParser::INT_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(154);
        match(uCParser::INT_LITERAL);
        break;
      }

      case uCParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(155);
        match(uCParser::FLOAT_LITERAL);
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

//----------------- Unaryminus_exprContext ------------------------------------------------------------------

uCParser::Unaryminus_exprContext::Unaryminus_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::ExprContext* uCParser::Unaryminus_exprContext::expr() {
  return getRuleContext<uCParser::ExprContext>(0);
}


size_t uCParser::Unaryminus_exprContext::getRuleIndex() const {
  return uCParser::RuleUnaryminus_expr;
}


uCParser::Unaryminus_exprContext* uCParser::unaryminus_expr() {
  Unaryminus_exprContext *_localctx = _tracker.createInstance<Unaryminus_exprContext>(_ctx, getState());
  enterRule(_localctx, 36, uCParser::RuleUnaryminus_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(uCParser::T__16);
    setState(159);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

uCParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::TermContext* uCParser::ExprContext::term() {
  return getRuleContext<uCParser::TermContext>(0);
}

uCParser::ExprContext* uCParser::ExprContext::expr() {
  return getRuleContext<uCParser::ExprContext>(0);
}

uCParser::AddopContext* uCParser::ExprContext::addop() {
  return getRuleContext<uCParser::AddopContext>(0);
}


size_t uCParser::ExprContext::getRuleIndex() const {
  return uCParser::RuleExpr;
}



uCParser::ExprContext* uCParser::expr() {
   return expr(0);
}

uCParser::ExprContext* uCParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  uCParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  uCParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, uCParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(162);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(170);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr);
        setState(164);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(165);
        addop();
        setState(166);
        term(0); 
      }
      setState(172);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

uCParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

uCParser::PrimaryContext* uCParser::TermContext::primary() {
  return getRuleContext<uCParser::PrimaryContext>(0);
}

uCParser::TermContext* uCParser::TermContext::term() {
  return getRuleContext<uCParser::TermContext>(0);
}

uCParser::MulopContext* uCParser::TermContext::mulop() {
  return getRuleContext<uCParser::MulopContext>(0);
}


size_t uCParser::TermContext::getRuleIndex() const {
  return uCParser::RuleTerm;
}



uCParser::TermContext* uCParser::term() {
   return term(0);
}

uCParser::TermContext* uCParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  uCParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  uCParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, uCParser::RuleTerm, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(174);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(183);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TermContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTerm);
        setState(176);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(177);
        mulop();
        setState(178);
        primary();
        setState(179);
        match(uCParser::T__0); 
      }
      setState(185);
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

//----------------- CondContext ------------------------------------------------------------------

uCParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<uCParser::ExprContext *> uCParser::CondContext::expr() {
  return getRuleContexts<uCParser::ExprContext>();
}

uCParser::ExprContext* uCParser::CondContext::expr(size_t i) {
  return getRuleContext<uCParser::ExprContext>(i);
}

uCParser::CmpopContext* uCParser::CondContext::cmpop() {
  return getRuleContext<uCParser::CmpopContext>(0);
}


size_t uCParser::CondContext::getRuleIndex() const {
  return uCParser::RuleCond;
}


uCParser::CondContext* uCParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 42, uCParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    expr(0);
    setState(187);
    cmpop();
    setState(188);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CmpopContext ------------------------------------------------------------------

uCParser::CmpopContext::CmpopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t uCParser::CmpopContext::getRuleIndex() const {
  return uCParser::RuleCmpop;
}


uCParser::CmpopContext* uCParser::cmpop() {
  CmpopContext *_localctx = _tracker.createInstance<CmpopContext>(_ctx, getState());
  enterRule(_localctx, 44, uCParser::RuleCmpop);
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
    setState(190);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16515072) != 0))) {
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

//----------------- MulopContext ------------------------------------------------------------------

uCParser::MulopContext::MulopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t uCParser::MulopContext::getRuleIndex() const {
  return uCParser::RuleMulop;
}


uCParser::MulopContext* uCParser::mulop() {
  MulopContext *_localctx = _tracker.createInstance<MulopContext>(_ctx, getState());
  enterRule(_localctx, 46, uCParser::RuleMulop);
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
    setState(192);
    _la = _input->LA(1);
    if (!(_la == uCParser::T__23

    || _la == uCParser::T__24)) {
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

//----------------- AddopContext ------------------------------------------------------------------

uCParser::AddopContext::AddopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t uCParser::AddopContext::getRuleIndex() const {
  return uCParser::RuleAddop;
}


uCParser::AddopContext* uCParser::addop() {
  AddopContext *_localctx = _tracker.createInstance<AddopContext>(_ctx, getState());
  enterRule(_localctx, 48, uCParser::RuleAddop);
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
    setState(194);
    _la = _input->LA(1);
    if (!(_la == uCParser::T__16

    || _la == uCParser::T__25)) {
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

bool uCParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 19: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);
    case 20: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool uCParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool uCParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void uCParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  ucParserInitialize();
#else
  ::antlr4::internal::call_once(ucParserOnceFlag, ucParserInitialize);
#endif
}
