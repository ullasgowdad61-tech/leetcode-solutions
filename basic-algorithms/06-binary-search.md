# Problem: Binary Search (Easy)

**LeetCode Link:** https://leetcode.com/problems/binary-search/

## Approach

Use two pointers, left and right, to define the search range.

Check the middle element and reduce the search range until the target is found or the range becomes empty.

## Time Complexity

O(log n)

## Space Complexity

O(1)

## Notes

Binary search works on a sorted array.
## Test Cases

### Test Case 1 — Typical Case
**Input:**
```text
6
-1 0 3 5 9 12
9
