#include "solution.h"

#include <stack>

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    // return with_stack(l1, l2);
    return reverse_output(l1, l2);
}

ListNode* Solution::with_stack(ListNode* l1, ListNode* l2) {
    ListNode* head = nullptr;
    ListNode* p = nullptr;
    std::stack<int> s1, s2;
    while (l1) {
        s1.push(l1->val);
        l1 = l1->next;
    }
    while (l2) {
        s2.push(l2->val);
        l2 = l2->next;
    }

    int carry = 0;
    while (!s1.empty() || !s2.empty() || carry > 0) {
        int i1 = 0, i2 = 0;
        if (!s1.empty()) {
            i1 = s1.top();
            s1.pop();
        }
        if (!s2.empty()) {
            i2 = s2.top();
            s2.pop();
        }
        int sum = i1 + i2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        head = new ListNode(sum);
        head->next = p;
        p = head;
    }

    return head;
}

ListNode* Solution::reverse_output(ListNode* l1, ListNode* l2) {
    int n1 = 0, n2 = 0, carry = 0;
    ListNode* cur1 = l1;
    ListNode* cur2 = l2;
    ListNode* res = nullptr;
    while (cur1) {
        n1++;
        cur1 = cur1->next;
    }
    while (cur2) {
        n2++;
        cur2 = cur2->next;
    }
    cur1 = l1;
    cur2 = l2;

    while (n1 > 0 && n2 > 0) {
        int sum = 0;
        if (n1 >= n2) {
            sum += cur1->val;
            cur1 = cur1->next;
            n1--;
        }
        if (n1 < n2) {
            sum += cur2->val;
            cur2 = cur2->next;
            n2--;
        }
        ListNode* tmp = new ListNode(sum);
        tmp->next = res;
        res = tmp;
    }

    cur1 = res;
    res = nullptr;
    while (cur1) {
        cur1->val += carry;
        carry = cur1->val / 10;
        ListNode* tmp = new ListNode(cur1->val % 10);
        tmp->next = res;
        res = tmp;

        cur2 = cur1;
        cur1 = cur1->next;
        delete cur2;
    }

    if (carry) {
        ListNode* tmp = new ListNode(1);
        tmp->next = res;
        res = tmp;
    }

    return res;
}