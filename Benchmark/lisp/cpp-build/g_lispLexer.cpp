
// Generated from g_lisp.g4 by ANTLR 4.7.2


#include "g_lispLexer.h"


using namespace antlr4;


g_lispLexer::g_lispLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

g_lispLexer::~g_lispLexer() {
  delete _interpreter;
}

std::string g_lispLexer::getGrammarFileName() const {
  return "g_lisp.g4";
}

const std::vector<std::string>& g_lispLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& g_lispLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& g_lispLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& g_lispLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& g_lispLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> g_lispLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& g_lispLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> g_lispLexer::_decisionToDFA;
atn::PredictionContextCache g_lispLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN g_lispLexer::_atn;
std::vector<uint16_t> g_lispLexer::_serializedATN;

std::vector<std::string> g_lispLexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"LETTER", u8"NUMBER", u8"EMPTY"
};

std::vector<std::string> g_lispLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> g_lispLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> g_lispLexer::_literalNames = {
  "", u8"'('", u8"'.'", u8"')'", "", "", u8"' '"
};

std::vector<std::string> g_lispLexer::_symbolicNames = {
  "", "", "", "", u8"LETTER", u8"NUMBER", u8"EMPTY"
};

dfa::Vocabulary g_lispLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> g_lispLexer::_tokenNames;

g_lispLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x8, 0x1b, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x2, 0x2, 0x8, 
    0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x5, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x9, 0x15, 0x3, 0x2, 0x2, 0x2, 0xb, 0x17, 0x3, 0x2, 0x2, 0x2, 0xd, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x7, 0x2a, 0x2, 0x2, 0x10, 0x4, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x7, 0x30, 0x2, 0x2, 0x12, 0x6, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x14, 0x7, 0x2b, 0x2, 0x2, 0x14, 0x8, 0x3, 0x2, 
    0x2, 0x2, 0x15, 0x16, 0x4, 0x63, 0x7c, 0x2, 0x16, 0xa, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x18, 0x4, 0x32, 0x3b, 0x2, 0x18, 0xc, 0x3, 0x2, 0x2, 0x2, 
    0x19, 0x1a, 0x7, 0x22, 0x2, 0x2, 0x1a, 0xe, 0x3, 0x2, 0x2, 0x2, 0x3, 
    0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

g_lispLexer::Initializer g_lispLexer::_init;
