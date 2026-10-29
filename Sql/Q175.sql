/*
============================================================
LeetCode 175 - Combine Two Tables

Difficulty : Easy
Topic      : Basic Joins, LEFT JOIN

Description:
Combine Person and Address tables to retrieve each person's
first name, last name, city, and state.

Approach:
Use LEFT JOIN to include every person, even if they don't
have a matching address.

============================================================
*/

SELECT P.firstName,
       P.lastName,
       A.city,
       A.state
FROM Person AS P
LEFT JOIN Address AS A
    ON P.personID = A.personID;