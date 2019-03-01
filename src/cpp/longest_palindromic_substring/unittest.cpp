#include "gtest/gtest.h"

#include "solution.h"

using namespace std;

TEST(Solution, LongestPalindromicSubstring) {
    Solution solution;

    EXPECT_STREQ("", solution.longestPalindrome("").c_str());
    EXPECT_STREQ("bab", solution.longestPalindrome("babad").c_str());
    EXPECT_STREQ("bb", solution.longestPalindrome("cbbd").c_str());
    EXPECT_STREQ("aba", solution.longestPalindrome("caba").c_str());
    EXPECT_STREQ("aba", solution.longestPalindrome("abacdfgdcaba").c_str());
    EXPECT_STREQ("aaaaaaaaa", solution.longestPalindrome("aaaaaaaaa").c_str());
    EXPECT_STREQ("abcbabcbabcba", solution.longestPalindrome("cabcbabcbabcba").c_str());
    EXPECT_STREQ("abba", solution.longestPalindrome("abbahopxp").c_str());
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

