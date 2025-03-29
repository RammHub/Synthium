#ifndef PARSER_H
#define PARSER_H

#include "token.h"
#include "ast.h"
#include <vector>

class Parser {
public:
    explicit Parser(const std::vector<Token>& tokens);  // ✅ Ensure this matches parser.cpp
    ASTNode parseModule();

private:
    std::vector<Token> tokens;
    size_t currentIndex = 0;

    Token currentToken();
    Token consume(TokenType expectedType);
    void expect(TokenType expectedType);  // ✅ Ensure this is declared
    ASTNode parsePort();     // ✅ Declare parsePort()
    ASTNode parseAssign();   // ✅ Declare parseAssign()
};

#endif // PARSER_H
