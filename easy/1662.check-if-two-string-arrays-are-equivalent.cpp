/*
 * @lc app=leetcode id=1662 lang=cpp
 *
 * [1662] Check If Two String Arrays are Equivalent
 */

// @lc code=start
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str_a, str_b;
        int max_size = word1.size() > word2.size() ? word1.size() : word2.size();

        for(int i = 0; i < max_size; i++){
            if(i < word1.size()){
                str_a += word1[i];
            }
            if(i < word2.size()){
                str_b += word2[i];
            }
        }

        return str_a == str_b;
    }
};
// @lc code=end

