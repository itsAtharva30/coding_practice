/*
============================================================
LeetCode 1148 - Article Views I

Difficulty : Easy 🟢
Topic      : Basic SELECT, WHERE, DISTINCT, ORDER BY

Description:
Find the IDs of authors who viewed at least one of their
own articles.

Approach:
Compare author_id with viewer_id to identify self-views.
DISTINCT removes duplicate author IDs, and ORDER BY sorts
the result in ascending order.

============================================================
*/

SELECT DISTINCT author_id AS id
FROM Views
WHERE author_id = viewer_id
ORDER BY id ASC;