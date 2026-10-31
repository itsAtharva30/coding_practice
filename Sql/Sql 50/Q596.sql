/*
============================================================
LeetCode 596 - Classes More Than 5 Students

Difficulty : Easy
Topic      : GROUP BY, HAVING, COUNT()

Description:
Find all classes that have at least five students enrolled.

Approach:
Group students by class and use COUNT() to count the
number of students in each class.
Use HAVING to filter classes with at least five students.

============================================================
*/

SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(student) >= 5;