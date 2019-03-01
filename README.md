# leetcode
leetcode

| No. | Title | Target |
| --- | ----- | ------ |
| 1   | Two Sum | [two_sum](#two-sum) |
| 2   | Add Two Numbers | [add_two_numbers](#add-two-numbers) |
| 3   | Longest Substring Without Repeating Characters | [longest_substring_without_repeating_characters](#longest-substring-without-repeating-characters) |
| 4   | Median of Two Sorted Arrays | [median_of_two_sorted_arrays](#median-of-two-sorted-arrays) |
| 5   | Longest Palindromic Substring | [longest_palindromic_substring](#longest-palindromic-substring) |
| 6   | ZigZag Conversion | [zigzag_conversion](#zigzag-conversion) |
| 10  | Regular Expression Matching | [regular_expression_matching](#regular-expression-matching) |

## Two Sum

Given an array of integers, return indices of the two numbers such that
they add up to a specific target.

You may assume that each input would have exactly one solution, and you
may not use the same element twice.

Example:

```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```

## Add Two Numbers

You are given two non-empty linked lists representing two
**non-negative** integers. The digits are stored in **reverse order**
and each of their nodes contain a single digit. Add the two numbers and
return it as a linked list.

You may assume the two numbers do not contain any leading zero, except
the number 0 itself.

Example:

```
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
```

## Longest Substring Without Repeating Characters

Given a string, find the length of the **longest substring** without
repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that
the answer must be a substring, "pwke" is a subsequence and not a
substring.

## Median of Two Sorted Arrays

There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time
complexity should be O(log (m+n)).

Example 1:

```
nums1 = [1, 3]
nums2 = [2]

The median is 2.0
```

Example 2:
```
nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5
```

## Longest Palindromic Substring

Given a string s, find the longest palindromic substring in s. You may
assume that the maximum length of s is 1000.

Example 1:

```
Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.
```

Example 1:

```
Input: "cbbd"
Output: "bb"
```

## ZigZag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given
number of rows like this: (you may want to display this pattern in a
fixed font for better legibility)

```
P   A   H   N
A P L S I I G
Y   I   R
```

And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a
number of rows:

```
string convert(string s, int numRows);
```

Example 1:

```
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
```

Example 2:

```
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:

P     I    N
A   L S  I G
Y A   H R
P     I
```

## Regular Expression Matching

Given an input string (s) and a pattern (p), implement regular expression 
matching with support for '.' and '*'.

```
'.' Matches any single character.
'*' Matches zero or more of the preceding element.
```

The matching should cover the entire input string (not partial).

**Note:**

- s could be empty and contains only lowercase letters a-z.
- p could be empty and contains only lowercase letters a-z, and 
characters like . or *.

**Example 1:**

```
Input:
s = "aa"
p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
```

**Example 2:**

```
Input:
s = "aa"
p = "a*"
Output: true
Explanation: '*' means zero or more of the precedeng element, 'a'. 
Therefore, by repeating 'a' once, it becomes "aa".
```

**Example 3:**

```
Input:
s = "ab"
p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)".
```

**Example 4:**

```
Input:
s = "aab"
p = "c*a*b"
Output: true
Explanation: c can be repeated 0 times, a can be repeated 1 time. 
Therefore it matches "aab".
```

**Example 5:**

```
Input:
s = "mississippi"
p = "mis*is*p*."
Output: false
```
