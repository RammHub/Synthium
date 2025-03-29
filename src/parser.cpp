#include "include/parser.h"
#include "include/ast.h"
#include "include/token.h"
#include "include/lexer.h"
#include <iostream>
#include <stdexcept>

// ✅ Constructor matches declaration
Parser::Parser(const std::vector<Token>& tokens) : tokens(tokens), currentIndex(0) {}

// Constructor
//Parser::Parser(std::vector<Token> tokens) : tokens(std::move(tokens)) {}

/*// Peek at the next token without consuming it*/
/*Token Parser::peek() {*/
/*    return (index < tokens.size()) ? tokens[index] : Token{TokenType::Unknown, ""};*/
/*}*/

// Consume the next token and move forward
Token Parser::consume(TokenType expectedType) {
    if (currentToken().type != expectedType) {
        throw std::runtime_error("Unexpected token: expected " + std::to_string(static_cast<int>(expectedType)));
    }
    return tokens[currentIndex++];  // ✅ Advance to next token
}

// Parse a module definition
ASTNode Parser::parseModule() {
    expect(TokenType::Module);
    std::string moduleName = consume(TokenType::Identifier).value;

    ASTNode moduleNode("Module", moduleName);

    while (currentToken().type != TokenType::EndModule) {
        if (currentToken().type == TokenType::Input || currentToken().type == TokenType::Output) {
            moduleNode.children.push_back(parsePort());
        } else if (currentToken().type == TokenType::Assign) {
            moduleNode.children.push_back(parseAssign());
        } else {
            throw std::runtime_error("Unexpected token in module");
        }
    }

    expect(TokenType::EndModule);
    return moduleNode;
}

void Parser::expect(TokenType expectedType) {
    if (currentToken().type != expectedType) {
        std::cerr << "Error: Unexpected token '" << currentToken().value
                  << "' of type " << static_cast<int>(currentToken().type)
                  << ", expected type " << static_cast<int>(expectedType) << std::endl;
        throw std::runtime_error("Unexpected token in module");
    }
    consume(expectedType);
}

// ✅ Correctly define parsePort
ASTNode Parser::parsePort() {
    Token name = consume(TokenType::Identifier);
    return ASTNode("Port", name.value);
}

// ✅ Correctly define parseAssign
ASTNode Parser::parseAssign() {
    Token target = consume(TokenType::Identifier);
    expect(TokenType::Equal);
    Token expr = consume(TokenType::Identifier);
    return ASTNode("Assign", target.value + " = " + expr.value);
}

// ✅ Define currentToken()
Token Parser::currentToken() {
    if (currentIndex < tokens.size()) {
        return tokens[currentIndex];
    }
    throw std::runtime_error("Attempted to access token out of bounds");
}
