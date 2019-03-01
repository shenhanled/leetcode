#ifndef LEETCODE_LONGEST_PALINDROMIC_SUBSTRING_H
#define LEETCODE_LONGEST_PALINDROMIC_SUBSTRING_H

#endif //LEETCODE_LONGEST_PALINDROMIC_SUBSTRING_H

#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s);
    /* Brute Force */
    string solution_brute_force(string s);
    /* Longest Common Substring */
    string solution_lcs(string s);
    /* Longest Common Substring with O(n) space */
    string solution_lcs_space_optim(string s);
    /* Dynamic Programming */
    string solution_dp(string s);
    /* Dynamic Programming v2*/
    string solution_dp_v2(string s);
    /* Dynamic Programming v2*/
    string solution_dp_v2_space_optim(string s);
    /* Expand Around Center */
    string solution_expand_aroud_center(string s);
    /* Manacher */
    string solution_manacher(string s);

    bool is_palindrome(string s);
    int expand_around_center(string s, int left, int right);
    string manacher_init(string s);
};
