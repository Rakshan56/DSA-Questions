# Leetcode Question 169. Majority Element

## **IMP** Moore Voting Algorithm

**Question Description**<br>
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


**Test cases**<br>
**Input:** nums = [2,2,1,1,1,2,2] <br>
**Output:** 2 <br>


**Approach 1**<br>
simplying using the stl funtion <br>
**Time Complexity - O(log (n)) <br>
Space Complexity - O(1)**

**Approach 2**<br>
using a unordered_map here the map will trak a count of the each occurance of the element in the nums and report according to it<br>
**Time Complexity - O(n) <br>
Space Complexity - O(n)**

**Approach 3**<br>
using the moore voting algorithm here we will maintain a count and a candidate variable and we will iterate through the nums and if the count is 0 then we will update the candidate variable and if the current element is equal to the candidate variable then we will increment the count otherwise we will decrement the count<br>
**Time Complexity - O(n) <br>   

