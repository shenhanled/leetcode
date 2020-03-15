cmake_minimum_required(VERSION 3.8)

project(leetcode)
add_compile_options(-std=c++11)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(PROBLEMS
    # No.0001 Two Sum
    two_sum
    # No.0002 Add Two Numbers
    add_two_numbers
    # No.0005 Longest Palindromic Substring
    longest_palindromic_substring
    # No.0010 Regular Expression Matching
    regular_expression_matching
    # No.0032 Longest Valid Parentheses
    longest_valid_parentheses
    # No.0044 Wildcard Matching
    wildcard_matching
    # No.0053 Maximum Subarray
    maximum_subarray
)

foreach(problem ${PROBLEMS})
    MESSAGE(${problem})
    add_executable(${problem}
        ${PROJECT_SOURCE_DIR}/src/cpp/${problem}/solution.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/${problem}/unittest.cpp)
    target_link_libraries(${problem} gtest gtest_main)
endforeach(problem)

# set(CMAKE_VERBOSE_MAKEFILE ON)