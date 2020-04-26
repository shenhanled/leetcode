#pragma once

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
private:
    ListNode* with_stack(ListNode* l1, ListNode* l2);
    ListNode* reverse_output(ListNode* l1, ListNode* l2);
};