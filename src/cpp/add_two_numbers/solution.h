#pragma once

struct ListNode {
    int val;
    ListNode* next;
    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
private:
    ListNode* add_two_numbers(ListNode* l1, ListNode* l2);
};