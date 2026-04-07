# Leetcode Question 54. Spiral Matrix

**Question Description**<br>
Given an m x n matrix, return all elements of the matrix in spiral order.


**Test cases**<br>
<img src="lc54.jpg" alt="description" /><br>
**Input:** matrix = [[1,2,3],[4,5,6],[7,8,9]] <br>
**Output:** [1,2,3,6,9,8,7,4,5] <br>


**Approach**<br>

**The question is simply divided into 4 step :**
 1. Traverse from left to right and update the top boundary.
 2. Traverse from top to bottom and update the right boundary.
 3. Traverse from right to left and update the bottom boundary.
 4. Traverse from bottom to top and update the left boundary.

 * but there are two edge cases to be handled :
   1. When there is only one row left, we need to traverse from left to right and update the top boundary.
   2. When there is only one column left, we need to traverse from top to bottom and update the right boundary.

**all of this is under a loop which continues until all elements are traversed.**

**Time Complexity - O(m * n) <br>
Space Complexity - O(1)**
