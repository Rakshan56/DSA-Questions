# Leetcode Question 66. Plus One

**Question Description**<br>
You are given a large integer represented as an integer array `digits`, where each `digits[i]` is the `ith` digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

**Test cases**<br>
**Input:** digits = [1,2,3] <br>
**Output:**[1,2,4]<br>
**Explanation:** The array represents the integer 123. Incrementing by one gives 123 + 1 = 124. Thus, the result should be [1,2,4].<br>


**Approach**<br>
1. Start from the rightmost digit `(1 = n-1)` - the least significant digit<br>
2. Traverse right to left with the while loop:
    * If the current digit is < 9: increment it and return immediately (no carry-over needed)
    * If the digit equals 9: set it to 0 (carry) and move to the previous digit
3. Handle all 9s case: if the loop completes without returning (all digits were 9), insert 1 at the front

**Time Complexity - O(log (n)) <br>
Space Complexity - O(1)**
