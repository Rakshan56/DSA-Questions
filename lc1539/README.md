# Leetcode Question Number 1539 
## Hard Concept Question

**Question Description**<br>
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.

**Test cases**<br>
Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

**Approach 1**<br>
Using Brute force just to simply count the required value of k.

**Approach 2 - Optimal**<br>
This approach works on Birany search, here we are going to use oppsite polerity which mean the answer is reported after the low corsses high variable.

According to the question we will crate a missing variable which will count the missing numbers by adding and using the formula `arr[mid] - (mid + 1)` after this we will check the the missing number the grater than k,
at the end to answer the will sum the values of `k + low` 

For Optimal,<br>
**Time Complexity - O(log n) <br>
Space Complexity - O(1)**
