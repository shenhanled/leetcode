//
// Created by shenhan on 2018/7/2.
//

#ifndef LEETCODE_MEDIAN_OF_TWO_SORTED_ARRAYS_H
#define LEETCODE_MEDIAN_OF_TWO_SORTED_ARRAYS_H

#endif //LEETCODE_MEDIAN_OF_TWO_SORTED_ARRAYS_H

#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
    /* O(log(m + n)) */
    double solution1(vector<int>& nums1, vector<int>& nums2);
    /* O(log(min(m, n))) */
    double solution2(vector<int>& nums1, vector<int>& nums2);
};
