#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include "include/token.h"
#include "include/lexer.h"

/*enum class TokenType {*/
/*    Keyword, Identifier, Number, Operator, Punctuation, Unknown*/
/*};*/
/**/
/*struct Token {*/
/*    TokenType type;*/
/*    std::string value;*/
/*};*/

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

/*int main() {*/
/*    std::string verilog_code = "module adder(input logic [3:0] a, b, output logic [3:0] sum); assign sum = a + b; endmodule";*/
/*    auto tokens = lex(verilog_code);*/
/**/
/*    for (const auto& token : tokens) {*/
/*        std::cout << "Token: " << token.value << "\n";*/
/*    }*/
/*    return 0;*/
/*}*/
