# Leetcode Question 11. Container With Most Water

**Question Description**<br>
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

**Test cases**<br>
<img src="lc11.jpg" alt="description" /><br>
**Input:** height = [1,8,6,2,5,4,8,3,7] <br>
**Output:** 49 <br>
**Explanation:** The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49. <br>


**Approach**<br>

**The question is simply divided into 4 step :**
1. We will start with two pointers, one at the beginning of the array and one at the end of the array.
2. We will calculate the area of water that can be contained between the two pointers, which is given by the formula: area = min(height[left], height[right]) * (right - left).
3. We will keep track of the maximum area found so far.
4. We will move the pointer that has the smaller height towards the other pointer, in order to try to find a larger area.
**Time Complexity - O(n) <br>
Space Complexity - O(1)**
