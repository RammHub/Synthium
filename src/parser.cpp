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
        //throw std::runtime_error("Unexpected token: expected " + std::to_string(static_cast<int>(expectedType)));
       throw std::runtime_error("Unexpected token: expected " + tokenTypeToString(expectedType)+ " But got " + tokenTypeToString(currentToken().type) + ": " + currentToken().value );
    }
    return tokens[currentIndex++];  // ✅ Advance to next token
}

// Parse a module definition
ASTNode Parser::parseModule() {
    expect(TokenType::Module);  
    std::string moduleName = consume(TokenType::Identifier).value;  
    expect(TokenType::LParen);  

    auto moduleNode = ASTModule(moduleName);

    // ✅ Parse input/output ports
    while (currentToken().type != TokenType::RParen) {
        if (currentToken().type == TokenType::Input || currentToken().type == TokenType::Output) {
            Token portType = consume(currentToken().type);
            Token portName = consume(TokenType::Identifier);
            moduleNode.ports.emplace_back(portType.type, portName.value);

            if (currentToken().type == TokenType::Comma) {
                consume(TokenType::Comma);
            }
        } else {
            throw std::runtime_error("Unexpected token in port list: " + currentToken().value);
        }
    }
    expect(TokenType::RParen);

    // ✅ Parse assignments inside module
    while (currentToken().type == TokenType::Identifier) {
        Token lhs = consume(TokenType::Identifier);
        expect(TokenType::Equal);
        Token rhs = consume(TokenType::Identifier);  // or TokenType::Number
        expect(TokenType::Semicolon);

        moduleNode.assignments.push_back(ASTAssign(lhs.value, rhs.value));
    }

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
