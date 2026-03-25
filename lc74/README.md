# Leetcode Question 74. Search a 2D Matrix

**Question Description**<br>
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity

**Test cases**<br>
<img src="lc74.jpg" alt="description" /> <br>
**Input:** matrix = [ [1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60] ], target = 3 <br>
**Output:** true <br>

**Approach 1**<br>
here we are trying to convert a 2D array into a 1D then we will use binary search on the array to operate on it and find the target.<br>
**Time Complexity - O(log (n * m)) <br>
Space Complexity - O(1)**

**Approach 2**<br>
here we will operate on the 2D array as it creating pointers to cooridinate on it and operate this is the general way to work in a 2D array<br>
**Time Complexity - O(log (n + m)) <br>
Space Complexity - O(1)**
