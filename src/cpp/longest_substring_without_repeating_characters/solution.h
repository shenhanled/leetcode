#pragma once

#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s);
private:
    int sliding_window(string s);
    int sliding_window_optimized(string s);
};