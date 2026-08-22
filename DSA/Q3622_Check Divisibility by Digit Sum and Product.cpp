/*
LeetCode 3622 - Check Divisibility by Digit Sum and Product

Difficulty : Easy 🟢
Topic      : Math, Digit Manipulation

Description:
Given a positive integer n, return true if n is divisible by
the sum of its digits plus the product of its digits.

Otherwise, return false.

Approach:

- Store the original number in n because we need it for the
  final divisibility check.
- Create:
    • SumDigit = sum of all digits.
    • ProductDigit = product of all digits.
- Extract each digit using:
    digit = num % 10
- Add the digit to SumDigit.
- Multiply the digit into ProductDigit.
- Remove the last digit using:
    num = num / 10
- After processing all digits, check whether n is divisible by
  (SumDigit + ProductDigit).
- Return the result.

Time Complexity : O(log n)
- The number of digits in n is O(log n).
- Each digit is processed exactly once.

Space Complexity : O(1)
- Uses only a constant amount of extra space.

============================================================
*/

class Solution {
public:
    bool checkDivisibility(int n) {

        int SumDigit = 0;
        int ProductDigit = 1;
        int num = n;

        while (num > 0) {
            int digit = num % 10;

            SumDigit += digit;
            ProductDigit *= digit;

            num /= 10;
        }

        return n % (SumDigit + ProductDigit) == 0;
    }
};