cmake_minimum_required(VERSION 3.8)

project(leetcode)
add_compile_options(-std=c++11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# No.0001 Two Sum
add_executable(two_sum
        ${PROJECT_SOURCE_DIR}/src/cpp/two_sum/solution.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/two_sum/unittest.cpp)
target_link_libraries(two_sum gtest gtest_main)

# No.0002 Add Two Numbers
add_executable(add_two_numbers
        ${PROJECT_SOURCE_DIR}/src/cpp/add_two_numbers/solution.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/add_two_numbers/unittest.cpp)
target_link_libraries(add_two_numbers gtest gtest_main)

# No.0003 Longest Substring Without Repeating Characters
add_executable(longest_substring_without_repeating_characters
        ${PROJECT_SOURCE_DIR}/src/cpp/longest_substring_without_repeating_characters/solution.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/longest_substring_without_repeating_characters/unittest.cpp)
target_link_libraries(longest_substring_without_repeating_characters gtest gtest_main)

# No.0004 Median of Two Sorted Arrays
add_executable(median_of_two_sorted_arrays
        ${PROJECT_SOURCE_DIR}/src/cpp/median_of_two_sorted_arrays/solution.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/median_of_two_sorted_arrays/unittest.cpp)
target_link_libraries(median_of_two_sorted_arrays gtest gtest_main)

# No.0005 Longest Palindromic Substring
add_executable(longest_palindromic_substring
        ${PROJECT_SOURCE_DIR}/src/cpp/longest_palindromic_substring/solution.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/longest_palindromic_substring/unittest.cpp)
target_link_libraries(longest_palindromic_substring gtest gtest_main)

# No.0006 ZigZag Conversion
add_executable(zigzag_conversion
        ${PROJECT_SOURCE_DIR}/src/cpp/zigzag_conversion/solution.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/zigzag_conversion/unittest.cpp)
target_link_libraries(zigzag_conversion gtest gtest_main)

# No.0010 ZigZag Conversion
add_executable(regular_expression_matching
        ${PROJECT_SOURCE_DIR}/src/cpp/regular_expression_matching/solution.cpp
        ${PROJECT_SOURCE_DIR}/src/cpp/regular_expression_matching/unittest.cpp)
target_link_libraries(regular_expression_matching gtest gtest_main)
