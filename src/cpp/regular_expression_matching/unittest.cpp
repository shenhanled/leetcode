#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, ZigZagConvertion) {
    Solution solution;

    EXPECT_FALSE(solution.isMatch("aa", "a"));
    EXPECT_TRUE(solution.isMatch("aa", "a*"));
    EXPECT_TRUE(solution.isMatch("ab", ".*"));
    EXPECT_TRUE(solution.isMatch("aab", "c*a*b"));
    EXPECT_FALSE(solution.isMatch("mississippi", "mis*is*p*."));
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
