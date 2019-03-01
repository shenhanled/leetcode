#include <iostream>
#include "solution.h"

using namespace std;

string Solution::convert(string s, int numRows) {
    if (numRows == 1) {
        return s;
    }

    string res;
    for (int i = 0; i < numRows; i++) {
        int j = i;
        res += s[j];
        while (true) {
            /* 下半部分 */
            j += 2 * (numRows - i - 1);
            if (j >= s.length()) {
                break;
            }
            // 最末一行没有下半部分，要排除
            if (i < (numRows - 1)) {
                res += s[j];
            }

            /* 上半部分 */
            j += 2 * i;
            if (j >= s.length()) {
                break;
            }
            // 第一行没有上半部分，要排除
            if (i > 0) {
                res += s[j];
            }
        }
    }
    return res;
}
