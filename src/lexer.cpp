#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include "include/token.h"
#include "include/lexer.h"

std::vector<Token> lex(const std::string& code) {
    std::vector<Token> tokens;
    std::regex tokenRegex(R"(\b(module|endmodule|input|output|assign)\b|[a-zA-Z_][a-zA-Z0-9_]*|[=;+*/()-]|,)");

    std::sregex_iterator words_begin(code.begin(), code.end(), tokenRegex);
    std::sregex_iterator words_end;

    for (auto it = words_begin; it != words_end; ++it) {
        std::string value = it->str();

        if (value == "module") tokens.push_back({TokenType::Module, value});
        else if (value == "endmodule") tokens.push_back({TokenType::EndModule, value});
        else if (value == "input") tokens.push_back({TokenType::Input, value});
        else if (value == "output") tokens.push_back({TokenType::Output, value});
        else if (value == "assign") tokens.push_back({TokenType::Assign, value});
        else if (value == "=") tokens.push_back({TokenType::Equal, value});
        else if (value == "+") tokens.push_back({TokenType::Plus, value});
        else if (value == "-") tokens.push_back({TokenType::Minus, value});
        else if (value == ",") tokens.push_back({TokenType::Comma, value});
        else if (value == ";") tokens.push_back({TokenType::Semicolon, value});  // ✅ Handle statements properly
        else if (value == "(") tokens.push_back({TokenType::LParen, value});  // ✅ Handle statements properly
        else if (value == ")") tokens.push_back({TokenType::RParen, value});  // ✅ Handle statements properly
        else tokens.push_back({TokenType::Identifier, value});

    }

    return tokens;
}
