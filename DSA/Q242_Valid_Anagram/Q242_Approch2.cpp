/*
LeetCode 242 - Valid Anagram

Difficulty : Easy 🟢
Topic      : Strings, Hashing, Maps

Description:
Given two strings s and t, return true if t is an
anagram of s, and false otherwise.

An anagram is a word formed by rearranging the letters
of another word using all the original letters exactly once.

Approach:

- If the lengths of the two strings are different,
  they cannot be anagrams.
- Create two maps to store the frequency of characters
  in each string.
- Traverse both strings separately and update the
  corresponding frequency maps.
- Compare the two maps.
- If they are identical, the strings are anagrams;
  otherwise, they are not.

Time Complexity : O(n log k)
- Each insertion/update in std::map takes O(log k),
  where k is the number of distinct characters.
- Total complexity is O(n log k).

Space Complexity : O(k)
- Two maps store the frequencies of unique characters.

============================================================
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        map<char, int> mp1;
        map<char, int> mp2;

        for (char ch : s)
            mp1[ch]++;

        for (char ch : t)
            mp2[ch]++;

        return mp1 == mp2;
    }
};