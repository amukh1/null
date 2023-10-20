
// Generated from Expr.g4 by ANTLR 4.13.1


#include "ExprLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ExprLexerStaticData final {
  ExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprLexerStaticData(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData(ExprLexerStaticData&&) = delete;
  ExprLexerStaticData& operator=(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData& operator=(ExprLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag exprlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprLexerStaticData *exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(exprlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "WHITESPACE", "NEWLINE", 
      "LITERAL", "IDENT", "NUMBER", "HEX", "DECIMAL", "OCTAL", "BIN", "FLOATING"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'*'", "'/'", "'+'", "'-'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "WHITESPACE", "NEWLINE", "LITERAL"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,9,113,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,
  	6,1,6,1,6,1,7,4,7,51,8,7,11,7,12,7,52,1,7,3,7,56,8,7,1,8,1,8,3,8,60,8,
  	8,1,9,1,9,4,9,64,8,9,11,9,12,9,65,1,10,1,10,1,10,1,10,1,10,3,10,73,8,
  	10,1,11,1,11,1,11,1,11,4,11,79,8,11,11,11,12,11,80,1,12,3,12,84,8,12,
  	1,12,4,12,87,8,12,11,12,12,12,88,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,
  	14,1,14,4,14,100,8,14,11,14,12,14,101,1,15,1,15,3,15,106,8,15,1,15,1,
  	15,4,15,110,8,15,11,15,12,15,111,0,0,16,1,1,3,2,5,3,7,4,9,5,11,6,13,7,
  	15,8,17,9,19,0,21,0,23,0,25,0,27,0,29,0,31,0,1,0,10,3,0,9,10,13,13,32,
  	32,2,0,10,10,13,13,1,1,59,59,2,0,65,90,97,122,3,0,48,57,65,90,97,122,
  	2,0,48,57,97,102,1,0,49,57,1,0,48,55,1,0,48,49,1,0,48,57,119,0,1,1,0,
  	0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,
  	1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,1,33,1,0,0,0,3,35,1,0,0,0,5,37,1,0,
  	0,0,7,39,1,0,0,0,9,41,1,0,0,0,11,43,1,0,0,0,13,45,1,0,0,0,15,55,1,0,0,
  	0,17,59,1,0,0,0,19,61,1,0,0,0,21,72,1,0,0,0,23,74,1,0,0,0,25,83,1,0,0,
  	0,27,90,1,0,0,0,29,95,1,0,0,0,31,105,1,0,0,0,33,34,5,42,0,0,34,2,1,0,
  	0,0,35,36,5,47,0,0,36,4,1,0,0,0,37,38,5,43,0,0,38,6,1,0,0,0,39,40,5,45,
  	0,0,40,8,1,0,0,0,41,42,5,40,0,0,42,10,1,0,0,0,43,44,5,41,0,0,44,12,1,
  	0,0,0,45,46,7,0,0,0,46,47,1,0,0,0,47,48,6,6,0,0,48,14,1,0,0,0,49,51,7,
  	1,0,0,50,49,1,0,0,0,51,52,1,0,0,0,52,50,1,0,0,0,52,53,1,0,0,0,53,56,1,
  	0,0,0,54,56,7,2,0,0,55,50,1,0,0,0,55,54,1,0,0,0,56,16,1,0,0,0,57,60,3,
  	19,9,0,58,60,3,21,10,0,59,57,1,0,0,0,59,58,1,0,0,0,60,18,1,0,0,0,61,63,
  	7,3,0,0,62,64,7,4,0,0,63,62,1,0,0,0,64,65,1,0,0,0,65,63,1,0,0,0,65,66,
  	1,0,0,0,66,20,1,0,0,0,67,73,3,23,11,0,68,73,3,25,12,0,69,73,3,27,13,0,
  	70,73,3,31,15,0,71,73,3,29,14,0,72,67,1,0,0,0,72,68,1,0,0,0,72,69,1,0,
  	0,0,72,70,1,0,0,0,72,71,1,0,0,0,73,22,1,0,0,0,74,75,5,48,0,0,75,76,5,
  	120,0,0,76,78,1,0,0,0,77,79,7,5,0,0,78,77,1,0,0,0,79,80,1,0,0,0,80,78,
  	1,0,0,0,80,81,1,0,0,0,81,24,1,0,0,0,82,84,7,6,0,0,83,82,1,0,0,0,83,84,
  	1,0,0,0,84,86,1,0,0,0,85,87,7,6,0,0,86,85,1,0,0,0,87,88,1,0,0,0,88,86,
  	1,0,0,0,88,89,1,0,0,0,89,26,1,0,0,0,90,91,5,48,0,0,91,92,5,111,0,0,92,
  	93,1,0,0,0,93,94,7,7,0,0,94,28,1,0,0,0,95,96,5,48,0,0,96,97,5,98,0,0,
  	97,99,1,0,0,0,98,100,7,8,0,0,99,98,1,0,0,0,100,101,1,0,0,0,101,99,1,0,
  	0,0,101,102,1,0,0,0,102,30,1,0,0,0,103,106,5,48,0,0,104,106,3,25,12,0,
  	105,103,1,0,0,0,105,104,1,0,0,0,106,107,1,0,0,0,107,109,5,46,0,0,108,
  	110,7,9,0,0,109,108,1,0,0,0,110,111,1,0,0,0,111,109,1,0,0,0,111,112,1,
  	0,0,0,112,32,1,0,0,0,12,0,52,55,59,65,72,80,83,88,101,105,111,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprlexerLexerStaticData = staticData.release();
}

}

ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  ExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprlexerLexerStaticData->atn, exprlexerLexerStaticData->decisionToDFA, exprlexerLexerStaticData->sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return exprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return exprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return exprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return exprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprLexer::getSerializedATN() const {
  return exprlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return *exprlexerLexerStaticData->atn;
}




void ExprLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
#endif
}
