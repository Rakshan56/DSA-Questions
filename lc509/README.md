# Leetcode Question 509. Fibonacci Number

**Question Description**<br>
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,<br>
`F(0) = 0, F(1) = 1`<br>
`F(n) = F(n - 1) + F(n - 2), for n > 1.`<br>

Given n, calculate F(n).


**Test cases**<br>
**Input:** n = 2<br>
**Output:** 1 <br>
**Explanation:** F(2) = F(1) + F(0) = 1 + 0 = 1<br>



**Approach 1**<br>
Using **Recursion**, we can directly implement the Fibonacci function as defined. However, this approach has an exponential time complexity due to repeated calculations of the same Fibonacci numbers.

**Time Complexity - O( 2 ^ n ) <br>
Space Complexity - O(n)**
