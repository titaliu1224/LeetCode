/*
 * @lc app=leetcode id=2849 lang=cpp
 *
 * [2849] Determine if a Cell Is Reachable at a Given Time
 */

// @lc code=start
class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int distance_x = abs(fx - sx);
        int distance_y = abs(fy - sy);

        int min_seconds = max(distance_x, distance_y);

        if(min_seconds == 0 && t != 0){
            min_seconds = 2;
        }

        return t >= min_seconds;
    }
};
// @lc code=end

