#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, Permutations) {
    Solution solution;

    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = solution.permute(nums);
    for (auto item: result) {
        for (auto num: item) {
            cout<<num<<", ";
        }
        cout<<endl;
    }
}