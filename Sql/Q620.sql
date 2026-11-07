/*
============================================================
LeetCode 620 - Not Boring Movies

Difficulty : Easy
Topic      : WHERE, ORDER BY, Modulus Operator

Description:
Find movies with an odd ID and a description that is not
'boring'. Return the results ordered by rating descending.

Approach:
1. Use the modulus operator (%) to filter odd IDs.
2. Exclude rows where description is 'boring'.
3. Sort the results by rating in descending order.

============================================================
*/

SELECT *
FROM Cinema
WHERE id % 2 != 0
  AND description != 'boring'
ORDER BY rating DESC;