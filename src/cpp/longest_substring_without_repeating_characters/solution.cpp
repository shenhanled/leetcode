#include "solution.h"

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

int Solution::lengthOfLongestSubstring(string s) {
    // return sliding_window(s);
    return sliding_window_optimized(s);
}

int Solution::sliding_window(string s) {
    uint32_t i = 0, j = 0, ans = 0;
    unordered_set<char> char_set;
    uint32_t len = s.size();
    while (i < len && j < len) {
        if (char_set.count(s[j]) <= 0) {
            char_set.insert(s[j++]);
            ans = max(ans, j - i);
        } else {
            char_set.erase(s[i++]);
        }
    }
    return ans;
}

int Solution::sliding_window_optimized(string s) {
    uint32_t i = 0, j = 0, ans = 0;
    unordered_map<char, uint32_t> char_index;
    uint32_t len = s.size();
    for (; j < len; j++) {
        auto index = char_index.find(s[j]);
        if (index != char_index.end()) {
            i = max(index->second, i);
        }
        ans = max(ans, j - i + 1);
        char_index[s[j]] = j + 1;
    }
    return ans;
}