enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(lexer_tests lexer_tests.cpp)
target_link_libraries(lexer_tests ${GTEST_LIBRARIES} pthread)
add_test(NAME LexerTest COMMAND lexer_tests)

add_executable(parser_tests parser_tests.cpp)
target_link_libraries(parser_tests ${GTEST_LIBRARIES} pthread)
add_test(NAME ParserTest COMMAND parser_tests)
