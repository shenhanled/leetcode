//
// Created by shenhan on 2018/4/24.
//

#include <iostream>

#include "solution.h"

using namespace std;

ListNode* Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode* head = nullptr;
    ListNode* p = nullptr;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry > 0) {
        int i1 = 0;
        int i2 = 0;
        if (l1 != nullptr) {
            i1 = l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            i2 = l2->val;
            l2 = l2->next;
        }

        int sum = i1 + i2 + carry;
        if (sum >= 10) {
            carry = 1;
            sum %= 10;
        } else {
            carry = 0;
        }

        std::cout<<sum<<std::endl;
        if (head == nullptr) {
            head = new ListNode(sum);
            p = head;
        } else {
            p->next = new ListNode(sum);
            p = p->next;
        }
    }

    return head;
}
