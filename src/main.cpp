#include "include/lexer.h"
#include "include/parser.h"
#include "include/simulator.h"
#include <iostream>
/**/
/*int main() {*/
/*    std::string code = "module adder(input a, b, output sum); assign sum = a + b; endmodule";*/
/**/
/*    auto tokens = lex(code);*/
/*    Parser parser(tokens);*/
/*    ASTNode ast = parser.parseModule();*/
/**/
/*    std::cout << "AST Structure:\n";*/
/*    ast.print();  // Print the AST in a tree format*/
/**/
/*    return 0;*/
/*}*/


/*int main() {*/
/*    Simulator sim;*/
/**/
/*    sim.scheduleEvent(0, "a", 1);*/
/*    sim.scheduleEvent(1, "b", 0);*/
/*    sim.scheduleEvent(2, "sum", 1);*/
/**/
/*    sim.run();*/
/*    return 0;*/
/*}*/

/*int main() {*/
/*    std::string code = "module adder(input a, b, output sum); assign sum = a + b; endmodule";*/
/**/
/*    auto tokens = lex(code);*/
/*    Parser parser(tokens);*/
/*    ASTNode ast = parser.parseModule();*/
/**/
/*    Simulator sim;*/
/*    sim.executeAST(ast);*/
/**/
/*    // Explicitly set inputs*/
/*    sim.scheduleEvent(0, "a", 1);*/
/*    sim.scheduleEvent(0, "b", 2);*/
/**/
/*    sim.run();*/
/*    return 0;*/
/*}*/

/*int main() {*/
/*    std::string code = R"(*/
/*        module Adder(input a, input b, output sum);*/
/*        assign sum = a + b;*/
/*        assign diff = a - b;*/
/*        endmodule*/
/*    )";*/
/**/
/*    auto tokens = lex(code);*/
/*    Parser parser(tokens);*/
/*    //ASTNode ast = parser.parseModule();*/
/*    ASTNode ast = parser.parseModule();*/
/*    auto* module = dynamic_cast<ASTModule*>(ast.get());*/
/*    if (module) {*/
/*        std::cout << "Parsed module: " << module.name << std::endl;*/
/*        for (const auto& port : module.ports) {*/
/*            std::cout << "Port: " << port.second << " Type: " << tokenTypeToString(port.first) << std::endl;*/
/*        }*/
/*        for (const auto& assign : module.assignments) {*/
/*            auto* assignNode = dynamic_cast<ASTAssign*>(assign.get());*/
/*            if (assignNode) {*/
/*                std::cout << "Assignment: " << assignNode.lhs << " = " << assignNode.rhs << std::endl;*/
/*            }*/
/*        }*/
/*    }*/
/**/
/*    Simulator sim;*/
/*    sim.executeAST(ast);*/
/**/
/*    // Set inputs*/
/*    sim.scheduleEvent(0, "a", 5);*/
/*    sim.scheduleEvent(0, "b", 3);*/
/**/
/*    sim.run();*/
/*    return 0;*/
/*}*/

int main() {
    std::string code = R"(module Adder (input a, input b, output sum); sum = a + b; end)";
    auto tokens = lex(code);
    Parser parser(tokens);

    // ✅ Directly parse into an ASTModule
    ASTModule module = parser.parseModule();

    // ✅ Print parsed module details
    std::cout << "Parsed module: " << module.name << std::endl;

    for (const auto& port : module.ports) {
        std::cout << "Port: " << port.second << " Type: " << tokenTypeToString(port.first) << std::endl;
    }

    for (const auto& assign : module.assignments) {
        std::cout << "Assignment: " << assign.lhs << " = ";
        assign.rhs.print();
    }

    return 0;
}
