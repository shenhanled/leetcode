#include "solution.h"

int Solution::singleNumber(vector<int>& nums) {
    return bit_xor(nums);
}

int Solution::bit_xor(vector<int>& nums) {
    int res = 0;
    for (auto num: nums) {
        res ^= num;
    }
    return res;
}