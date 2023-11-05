/*
 * @lc app=leetcode id=1535 lang=cpp
 *
 * [1535] Find the Winner of an Array Game
 */

// @lc code=start
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int winner = arr[0];
        int win_count = 0;

        for (int i = 1; i < arr.size(); i++){
            if (arr[i] > winner){
                winner = arr[i];
                win_count = 1;
            }
            else if (winner > arr[i]){
                win_count++;
            }

            if (win_count >= k){
                return winner;
            }
        }

        return winner;
    }
};
// @lc code=end

