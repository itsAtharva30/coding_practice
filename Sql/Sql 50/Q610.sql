/*
============================================================
LeetCode 610 - Triangle Judgement

Difficulty : Easy
Topic      : SELECT, CASE WHEN, Conditional Logic

Description:
Determine whether three given side lengths can form
a valid triangle.

Approach:
Use CASE WHEN to check the triangle inequality theorem.
A triangle is valid only if the sum of any two sides
is greater than the third side.

============================================================
*/

SELECT *,
       CASE
           WHEN x + y > z AND y + z > x AND z + x > y
               THEN 'Yes'
           ELSE 'No'
       END AS triangle
FROM Triangle;