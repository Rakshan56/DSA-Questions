# Leetcode Question 242. Valid Anagram

**Question Description**<br>
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

**Test cases**<br>
**Input:** s = "anagram", t = "nagaram" <br>
**Output:** true <br> 


**Approach 1**<br>
**Using HashMap**<br>
 1. Check if the lengths of the two strings are equal. If not, return false.
 2. Create a Unordered Map for frequency count of characters in string s and t.
 3. Create a loop to iterate through the frequency map of string s and check if the frequency of each character matches with the frequency in string t. If any character frequency does not match, return false.

**Time Complexity - O(n) <br>
Space Complexity - O(n)**

