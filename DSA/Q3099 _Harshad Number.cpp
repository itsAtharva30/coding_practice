/*
LeetCode 3099 - Harshad Number

Difficulty : Easy 🟢
Topic      : Math, Digit Manipulation

Description:
Given an integer x, return the sum of its digits if x is a
Harshad number. Otherwise, return -1.

A Harshad number is a number that is divisible by the sum
of its digits.

Approach:

- Store x in a separate variable n because x is needed for
  the final divisibility check.
- Extract each digit using:
    n % 10
- Add each digit to sum.
- Remove the last digit using:
    n /= 10
- After calculating the digit sum, check whether x is
  divisible by sum.
- If divisible, return the digit sum.
- Otherwise, return -1.

Time Complexity : O(log n)
- Each digit of x is processed exactly once.

Space Complexity : O(1)
- Uses only a constant amount of extra space.

============================================================
*/

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = x;
        int sum = 0;

        while (n) {
            sum += n % 10;
            n /= 10;
        }

        return x % sum == 0 ? -1 : sum;
    }
};