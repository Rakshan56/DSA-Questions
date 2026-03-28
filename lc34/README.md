# Leetcode Question 34. Find First and Last Position of Element in Sorted Array

**Question Description**<br>
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

- If target is not found in the array, return [-1, -1].<br>
- You must write an algorithm with O(log n) runtime complexity.<br>


**Test cases**<br>
**Input:** nums = [5,7,7,8,8,10], target = 8 <br>
**Output:** true <br>


**Approach**<br>
Basically we have to return the first index and the last index of the dublicate number so here we will use two binary search to optain the indexes first will return the fisrt occurance and the second will return the last occurance on the number.<br>

**Time Complexity - O(log (n)) <br>
Space Complexity - O(1)**
