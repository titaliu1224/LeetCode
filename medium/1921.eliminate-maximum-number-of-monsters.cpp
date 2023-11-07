/*
 * @lc app=leetcode id=1921 lang=cpp
 *
 * [1921] Eliminate Maximum Number of Monsters
 */

// @lc code=start
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        // calculate how many minutes until monsters arrive.
        for(int i = 0; i < dist.size(); i++){
            double result = ceil((double) dist[i] / (double) speed[i]);
            dist[i] = (int) result;
        }

        sort(dist.begin(), dist.end());

        int eliminate_count = 0;
        for(int i = 0; i < dist.size(); i++){
            if(i >= dist[i]){
                return eliminate_count;
            }

            eliminate_count++;
        }

        return eliminate_count;
    }
};
// @lc code=end

