/*
============================================================
LeetCode 181 - Employees Earning More Than Their Managers

Difficulty : Easy
Topic      : Self JOIN, INNER JOIN, WHERE

Description:
Find employees who earn more than their managers.

Approach:
Use a Self JOIN to match each employee with their manager,
then compare their salaries.

============================================================
*/

SELECT e1.name AS Employee
FROM Employee AS e1
INNER JOIN Employee AS e2
    ON e1.managerId = e2.id
WHERE e1.salary > e2.salary;