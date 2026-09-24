# Problem: Valid Parentheses (Easy)

**LeetCode Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets.

For every closing bracket, check whether it matches the most recent opening bracket.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Notes

The stack helps match brackets in the correct order.
## Test Cases

### Test Case 1 — Typical Case
**Input:**
```text
()