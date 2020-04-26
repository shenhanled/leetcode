#pragma once

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums);
private:
    vector<int> bit_xor(vector<int>& nums);
};