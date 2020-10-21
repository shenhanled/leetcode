#include "solution.h"

#include <algorithm>

vector<vector<int>> Solution::permute(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> temp;
    backtrack(nums, result, temp);
    // recursive(nums, 0, result);
    return result;
}

void Solution::backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& temp) {
    if (temp.size() == nums.size()) {
        result.push_back(temp);
    } else {
        for (int i = 0; i < nums.size(); i++) {
            if (find(temp.begin(), temp.end(), nums[i]) != temp.end()) {
                continue;
            }
            temp.push_back(nums[i]);
            backtrack(nums, result, temp);
            temp.pop_back();
        }
    }
}

void Solution::recursive(vector<int>& nums, int begin, vector<vector<int>>& result) {
    if (begin >= nums.size()) {            
        result.push_back(nums);
        return;
    }

    for (int i = begin; i < nums.size(); i++) {
        swap(nums[begin], nums[i]);
        recursive(nums, begin + 1, result);
        swap(nums[begin], nums[i]);
    }
}