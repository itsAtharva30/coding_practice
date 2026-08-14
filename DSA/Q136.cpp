/*
LeetCode 136 - Single Number

Difficulty : Easy 🟢
Topic      : Arrays, Bit Manipulation

Description:
Given a non-empty array of integers where every element
appears exactly twice except for one element, return the
single element that appears only once.

Approach:

- Initialize a variable 'ans' to 0.
- Traverse the array and perform the XOR (^) operation
  between ans and each element.
- XOR has the following properties:
    • x ^ x = 0
    • x ^ 0 = x
    • XOR is commutative and associative.
- Since every duplicate cancels itself out, only the
  unique element remains in ans.

Time Complexity : O(n)
- Single traversal of the array.

Space Complexity : O(1)
- Uses only one extra variable.

============================================================
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int val : nums) {
            ans ^= val;
        }

        return ans;
    }
};