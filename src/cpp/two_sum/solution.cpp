//
// Created by shenhan on 2018/4/21.
//

#include "solution.h"

#include <unordered_map>

vector<int> Solution::twoSum(vector<int>& nums, int target) {
    std::unordered_map<int, int> num_index_map;
    std::vector<int> results;

    for (int i = 0; i < nums.size(); i++) {
        int need_num = target - nums[i];
        auto find_index = num_index_map.find(need_num);
        if (find_index != num_index_map.end()) {
            results.emplace_back(find_index->second);
            results.emplace_back(i);
            return results;
        } else {
            num_index_map[nums[i]] = i;
        }
    }
    return results;
}
