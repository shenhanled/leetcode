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
    # No.0003 Longest Substring Without Repeating Characters
    longest_substring_without_repeating_characters
    # No.0004 Median of Two Sorted Arrays
    median_of_two_sorted_arrays
    # No.0005 Longest Palindromic Substring
    longest_palindromic_substring
    # No.0010 Regular Expression Matching
    regular_expression_matching
    # No.0026 Remove Duplicates from Sorted Array
    remove_duplicates_from_sorted_array
    # No.0027 Remove Element
    remove_element
    # No.0032 Longest Valid Parentheses
    longest_valid_parentheses
    # No.0042 Trapping Rain Water
    trapping_rain_water
    # No.0044 Wildcard Matching
    wildcard_matching
    # No.0046 Permutations
    permutations
    # No.0047 Permutations II
    permutations_ii
    # No.0053 Maximum Subarray
    maximum_subarray
    # No.0080 Remove Duplicates from Sorted Array II
    remove_duplicates_from_sorted_array_ii
    # No.0136 Single Number
    single_number
    # No.0137 Single Number II
    single_number_ii
    # No.0200 Number of Islands
    number_of_islands
    # No.0260 Single Number III
    single_number_iii
    # No.0445 Add Two Numbers II
    add_two_numbers_ii
)

foreach(problem ${PROBLEMS})
    MESSAGE(${problem})
    add_executable(${problem}
        ${PROJECT_SOURCE_DIR}/src/cpp/${problem}/solution.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/${problem}/unittest.cpp)
    target_link_libraries(${problem} gtest gtest_main)
endforeach(problem)

# set(CMAKE_VERBOSE_MAKEFILE ON)