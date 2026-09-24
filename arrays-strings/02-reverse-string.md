# Reverse String (Easy)

**LeetCode Link:** https://leetcode.com/problems/reverse-string/

## Problem
Reverse a given string.

## Approach
1. Read the string using `fgets()`.
2. Remove the newline character.
3. Find the length of the string using `strlen()`.
4. Traverse the string from the last character to the first.
5. Print the characters in reverse order.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Test Case

Input:
hello

Output:
olleh

## Local Test
The program was compiled and executed successfully in VS Code.

## Notes
Used `fgets()` to safely read the string including spaces.
## Test Cases

### Test Case 1 — Typical Case
**Input:**
```text
hello