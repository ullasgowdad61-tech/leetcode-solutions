# Problem: Best Time to Buy and Sell Stock (Easy)

**LeetCode Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Keep track of the minimum stock price seen so far.

For each price, calculate the possible profit and update the maximum profit if it is larger.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Notes

The algorithm makes one pass through the prices array and does not need extra arrays.

## Local Test Case

Input:
7 1 5 3 6 4

Output:
Maximum Profit: 5