/*
============================================================
LeetCode 584 - Find Customer Referee

Difficulty : Easy 🟢
Topic      : Basic SELECT, WHERE, NULL, OR

Description:
Find the names of customers whose referee_id is not equal
to 2, including customers who have no referee.

Approach:
Use != to exclude referee_id = 2 and explicitly include
NULL values using IS NULL.

============================================================
*/

SELECT name
FROM Customer
WHERE referee_id != 2
   OR referee_id IS NULL;