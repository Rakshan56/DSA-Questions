# Leetcode Question 7. Reverse Integer

**Question Description**<br>
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

**Assume the environment does not allow you to store 64-bit integers (signed or unsigned).**

**Test cases**<br>
**Input:** x = 121 <br>
**Output:** 321 <br> 


**Approach**<br>
1. Extract last digit: `digit = x % 10` gets the rightmost digit
2. Check for overflow: Before multiplying `ans` by 10, verify it won't exceed `INT_MIN` or `INT_MAX`
3. Build reversed number: `ans = (ans*10) + digit` prepends the digit to result
4. Remove processed digit: `x = x/10` moves to next digit (removes rightmost)
5. Repeat until x becomes 0

**Time Complexity - O(n) <br>
Space Complexity - O(1)**

