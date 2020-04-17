#pragma once

#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums);
private:
    int bit_count(vector<int>& nums);
    int bit_op(vector<int>& nums);
};