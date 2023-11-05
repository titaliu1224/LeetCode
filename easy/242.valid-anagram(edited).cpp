/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int table[26] = {0};

        if (s.length() != t.length())
            return false;

        for (int i = 0; i < s.length(); i++){
            table[s[i] - 'a'] ++; // 把 s 的所有字母數量輸入進去
            table[t[i] - 'a'] --; // t 有出現的字母數量扣掉
        }

        for (int i = 0; i < 26; i++){
            if (table[i] != 0)
                return false;
        }
        return true;
    }
};
// @lc code=end

