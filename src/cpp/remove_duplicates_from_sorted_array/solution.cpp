#include "solution.h"


int Solution::removeDuplicates(vector<int>& nums) {
    return two_pointers(nums);
}

int Solution::two_pointers(vector<int>& nums) {
    if (nums.size() <= 0) {
        return 0;
    }
    int cur = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[cur]) {
            cur++;
            nums[cur] = nums[i];
        }
    }
    return cur + 1;
}