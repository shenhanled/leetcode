//
// Created by shenhan on 2018/4/24.
//

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

TEST(Solution, AddTwoNumbers) {
    Solution solution;

    std::vector<int> a1 = {2, 4, 3};
    std::vector<int> b1 = {5, 6, 4};
    auto la1 = build_list(a1);
    auto lb1 = build_list(b1);
    auto lc1 = solution.addTwoNumbers(la1, lb1);
    auto vec1 = list_to_vec(lc1);
    EXPECT_EQ(7, vec1[0]);
    EXPECT_EQ(0, vec1[1]);
    EXPECT_EQ(8, vec1[2]);

    std::vector<int> a2 = {2, 4, 5};
    std::vector<int> b2 = {5, 6, 4};
    auto la2 = build_list(a2);
    auto lb2 = build_list(b2);
    auto lc2 = solution.addTwoNumbers(la2, lb2);
    auto vec2 = list_to_vec(lc2);
    EXPECT_EQ(7, vec2[0]);
    EXPECT_EQ(0, vec2[1]);
    EXPECT_EQ(0, vec2[2]);
    EXPECT_EQ(1, vec2[3]);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
