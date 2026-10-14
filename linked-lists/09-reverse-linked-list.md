# Problem: Reverse a Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach

We reverse the list iteratively with three pointers — prev, curr and next. On each step we point curr->next backwards to prev, then advance all three pointers forward. When curr becomes NULL, prev is the new head.

We build the list from the input values first, print it, reverse it, then print the reversed list.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The edge case of an empty list (n = 0) works naturally — reverseList returns NULL and nothing is printed. A single-element list reverses to itself. Remember to free the allocated nodes to avoid leaking memory.

## Test Cases

### Test Case 1 — Typical Case

**Input:**

```text
5
1 2 3 4 5
```

**Output:**

```text
Original: 1 2 3 4 5
Reversed: 5 4 3 2 1
```

### Test Case 2 — Edge Case (single element)

**Input:**

```text
1
42
```

**Output:**

```text
Original: 42
Reversed: 42
```
