# Problem: Valid Anagram (Easy)

**LeetCode Link:** https://leetcode.com/problems/valid-anagram/

## Approach

We count the frequency of every character in the first string and decrease the count for each character in the second string.

If all character counts become zero, the two strings are anagrams.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Notes

The program uses an array of size 256 to store character frequencies.

## Local Test Cases

### Test Case 1
Input:
listen
silent

Output:
Anagrams

### Test Case 2
Input:
hello
world

Output:
Not Anagrams