/*
============================================================
LeetCode 595 - Big Countries

Difficulty : Easy 🟢
Topic      : Basic SELECT, WHERE, OR, Comparison Operators

Description:
Find countries that are considered "big" based on either
their area or population.

A country is big if:
- area >= 3,000,000 km²
OR
- population >= 25,000,000

Approach:
Filter the World table using the OR operator.

============================================================
*/

SELECT name, population, area
FROM World
WHERE area >= 3000000
   OR population >= 25000000;