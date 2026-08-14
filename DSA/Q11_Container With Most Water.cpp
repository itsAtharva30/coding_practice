/*
LeetCode 11 - Container With Most Water

Difficulty : Medium 🟡
Topic      : Arrays, Two Pointers, Greedy

Description:
Given an array height where each element represents the
height of a vertical line, find two lines that together
with the x-axis form a container that holds the maximum
amount of water.

Approach:

- Initialize two pointers:
    • Left pointer at the beginning.
    • Right pointer at the end.
- Calculate the width between the pointers.
- The container's height is determined by the shorter
  of the two lines.
- Compute the current water area.
- Update the maximum area if needed.
- Move the pointer pointing to the shorter line inward,
  since moving the taller line cannot increase the area
  while the shorter line remains the limiting factor.
- Continue until the two pointers meet.

Time Complexity : O(n)
- Each pointer moves at most n times.

Space Complexity : O(1)
- Uses only a constant amount of extra space.

============================================================
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int lf = 0;
        int rt = height.size() - 1;
        int maxWater = 0;

        while (lf < rt) {
            int width = rt - lf;
            int ht = min(height[lf], height[rt]);
            int currWater = width * ht;

            maxWater = max(maxWater, currWater);

            if (height[lf] < height[rt]) {
                lf++;
            } else {
                rt--;
            }
        }

        return maxWater;
    }
};