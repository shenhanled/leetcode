# pragma once

#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums);
private:
    int two_pointers(vector<int>& nums);
};