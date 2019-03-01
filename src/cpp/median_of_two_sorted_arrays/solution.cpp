//
// Created by shenhan on 2018/7/2.
//

#include "solution.h"

double Solution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    return solution2(nums1, nums2);
}

double Solution::solution1(vector<int> &nums1, vector<int> &nums2) {
    return 0;
}

double Solution::solution2(vector<int> &nums1, vector<int> &nums2) {
    int m = nums1.size(), n = nums2.size();
    if (m > n) {
        return solution2(nums2, nums1);
    }
    int l = 0, r = m, half = (m + n + 1) / 2;
    while (l <= r) {
        int i = (l + r) / 2;
        int j = half - i;
        if (i < m && nums2[j - 1] > nums1[i]) {
            l = i + 1;
        } else if (i > 0 && nums1[i - 1] > nums2[j]) {
            r = i - 1;
        } else {
            int maxl = 0, minr =0;
            if (i == 0) {
                maxl = nums2[j - 1];
            } else if (j == 0) {
                maxl = nums1[i - 1];
            } else {
                maxl = max(nums1[i - 1], nums2[j - 1]);
            }

            if ((m + n) % 2 == 1) {
                return maxl;
            }

            if (i == m) {
                minr = nums2[j];
            } else if (j == n) {
                minr = nums1[i];
            } else {
                minr = min(nums1[i], nums2[j]);
            }

            return (maxl + minr) / 2.0;
        }
    }
    return 0.0;
}
