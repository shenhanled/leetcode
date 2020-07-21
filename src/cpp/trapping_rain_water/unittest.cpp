#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, TrappingRainWater) {
    Solution solution;

    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    EXPECT_EQ(6, solution.trap(height));
    vector<int> height0 = {};
    EXPECT_EQ(0, solution.trap(height0));
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}