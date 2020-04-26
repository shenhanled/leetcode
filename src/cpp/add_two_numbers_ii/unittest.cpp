#include <vector>
#include <iostream>

#include "gtest/gtest.h"

#include "solution.h"

using namespace std;

ListNode* build_list(std::vector<int> vec) {
    ListNode *head = nullptr;
    ListNode *p = nullptr;
    for (int val: vec) {
        if (head == nullptr) {
            head = new ListNode(val);
            p = head;
        } else {
            p->next = new ListNode(val);
            p = p->next;
        }
    }
    return head;
}

std::vector<int> list_to_vec(ListNode* list) {
    std::vector<int> vec;
    while (list != nullptr) {
        vec.emplace_back(list->val);
        list = list->next;
    }
    return vec;
}

TEST(Solution, AddTwoNumbersII) {
    Solution solution;

    std::vector<int> a0 = {7, 2, 4, 3};
    std::vector<int> b0 = {5, 6, 4};
    auto la0 = build_list(a0);
    auto lb0 = build_list(b0);
    auto lc0 = solution.addTwoNumbers(la0, lb0);
    auto vec0 = list_to_vec(lc0);
    EXPECT_EQ(7, vec0[0]);
    EXPECT_EQ(8, vec0[1]);
    EXPECT_EQ(0, vec0[2]);
    EXPECT_EQ(7, vec0[3]);

    std::vector<int> a1 = {2, 4, 3};
    std::vector<int> b1 = {5, 6, 4};
    auto la1 = build_list(a1);
    auto lb1 = build_list(b1);
    auto lc1 = solution.addTwoNumbers(la1, lb1);
    auto vec1 = list_to_vec(lc1);
    EXPECT_EQ(8, vec1[0]);
    EXPECT_EQ(0, vec1[1]);
    EXPECT_EQ(7, vec1[2]);

    std::vector<int> a2 = {2, 4, 5};
    std::vector<int> b2 = {5, 6, 4};
    auto la2 = build_list(a2);
    auto lb2 = build_list(b2);
    auto lc2 = solution.addTwoNumbers(la2, lb2);
    auto vec2 = list_to_vec(lc2);
    EXPECT_EQ(8, vec2[0]);
    EXPECT_EQ(0, vec2[1]);
    EXPECT_EQ(9, vec2[2]);

    std::vector<int> a3 = {2, 4, 5};
    std::vector<int> b3 = {0};
    auto la3 = build_list(a3);
    auto lb3 = build_list(b3);
    auto lc3 = solution.addTwoNumbers(la3, lb3);
    auto vec3 = list_to_vec(lc3);
    EXPECT_EQ(2, vec3[0]);
    EXPECT_EQ(4, vec3[1]);
    EXPECT_EQ(5, vec3[2]);

    std::vector<int> a4 = {2, 4, 5};
    std::vector<int> b4 = {1, 3};
    auto la4 = build_list(a4);
    auto lb4 = build_list(b4);
    auto lc4 = solution.addTwoNumbers(la4, lb4);
    auto vec4 = list_to_vec(lc4);
    EXPECT_EQ(2, vec4[0]);
    EXPECT_EQ(5, vec4[1]);
    EXPECT_EQ(8, vec4[2]);

    std::vector<int> a5 = {3, 4, 5};
    std::vector<int> b5 = {6, 6, 3};
    auto la5 = build_list(a5);
    auto lb5 = build_list(b5);
    auto lc5 = solution.addTwoNumbers(la5, lb5);
    auto vec5 = list_to_vec(lc5);
    EXPECT_EQ(1, vec5[0]);
    EXPECT_EQ(0, vec5[1]);
    EXPECT_EQ(0, vec5[2]);
    EXPECT_EQ(8, vec5[3]);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}