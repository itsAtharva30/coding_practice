/*
LeetCode 217 - Contains Duplicate

Difficulty : Easy 🟢
Topic      : Arrays, Sorting

Description:
Given an integer array nums, return true if any value appears
at least twice in the array. Otherwise, return false.

Approach:

- Sort the array in non-decreasing order.
- Traverse the sorted array from index 1.
- Compare every element with its previous element.
- If two adjacent elements are equal, a duplicate exists.
- If no adjacent duplicates are found, return false.

Time Complexity : O(n log n)
- Sorting takes O(n log n)
- Linear traversal takes O(n)

Space Complexity : O(1)
- Ignoring the space used by the sorting algorithm.
- std::sort is an in-place sorting algorithm.

============================================================
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
    }
};