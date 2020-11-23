#include "gtest/gtest.h"

#include "solution.h"

TEST(Solution, RemoveElement) {
    Solution solution;

    vector<int> nums1 = {3, 2, 2, 3};
    int len1 = solution.removeElement(nums1, 3);
    EXPECT_EQ(2, len1);
    EXPECT_EQ(2, nums1[0]);
    EXPECT_EQ(2, nums1[1]);

    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int len2 = solution.removeElement(nums2, 2);
    EXPECT_EQ(5, len2);
    for (int i = 0; i < len2; i++) {
        cout<<nums2[i]<<", ";
    }
    cout<<endl;
}

int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}