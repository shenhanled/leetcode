#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, ZigZagConvertion) {
    Solution solution;

    EXPECT_STREQ("PAHNAPLSIIGYIR", solution.convert("PAYPALISHIRING", 3).c_str());
    EXPECT_STREQ("PINALSIGYAHRPI", solution.convert("PAYPALISHIRING", 4).c_str());
    EXPECT_STREQ("PNAIGYRPIAHLSI", solution.convert("PAYPALISHIRING", 7).c_str());
    EXPECT_STREQ("A", solution.convert("A", 1).c_str());
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
