/*
LeetCode 217 - Contains Duplicate

Difficulty : Easy 🟢
Topic      : Arrays, Hashing

Description:
Given an integer array nums, return true if any value appears
at least twice in the array. Otherwise, return false.

Approach:

- Construct an unordered_set using all elements of the array.
- Since a set stores only unique values, duplicate elements
  are automatically removed.
- Compare the size of the set with the size of the original array.
- If the sizes differ, duplicates existed.
- Otherwise, all elements were unique.

Time Complexity : O(n)
- Inserting n elements into an unordered_set takes O(n)
  on average.

Space Complexity : O(n)
- The unordered_set stores all unique elements.

============================================================
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        return st.size() != nums.size();
    }
};