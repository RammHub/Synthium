#ifndef AST_H
#define AST_H

#include <string>
#include <vector>
#include <iostream>

// AST Node structure
struct ASTNode {
    std::string type;
    std::string name;
    std::string value;
    std::vector<ASTNode> children;

    ASTNode(std::string type, std::string value = "")  // ✅ Ensure this constructor exists
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

#endif // AST_H
