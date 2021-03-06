#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, RemoveDuplicatesFromSortedArray) {
    Solution solution;

    vector<int> nums1 = {1, 1, 2};
    int len1 = solution.removeDuplicates(nums1);
    EXPECT_EQ(2, len1);
    EXPECT_EQ(1, nums1[0]);
    EXPECT_EQ(2, nums1[1]);

    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int len2 = solution.removeDuplicates(nums2);
    EXPECT_EQ(5, len2);
    EXPECT_EQ(0, nums2[0]);
    EXPECT_EQ(1, nums2[1]);
    EXPECT_EQ(2, nums2[2]);
    EXPECT_EQ(3, nums2[3]);
    EXPECT_EQ(4, nums2[4]);
}

int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}