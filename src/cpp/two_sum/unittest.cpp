#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, TwoSum) {
    Solution solution;

    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> results = solution.twoSum(nums, target);
    EXPECT_EQ(0, results[0]);
    EXPECT_EQ(1, results[1]);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
