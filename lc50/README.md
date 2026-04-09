# Leetcode Question 50. Pow(x, n)

**Question Description**<br>
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

**Test cases**<br>
**Input:** x = 2.00000, n = 10 <br>
**Output:** 1024.00000 <br> 


**Approach**<br>
1. We can use the property of exponents to calculate the power efficiently. If n is even, we can express it as (x^(n/2))^2. If n is odd, we can express it as x * (x^(n-1)).
2. We can use recursion to implement this approach. If n is negative, we can calculate the power for the positive exponent and then take the reciprocal.

**Time Complexity - O(log n) <br>
Space Complexity - O(log n)**

