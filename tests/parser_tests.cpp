#include "../src/include/lexer.h"
#include "../src/include/parser.h"
#include <gtest/gtest.h>

TEST(ParserTest, ParseModule) {
    std::string code = "module adder(input a, b, output sum); assign sum = a + b; endmodule";
    auto tokens = lex(code);
    Parser parser(tokens);
    ASTNode ast = parser.parseModule();

    EXPECT_EQ(ast.type, "Module");
    EXPECT_EQ(ast.name, "adder");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
