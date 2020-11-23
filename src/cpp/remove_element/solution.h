# pragma once

#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val);
private:
    int two_pointers(vector<int>& nums, int val);
    int two_pointers_swap(vector<int>& nums, int val);
};