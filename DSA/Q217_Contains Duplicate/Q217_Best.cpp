/*
LeetCode 217 - Contains Duplicate

Difficulty : Easy 🟢
Topic      : Arrays, Hashing

Description:
Given an integer array nums, return true if any value appears
at least twice in the array. Otherwise, return false.

Approach:

- Create an unordered_set to keep track of visited elements.
- Traverse the array one element at a time.
- If the current element is already present in the set,
  a duplicate has been found, so return true.
- Otherwise, insert the element into the set.
- If the traversal finishes without finding duplicates,
  return false.

Time Complexity : O(n)
- Each lookup and insertion in unordered_set takes
  O(1) on average.
- Overall traversal takes O(n).

Space Complexity : O(n)
- In the worst case, all unique elements are stored
  in the unordered_set.

============================================================
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};