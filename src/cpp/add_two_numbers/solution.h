//
// Created by shenhan on 2018/4/24.
//

#ifndef LEETCODE_ADD_TWO_NUMBERS_H
#define LEETCODE_ADD_TWO_NUMBERS_H

#endif //LEETCODE_ADD_TWO_NUMBERS_H

struct ListNode {
    int val;
    ListNode* next;
    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};
