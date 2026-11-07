/*
============================================================
LeetCode 619 - Biggest Single Number

Difficulty : Easy
Topic      : GROUP BY, HAVING, CTE, Aggregate Functions

Description:
Find the largest number that appears exactly once in MyNumbers.
If no number appears exactly once, return NULL.

Approach:
1. Use a CTE to find numbers occurring exactly once.
2. Use MAX() to get the largest number from the CTE.
3. MAX() automatically returns NULL if the CTE is empty.

============================================================
*/

WITH cte AS (
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
)

SELECT MAX(num) AS num
FROM cte;