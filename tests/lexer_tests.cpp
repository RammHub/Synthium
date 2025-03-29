#include "../src/include/lexer.h"
#include <gtest/gtest.h>

TEST(LexerTest, BasicTokenization) {
    std::string code = "module adder(input a, b, output sum); assign sum = a + b;";
    auto tokens = lex(code);

    ASSERT_GT(tokens.size(), 0);
    EXPECT_EQ(tokens[0].value, "module");
    EXPECT_EQ(tokens[1].value, "adder");
    EXPECT_EQ(tokens[6].value, "assign");
    EXPECT_EQ(tokens.back().value, ";");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
