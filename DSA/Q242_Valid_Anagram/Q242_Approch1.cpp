/*
LeetCode 242 - Valid Anagram

Difficulty : Easy 🟢
Topic      : Strings, Hashing, Counting

Description:
Given two strings s and t, return true if t is an
anagram of s, and false otherwise.

An anagram is a word formed by rearranging the letters
of another word using all the original letters exactly once.

Approach:

- If the lengths of the strings differ, return false.
- Create a frequency array to count character occurrences.
- Traverse both strings simultaneously.
- Increment the count for characters in s and decrement
  the count for characters in t.
- If every frequency becomes zero, the strings are anagrams.

Follow-up:
- If the input is guaranteed to contain only lowercase
  English letters, use a frequency array of size 26.
- If the character set is ASCII, use a frequency array
  of size 128.
- For Unicode or arbitrary character sets, use an
  unordered_map instead of a fixed-size array.

Time Complexity : O(n)
- One traversal of both strings.

Space Complexity : O(1)
- Uses a fixed-size frequency array.

============================================================
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> freq(26, 0);

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int count : freq) {
            if (count != 0)
                return false;
        }

        return true;
    }
};