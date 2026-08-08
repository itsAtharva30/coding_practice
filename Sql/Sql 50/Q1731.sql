/*
============================================================
LeetCode 1731 - The Number of Employees Which Report to Each Employee

Difficulty : Easy 🟢
Topic      : Advanced SELECTs, Self JOIN, GROUP BY, HAVING,
             Aggregate Functions (COUNT, AVG, ROUND)

Description:
Find every employee who manages at least one employee.
For each manager, return:
- employee_id
- name
- number of direct reports
- rounded average age of direct reports

Approach:
- Perform a Self JOIN between managers and their direct reports.
- Group records by each manager.
- Use COUNT() to calculate the number of reports.
- Use AVG() + ROUND() to compute the average age.
- Filter only managers using HAVING.

Time Complexity : O(n)
Space Complexity: O(1) (excluding output)

============================================================
*/

SELECT
    e1.employee_id,
    e1.name,
    COUNT(e2.reports_to) AS reports_count,
    ROUND(AVG(e2.age)) AS average_age
FROM Employees AS e1
JOIN Employees AS e2
    ON e1.employee_id = e2.reports_to
GROUP BY e1.employee_id, e1.name
HAVING COUNT(e2.reports_to) >= 1
ORDER BY e1.employee_id;