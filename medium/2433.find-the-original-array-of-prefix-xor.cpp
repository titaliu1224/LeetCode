/*
 * @lc app=leetcode id=2433 lang=cpp
 *
 * [2433] Find The Original Array of Prefix Xor
 */

// @lc code=start
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int now = pref[0];
        vector<int> arr;
        arr.push_back(now);

        for (int i = 1; i < pref.size(); i++){
            int ans = now ^ pref[i];
            now = ans ^ now;
            arr.push_back(ans);
        }

        return arr;
    }
};
// @lc code=end

