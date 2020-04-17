#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, SingleNumber) {
    Solution solution;
    
    vector<int> nums = {2, 2, 1};
    EXPECT_EQ(1, solution.singleNumber(nums));
    nums = {4, 1, 2, 1, 2};
    EXPECT_EQ(4, solution.singleNumber(nums));
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}