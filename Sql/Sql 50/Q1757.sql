/*
LeetCode 1757 - Recyclable and Low Fat Products

Difficulty : Easy 🟢
Topic      : SELECT, WHERE, Logical Operators (AND)

Description:
Find the IDs of products that are both:
- Low fat
- Recyclable

Return only the product_id.

Approach:
- Select the required column (product_id).
- Filter rows where:
  - low_fats = 'Y'
  - recyclable = 'Y'
- Use the AND operator since both conditions must be true.

Time Complexity : O(n)
Space Complexity: O(1) (excluding output)

============================================================
*/

SELECT
    product_id
FROM Products
WHERE low_fats = 'Y'
  AND recyclable = 'Y';