#pragma once

#include <vector>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height);
private:
    int brute_force(vector<int>& height);
    int dynamic_programming(vector<int>& height);
    int dp_with_stack(vector<int>& height);
    int two_pointers(vector<int>& height);
};