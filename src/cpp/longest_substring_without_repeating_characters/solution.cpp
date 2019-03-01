//
// Created by shenhan on 2018/7/2.
//

#include "solution.h"

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int Solution::lengthOfLongestSubstring(string s) {
    size_t cur_max = 0;
    deque<char> deq;
    for (char c: s) {
        auto it = find(deq.begin(), deq.end(), c);
        // find dedup
        if (it != deq.end()) {
            while (true) {
                auto front_c = deq.front();
                deq.pop_front();
                if (front_c == c) {
                    break;
                }
            }
        }
        deq.push_back(c);
        if (deq.size() >= cur_max) {
            cur_max = deq.size();
        }
    }
    return cur_max;
}
