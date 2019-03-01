//
// Created by shenhan on 2018/7/2.
//

#include "gtest/gtest.h"

#include "solution.h"

using namespace std;

TEST(Solution, MedianOfTwoSortedArrays) {
    Solution solution;

    std::vector<int> nums1 = {1, 3};
    std::vector<int> nums2 = {2};
    EXPECT_EQ(2, solution.findMedianSortedArrays(nums1, nums2));

    nums1 = {1, 2};
    nums2 = {3, 4};
    EXPECT_EQ(2.5, solution.findMedianSortedArrays(nums1, nums2));

    nums1 = {1, 2};
    nums2 = {3, 4, 5, 6, 7};
    EXPECT_EQ(4, solution.findMedianSortedArrays(nums1, nums2));

    nums1 = {1, 2, 3, 4, 5};
    nums2 = {6, 7};
    EXPECT_EQ(4, solution.findMedianSortedArrays(nums1, nums2));

    nums1 = {3, 7, 9, 15, 18, 21, 25};
    nums2 = {4, 6, 8, 10, 11, 18};
    EXPECT_EQ(10, solution.findMedianSortedArrays(nums1, nums2));

    nums1 = {3, 7, 9, 15, 18, 21, 25};
    nums2 = {4, 6, 8, 10, 11, 18, 20};
    EXPECT_EQ(10.5, solution.findMedianSortedArrays(nums1, nums2));
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

