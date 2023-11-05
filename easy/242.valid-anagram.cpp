/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        multiset<int> ms;
        for(int i = 0; i < s.length(); i++){ // 將 s 的每一個字母放進 multiset 中
            ms.insert(s[i]);
        }

        for (int i = 0; i < t.length(); i++){
            if(ms.find(t[i]) == ms.end()) // 有字母不在 multiset 中
                return false;
            
            ms.erase(ms.find(t[i]));
        }

        return true;
    }
};
// @lc code=end

