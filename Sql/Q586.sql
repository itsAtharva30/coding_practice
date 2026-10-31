/*
============================================================
LeetCode 586 - Customer Placing the Largest Number of Orders

Difficulty : Easy
Topic      : GROUP BY, ORDER BY, COUNT(), LIMIT

Description:
Find the customer_number of the customer who has placed
the largest number of orders.

Approach:
Group orders by customer_number, count the orders for
each customer, sort the results in descending order
and return the top result using LIMIT 1.

============================================================
*/

SELECT customer_number
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(customer_number) DESC
LIMIT 1;