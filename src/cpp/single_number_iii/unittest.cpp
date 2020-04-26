#include <algorithm>
#include "gtest/gtest.h"

#include "solution.h"

using namespace std;

TEST(Solution, SingleNumberII) {
    Solution solution;
    
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    vector<int> res = solution.singleNumber(nums);
    vector<int>::iterator iter = find(res.begin(), res.end(), 3);
    EXPECT_NE(iter, res.end());
    iter = find(res.begin(), res.end(), 5);
    EXPECT_NE(iter, res.end());
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}