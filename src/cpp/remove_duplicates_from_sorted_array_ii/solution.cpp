#include "solution.h"


int Solution::removeDuplicates(vector<int>& nums) {
    return two_pointers(nums);
}

int Solution::two_pointers(vector<int>& nums) {
    if (nums.size() <= 2) {
        return nums.size();
    }
    int cur = 2;
    for (int i = 2; i < nums.size(); i++) {
        if (nums[i] > nums[cur - 2]) {
            nums[cur] = nums[i];
            cur++;
        }
    }
    return cur;
}