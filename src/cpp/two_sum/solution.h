#pragma once

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
private:
    vector<int> two_sum_map(vector<int>& nums, int target);
};