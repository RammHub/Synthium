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

int main() {
    std::string code = R"(
        module adder(input a, b, output sum, diff);
        assign sum = a + b;
        assign diff = a - b;
        endmodule
    )";

    auto tokens = lex(code);
    Parser parser(tokens);
    ASTNode ast = parser.parseModule();

    Simulator sim;
    sim.executeAST(ast);

    // Set inputs
    sim.scheduleEvent(0, "a", 5);
    sim.scheduleEvent(0, "b", 3);

    sim.run();
    return 0;
}
