# pragma once

#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums);
private:
    void backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& temp);
    void recursive(vector<int>& nums, int begin, vector<vector<int>>& result);
};