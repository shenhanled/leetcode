//
// Created by shenhan on 2018/7/2.
//

#include <vector>
#include <iostream>

#include "gtest/gtest.h"

#include "solution.h"

using namespace std;

TEST(Solution, LongestSubstringWithoutRepeatingCharacters) {
    Solution solution;

    EXPECT_EQ(3, solution.lengthOfLongestSubstring("abcabcbb"));
    EXPECT_EQ(1, solution.lengthOfLongestSubstring("bbbbb"));
    EXPECT_EQ(3, solution.lengthOfLongestSubstring("pwwkew"));
    EXPECT_EQ(3, solution.lengthOfLongestSubstring("abcba"));
    EXPECT_EQ(1, solution.lengthOfLongestSubstring("a"));
    EXPECT_EQ(0, solution.lengthOfLongestSubstring(""));
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}