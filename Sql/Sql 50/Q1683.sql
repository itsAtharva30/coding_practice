/*
============================================================
LeetCode 1683 - Invalid Tweets

Difficulty : Easy 🟢
Topic      : Basic SELECT, WHERE, String Functions

Description:
Find the tweet IDs of tweets whose content contains more
than 15 characters.

Approach:
Use CHAR_LENGTH() to count the number of characters in
content and filter tweets with more than 15 characters.

============================================================
*/

SELECT tweet_id
FROM Tweets
WHERE CHAR_LENGTH(content) > 15;