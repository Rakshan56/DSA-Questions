# Leetcode Question 32. Longest Valid Parentheses

**Question Description**<br>
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

**Test cases**<br>
**Input:** s = "(()"<br>
**Output:** 2 <br>
**Explanation:** The longest valid parentheses substring is "()" <br>

**Approach 1**<br>
We use a stack of indices to track unmatched '(' and calculate valid substring lengths efficiently.<br>
**Key Ideas**<br>
* Push -1 initially as a base index to handle edge cases.
* For each '(', push its index onto the stack.
* For each ')', pop the stack:
  * If the stack becomes empty, push the current index as a new base.
  * Otherwise, calculate the length of the current valid substring as i - st.top() and update the maximum length

**Time Complexity - O(n)**<br>
**Space Complexity - O(n)**


**Time Complexity - O( 2 ^ n ) <br>
Space Complexity - O(n)**
