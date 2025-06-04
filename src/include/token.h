#ifndef TOKEN_H
#define TOKEN_H

#include <string>

enum class TokenType {
    Module, EndModule,
    Input, Output,
    Wire, Reg,
    Always, Begin, End,
    If, Else,
    LParen, RParen,
    Assign, Equal,
    Plus, Minus,
    Comma, Semicolon,
    Number,
    Unknown,
    Identifier
};

struct Token {
    TokenType type;
    std::string value;
};

std::string tokenTypeToString(TokenType type);

#endif  // TOKEN_H
