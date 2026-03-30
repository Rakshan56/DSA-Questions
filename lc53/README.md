# Leetcode Question 53. Maximum Subarray

## **IMP** Topic covered Kadane's Algorithm

**Question Description**<br>
Given an integer array nums, find the subarray with the largest sum, and return its sum.


**Test cases**<br>
**Input:** nums = nums = [-2,1,-3,4,-1,2,1,-5,4] <br>
**Output:** 6 <br>
**Explanation:** The subarray [4,-1,2,1] has the largest sum 6.<br>


**Approach**<br>
here we are going to use kadane's algorithm
to find maximum contagious subarray sum we use kadane's algo<br>
First initialize the the sum and maxi take maxi the first element of the array,<br>
Second divided in 3 steps :- <br>
`1. sum += arr[i]` <br> `2. maxi = max(maxi,sum)` <br> `3. if(sum < 0) sum = 0`<br>
at the end return the maxi;

**Time Complexity - O(n) <br>
Space Complexity - O(1)**
