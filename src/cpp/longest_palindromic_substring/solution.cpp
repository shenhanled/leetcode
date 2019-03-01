#include <iostream>
#include <algorithm>

#include "solution.h"

using namespace std;

string Solution::longestPalindrome(string s) {
//    return solution_brute_force(std::move(s));
//    return solution_lcs(std::move(s));
//    return solution_lcs_space_optim(std::move(s));
//    return solution_dp(std::move(s));
//    return solution_dp_v2(std::move(s));
//    return solution_dp_v2_space_optim(std::move(s));
//    return solution_expand_aroud_center(std::move(s));
    return solution_manacher(std::move(s));
}

string Solution::solution_brute_force(string s) {
    string result;
    int max_len = 0;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            string sub = s.substr(i, j);
            if (is_palindrome(sub) && sub.length() > max_len) {
                result = s.substr(i, j);
                max_len = sub.length();
            }
        }
    }
    return result;
}

string Solution::solution_lcs(string s) {
    if (s.empty()) {
        return "";
    }

    string reverse(s);
    std::reverse(reverse.begin(), reverse.end());
    int len = s.length();
    int arr[1000][1000] = {0};
    int max_len = 0;
    int max_end = 0;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (s[i] == reverse[j]) {
                if (i == 0 || j == 0) {
                    arr[i][j] = 1;
                } else {
                    arr[i][j] = arr[i - 1][j - 1] + 1;
                }
            }
            if (arr[i][j] > max_len) {
                int begin_idx = i - arr[i][j] + 1;
                int reverse_idx = len - begin_idx - 1;
                if (reverse_idx == j) {
                    max_len = arr[i][j];
                    max_end = i;
                }
            }
        }
    }

//    for (auto p = begin(arr) ; p != end(arr); ++p) {
//        for ( auto q = begin(*p); q != end(*p); ++q ) {
//            cout<<*q<<' ';
//        }
//        cout<<endl;
//    }

    return s.substr(max_end - max_len + 1, max_len);
}

string Solution::solution_lcs_space_optim(string s) {
    if (s.empty()) {
        return "";
    }

    string reverse(s);
    std::reverse(reverse.begin(), reverse.end());
    int len = s.length();
    int arr[1000] = {0};
    int max_len = 0;
    int max_end = 0;

    for (int i = 0; i < len; i++) {
        for (int j = len - 1; j + 1 > 0; j--) {
            if (s[i] == reverse[j]) {
                if (j == 0) {
                    arr[j] = 1;
                } else {
                    arr[j] = arr[j - 1] + 1;
                }
            } else {
                arr[j] = 0;
            }
            if (arr[j] > max_len) {
                int begin_idx = i - arr[j] + 1;
                int reverse_idx = len - begin_idx - 1;
                if (reverse_idx == j) {
                    max_len = arr[j];
                    max_end = i;
                }
            }
        }
    }

    return s.substr(max_end - max_len + 1, max_len);
}

string Solution::solution_dp(string s) {
//    cout<<s<<endl;
    int length = s.length();
    bool p[1000][1000] = {false};
//    bool p[12][12] = {false};
    int max_len = 0;
    string longest_pal;
    for (int len = 1; len < length; len++) {
        for (int start = 0; start < length; start++) {
            int end = start + len - 1;
            if (end >= length) {
                break;
            }
            p[start][end] = (len == 1 || len == 2 || p[start + 1][end - 1])
                    && s[start] == s[end];
            if (p[start][end] && len > max_len) {
                longest_pal = s.substr(start, len);
                max_len = len;
            }
        }
    }
//    for (auto p1 = begin(p) ; p1 != end(p); ++p1) {
//        for ( auto q = begin(*p1); q != end(*p1); ++q ) {
//            cout<<*q<<' ';
//        }
//        cout<<endl;
//    }
    return longest_pal;
}

string Solution::solution_dp_v2(string s) {
//    cout<<s<<endl;
    int length = s.length();
    bool p[1000][1000] = {false};
//    bool p[12][12] = {false};
    string longest_pal;
    for (int i = length - 1; i + 1 > 0; i--) {
        for (int j = i; j < length; j++) {
            p[i][j] = s[i] == s[j] && (j - i < 2 || p[i + 1][j - 1]);
            if (p[i][j] && j - i + 1 >= longest_pal.length()) {
                longest_pal = s.substr(i, j - i + 1);
            }
        }
    }
//    for (auto p1 = begin(p) ; p1 != end(p); ++p1) {
//        for ( auto q = begin(*p1); q != end(*p1); ++q ) {
//            cout<<*q<<' ';
//        }
//        cout<<endl;
//    }
    return longest_pal;
}

string Solution::solution_dp_v2_space_optim(string s) {
//    cout<<s<<endl;
    int length = s.length();
    bool p[1000] = {false};
//    bool p[12] = {false};
    string longest_pal;
    for (int i = length - 1; i + 1 > 0; i--) {
        for (int j = length - 1; j + 1 > i; j--) {
            p[j] = s[i] == s[j] && (j - i < 2 || p[j - 1]);
            if (p[j] && j - i + 1 >= longest_pal.length()) {
                longest_pal = s.substr(i, j - i + 1);
            }
        }
//        for (auto q = begin(p); q != end(p); ++q) {
//            cout<<*q<<' ';
//        }
//        cout<<endl;
    }
    return longest_pal;
}

string Solution::solution_expand_aroud_center(string s) {
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++) {
        int len1 = expand_around_center(s, i, i);
        int len2 = expand_around_center(s, i, i + 1);
        int len = max(len1, len2);
//        cout<<"i:"<<i<<" len:"<<len<<endl;
        if (len > (end - start + 1)) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    return s.substr(start, end - start + 1);
}

string Solution::solution_manacher(string s) {
    string ms = manacher_init(s);
    int len = ms.length();
    int p[1000] = {0};
    int id = 0;
    int mx = 0;
    int center = 0;
    int max_len = 0;
    for (int i = 1; i < len; i++) {
        if (i < mx) {
            p[i] = min(p[2 * id - i], mx - i);
        } else {
            p[i] = 1;
        }

        while (ms[i - p[i]] == ms[i + p[i]]) {
            p[i]++;
        }

        if (mx < i + p[i]) {
            id = i;
            mx = i + p[i];
        }

        if (p[i] - 1 > max_len) {
            max_len = p[i] - 1;
            center = i;
        }

        for (int idx = 0; idx < len; idx++) {
            cout<<ms[idx];
        }
        cout<<endl;
        for (int idx = 0; idx < len; idx++) {
            cout<<p[idx];
        }
        cout<<endl;
        cout<<id<<":"<<mx<<endl;
    }

    int start = (center - max_len) / 2;
    return s.substr(start, max_len);
}

bool Solution::is_palindrome(string s) {
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int Solution::expand_around_center(string s, int left, int right) {
    while (left + 1 > 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

string Solution::manacher_init(string s) {
    string ret = "$#";
    for (auto c: s) {
        ret += c;
        ret += '#';
    }
//    cout<<ret<<endl;
    return ret;
}
