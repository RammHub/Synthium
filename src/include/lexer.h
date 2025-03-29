#ifndef LEXER_H
#define LEXER_H

#include "token.h"

#include <vector>
std::vector<Token> lex(const std::string& code);

#endif // LEXER_H
