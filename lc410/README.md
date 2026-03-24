# Leetcode Question Number 410

**Question Description -**<br>
Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.
**Return the minimized largest sum of the split.**<br>
A subarray is a contiguous part of the array.

**Test cases :**<br>
**Input:** nums = [7,2,5,10,8], k = 2<br>
**Output:** 18<br>
**Explanation:** There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.
![alt Question](Questions/lc410/lc410.jpg)

**Tip :-** Works simply like Question number 1011<br>

**Approach 1**<br>
it will focus on the brute force approach for the question the difference from the binary one is it works for `n causes atmost at time` <br>
**Time Complexity - `O(high - low) * O(n) or O(n)^2 ` <br>
Space Complexity - O(1)**

**Approach 2**<br>
As the hint says this question works simply on the binary search use a funtion to check the gueesed sum is correct or not.The function checks the gussed sum is correct or not to pass the condition and deliver result according to it.<br>
**Time Complexity - `O log(high - low) * O(n) or O(n log n) ` <br>
Space Complexity - O(1)**