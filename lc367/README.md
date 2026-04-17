# Leetcode Question 367. Valid Perfect Square

**Question Description**<br>
Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

You must not use any built-in library function, such as sqrt.

**Test cases**<br>
**Input:** num = 16 <br>
**Output:** true <br>
**Explanation:** 16 is a perfect square (4 * 4 = 16), so the function returns true.

**Approach**<br>
It is using a simple binary search approach.
 1. we create two pointers, left and right, and initialize them to 1 and num respectively. 
 2. We then enter a loop that continues until left is less than or equal to right.
 3. Inside the loop, we calculate the mid value as the average of left and right
 4. We then check if mid * mid is equal to num. If it is, we have found a perfect square and we return true.
 5. If mid * mid is less than num, it means that the perfect square must be greater than mid, so we move the left pointer to mid + 1.
 6. If mid * mid is greater than num, it means that the perfect square must be less than mid, so we move the right pointer to mid - 1.

**Time Complexity - O(log n) <br>
Space Complexity - O(1)**