# Leetcode Question Number 69

**Question Description**<br>
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

**Test cases**<br>
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.<br>

**Approach**<br>
It is based on Simple binary search.
While implementing it we have to remember that that we are not working on `int` variables we have to use here `long` as per the requirement and then simply check the is a number is square root or not. We always have to return the floor value of the input.  

**Time Complexity - O(log n) <br>
Space Complexity - O(1)**