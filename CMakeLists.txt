cmake_minimum_required(VERSION 3.10)

project(argv_parser_library)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

include_directories(
        include
)

set(SOURCE_FILES
        source/argv_parser.cpp
)

add_library(argv_parser_library STATIC ${SOURCE_FILES})
