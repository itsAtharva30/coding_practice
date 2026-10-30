/*
============================================================
LeetCode 183 - Customers Who Never Order

Difficulty : Easy
Topic      : LEFT JOIN, WHERE, NULL

Description:
Find customers who have never placed an order.

Approach:
Use LEFT JOIN to include all customers and match their
orders. Filter rows where customerId is NULL to find
customers without any orders.

============================================================
*/

SELECT C.name AS Customers
FROM Customers AS C
LEFT JOIN Orders AS O
    ON C.id = O.customerId
WHERE O.customerId IS NULL;