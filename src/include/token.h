#ifndef TOKEN_H
#define TOKEN_H

#include <string>

enum class TokenType {
    Module, EndModule,
    Input, Output,
    Assign, Equal,
    Plus, Minus,
    Comma, Semicolon,
    Unknown,
    Identifier
};

struct Token {
    TokenType type;
    std::string value;
};

#endif  // TOKEN_H
