# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

## Approach

We check every pair of elements in the array and compare their sum with the target.
If the sum equals the target, we return the two indices.

## Complexity

- Time: O(n²)
- Space: O(1)

## Notes

The solution should handle duplicate values and should not use the same array element twice.
## Test Cases

### Test Case 1 — Typical Case
**Input:**
```text
4
2 7 11 15
9
Indices: 0 1
Test Case 2 — Edge Case
### Test Case 2
4
3 3 5 7
6
Indices: 0 1