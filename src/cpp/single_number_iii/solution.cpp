#include "solution.h"

vector<int> Solution::singleNumber(vector<int>& nums) {
    return bit_xor(nums);
}

vector<int> Solution::bit_xor(vector<int>& nums) {
    int diff = 0;
    for (int num : nums) {
        diff ^= num;
    }
    diff &= -diff;
    vector<int> rets = {0, 0};
    for (int num : nums) {
        if ((num & diff) == 0) {
            rets[0] ^= num;
        } else {
            rets[1] ^= num;
        }
    }
    return rets;
}