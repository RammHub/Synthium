#ifndef AST_H
#define AST_H

#include "token.h"
#include <string>
#include <vector>
#include <iostream>

// AST Node structure
struct ASTNode {
    std::string type;
    std::string name;
    std::string value;
    std::vector<ASTNode> children;

    virtual ~ASTNode() = default;
    ASTNode() = default;

    ASTNode(std::string type, std::string value = "")
        : type(std::move(type)), value(std::move(value)) {}

    void addChild(const ASTNode& child) { children.push_back(child); }

    // Function to print AST in tree format
    void print(int depth = 0) const {
        for (int i = 0; i < depth; ++i) {
            std::cout << "  ";  // Indentation for tree structure
        }
        std::cout << type << ": " << name << std::endl;

        for (const auto& child : children) {
            child.print(depth + 1);  // Recursively print children
        }
    }
};

class ASTExpression : public ASTNode {
public:
    std::vector<Token> tokens;

    ASTExpression(std::vector<Token> tokens)
        : ASTNode("Expression"), tokens(std::move(tokens)) {}

    void print() const {
        std::cout << "Expression: ";
        for (const auto& token : tokens) {
            std::cout << token.value << " ";
        }
        std::cout << std::endl;
    }
};

class ASTAssign : public ASTNode {
public:
    std::string lhs;
    ASTExpression rhs;

    ASTAssign(const std::string& lhs, const ASTExpression& rhs)
        : ASTNode("Assignment"), lhs(lhs), rhs(rhs) {}

    void print() const {
        std::cout << lhs << " = ";
        rhs.print();
    }
};

class ASTWire : public ASTNode {
public:
    explicit ASTWire(std::string n)
        : ASTNode("Wire"), name(std::move(n)) {}
    std::string name;
};

class ASTReg : public ASTNode {
public:
    explicit ASTReg(std::string n)
        : ASTNode("Reg"), name(std::move(n)) {}
    std::string name;
};

class ASTAlways : public ASTNode {
public:
    std::vector<std::string> sensitivityList;
    std::vector<ASTNode> statements;

    ASTAlways() : ASTNode("Always") {}
};

class ASTIf : public ASTNode {
public:
    ASTExpression condition;
    std::vector<ASTNode> thenStmts;
    std::vector<ASTNode> elseStmts;

    explicit ASTIf(const ASTExpression& cond)
        : ASTNode("If"), condition(cond) {}
};

struct ASTModule : public ASTNode {
    std::string name;
    std::vector<std::pair<TokenType, std::string>> ports;  // Stores (input/output, name)
    std::vector<ASTAssign> assignments;  // Stores assignments
    std::vector<ASTWire> wires;
    std::vector<ASTReg> regs;
    std::vector<ASTAlways> alwaysBlocks;

    ASTModule(std::string n) : ASTNode(), name(std::move(n)) {}
};

#endif // AST_H
