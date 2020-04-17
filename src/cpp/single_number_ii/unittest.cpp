#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, SingleNumberII) {
    Solution solution;
    
    vector<int> nums = {2, 2, 3, 2};
    EXPECT_EQ(3, solution.singleNumber(nums));
    nums = {0, 1, 0, 1, 0, 1, 99};
    EXPECT_EQ(99, solution.singleNumber(nums));
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}