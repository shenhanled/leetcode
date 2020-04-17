#pragma once

#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums);
private:
    int bit_xor(vector<int>& nums);
};