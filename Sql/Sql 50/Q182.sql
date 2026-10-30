/*
============================================================
LeetCode 182 - Duplicate Emails

Difficulty : Easy
Topic      : GROUP BY, HAVING, Aggregate Functions

Description:
Find all email addresses that appear more than once
in the Person table.

Approach:
Group records by email and use COUNT() with HAVING
to filter emails that occur more than once.

============================================================
*/

SELECT email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1;