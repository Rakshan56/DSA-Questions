# Leetcode Question 1. Two Sum

**Question Description**<br>
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Test cases**<br>
**Input:** nums = [2,7,11,15], target = 9 <br>
**Output:** [0,1] <br> 
**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1].


**Approach 1**<br>
Brute force we will use simple two loops and two pointer to find the answer

**Time Complexity - O(n^2) <br>
Space Complexity - O(1)**

<br>

**Approach 2**<br>
we will use a map to store index of the elements ans create a pointer then it will check the value required is present or not the map or not, if not we will store the number otherwise the map will restore the value associated with it and then check it the target is satisfied or not  

**Time Complexity - O(n) <br>
Space Complexity - O(1)**

