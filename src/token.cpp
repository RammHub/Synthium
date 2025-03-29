#include "include/token.h"

std::string tokenTypeToString(TokenType type) {
    switch (type) {
        case TokenType::Module: return "Module";
        case TokenType::Identifier: return "Identifier";
        case TokenType::LParen: return "LParen";
        case TokenType::RParen: return "RParen";
        case TokenType::Comma: return "Comma";
        case TokenType::Plus: return "Plus";
        case TokenType::Minus: return "Minus";
        case TokenType::Input: return "Input";
        case TokenType::Output: return "Output";
        case TokenType::Assign: return "Assign";
        case TokenType::Number: return "Number";
        case TokenType::Semicolon: return "Semicolon";
        case TokenType::Equal: return "Equal";
        case TokenType::Unknown: return "Unknown";
        default: return "Unknown";
    }
}
