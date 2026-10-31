/*
============================================================
LeetCode 577 - Employee Bonus

Difficulty : Easy
Topic      : LEFT JOIN, WHERE, NULL, OR

Description:
Find employees who either have a bonus less than 1000
or have not received any bonus.

Approach:
Use LEFT JOIN to include all employees, including those
without a matching bonus record.
Filter employees whose bonus is less than 1000 or NULL.

============================================================
*/

SELECT E.name AS name,
       B.bonus AS bonus
FROM Employee AS E
LEFT JOIN Bonus AS B
    ON E.empID = B.empID
WHERE B.bonus < 1000
   OR B.bonus IS NULL;