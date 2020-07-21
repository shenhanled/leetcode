#include "solution.h"

#include <stack>

int Solution::trap(vector<int>& height) {
    // return brute_force(height);
    // return dynamic_programming(height);
    // return dp_with_stack(height);
    return two_pointers(height);
}

int Solution::brute_force(vector<int>& height) {
    int water = 0;
    for (int i = 0; i < height.size(); i++) {
        int left_max = 0, right_max = 0;
        for (int left = i - 1; left >= 0; left--) {
            left_max = max(left_max, height[left]);
        }
        for (int right = i + 1; right < height.size(); right++) {
            right_max = max(right_max, height[right]);
        }
        int water_val = min(left_max, right_max) - height[i];
        if (water_val > 0) {
            water += water_val;
        }
    }
    return water;
}

int Solution::dynamic_programming(vector<int>& height) {
    int ans = 0;
    int size = height.size();
    if (size == 0) {
        return ans;
    }
    vector<int> left_max(size), right_max(size);
    left_max[0] = height[0];
    for (int i = 1; i < size; i++) {
        left_max[i] = max(left_max[i - 1], height[i]);
    }
    right_max[size - 1] = height[size - 1];
    for (int i = size - 2; i>= 0; i--) {
        right_max[i] = max(right_max[i + 1], height[i]);
    }
    for (int i = 1; i < size - 1; i++) {
        ans += min(left_max[i], right_max[i]) - height[i];
    }
    return ans;
}

int Solution::dp_with_stack(vector<int>& height) {
    int ans = 0, current = 0;
    stack<int> st;
    while (current < height.size()) {
        while (!st.empty() && height[current] > height[st.top()]) {
            int top = st.top();
            st.pop();
            if (st.empty()) {
                break;
            }
            int distance = current - st.top() - 1;
            int bounded_height = min(height[current], height[st.top()])  - height[top];
            ans += distance * bounded_height;
        }
        st.push(current++);
    }
    return ans;
}

int Solution::two_pointers(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int left_max = 0, right_max = 0;
    int ans = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= left_max) {
                left_max = height[left];
            } else {
                ans += left_max - height[left];
            }
            ++left;
        } else {
            if (height[right] >= right_max) {
                right_max = height[right];
            } else {
                ans += right_max - height[right];
            }
            --right;
        }
    }
    return ans;
}