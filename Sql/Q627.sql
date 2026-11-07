/*
============================================================
LeetCode 627 - Swap Salary

Difficulty : Easy
Topic      : UPDATE, CASE WHEN

Description:
Swap all 'm' and 'f' values in the sex column of the Salary table.

Approach:
1. Use UPDATE to modify the Salary table.
2. Use CASE to check the current value of sex.
3. Replace 'f' with 'm' and 'm' with 'f'.

============================================================
*/

UPDATE Salary
SET sex = CASE
    WHEN sex = 'f' THEN 'm'
    ELSE 'f'
END;