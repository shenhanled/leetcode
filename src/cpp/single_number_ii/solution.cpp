#include "solution.h"

#include <iostream>

int Solution::singleNumber(vector<int>& nums) {
    // return bit_count(nums);
    return bit_op(nums);
}

int Solution::bit_count(vector<int>& nums) {
    vector<int> counter(32);
    counter = {0};
    for (auto num: nums) {
        for (int i = 0; i < 32; i++) {
            counter[i] += (num>>i) & 1;
        }
    }
    int res = 0;
    for (int i = 0; i < 32; i++) {
        int n = counter[i] % 3;
        if (n) {
            res |= 1 << i;
        }
    }
    return res;
}

int Solution::bit_op(vector<int>& nums) {
    int x1 = 0, x2 = 0, mask = 0;
    for (auto num: nums) {
        x2 ^= x1 & num;
        x1 ^= num;
        mask = ~(x1 & x2);
        x2 &= mask;
        x1 &= mask;
    }
    return x1;
}