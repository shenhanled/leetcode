#include "solution.h"

int Solution::removeElement(vector<int>& nums, int val) {
    // return two_pointers(nums, val);
    return two_pointers_swap(nums, val);
}

int Solution::two_pointers(vector<int>& nums, int val) {
    if (nums.size() <= 0) {
        return 0;
    }
    int cur = -1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            cur++;
            nums[cur] = nums[i];
        }
    }
    return cur + 1;
}

int Solution::two_pointers_swap(vector<int>& nums, int val) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        if (nums[left] == val) {
            nums[left] = nums[right];
            nums[right] = val;
            right--;
        } else {
            left++;
        }
    }
    return left;
}