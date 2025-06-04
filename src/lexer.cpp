#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include "include/token.h"
#include "include/lexer.h"

std::vector<Token> lex(const std::string& code) {
    std::vector<Token> tokens;
    std::regex tokenRegex(R"(\b(module|endmodule|input|output|assign|wire|reg|always|begin|end|if|else)\b|[a-zA-Z_][a-zA-Z0-9_]*|[=;+*/()-]|,)");

    std::sregex_iterator words_begin(code.begin(), code.end(), tokenRegex);
    std::sregex_iterator words_end;

    for (auto it = words_begin; it != words_end; ++it) {
        std::string value = it->str();

        if (value == "module") tokens.push_back({TokenType::Module, value});
        else if (value == "endmodule") tokens.push_back({TokenType::EndModule, value});
        else if (value == "input") tokens.push_back({TokenType::Input, value});
        else if (value == "output") tokens.push_back({TokenType::Output, value});
        else if (value == "assign") tokens.push_back({TokenType::Assign, value});
        else if (value == "wire") tokens.push_back({TokenType::Wire, value});
        else if (value == "reg") tokens.push_back({TokenType::Reg, value});
        else if (value == "always") tokens.push_back({TokenType::Always, value});
        else if (value == "begin") tokens.push_back({TokenType::Begin, value});
        else if (value == "end") tokens.push_back({TokenType::End, value});
        else if (value == "if") tokens.push_back({TokenType::If, value});
        else if (value == "else") tokens.push_back({TokenType::Else, value});
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
