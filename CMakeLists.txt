cmake_minimum_required(VERSION 3.10)
project(Synthium)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Source files
set(SOURCES
    src/lexer.cpp
    src/parser.cpp
    src/ast.cpp
    src/simulator.cpp
    src/main.cpp
)

# Include directory
include_directories(src/include)

# Create executable
add_executable(synthium ${SOURCES})

# Enable testing
#enable_testing()
#add_subdirectory(tests)
