/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_multimap<int, int> nums_map;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            auto num_2 = nums_map.find(target - nums[i]);
            if(num_2 != nums_map.end()){
                result.push_back(i);
                result.push_back(num_2->second);
                break;
            }
            nums_map.insert(pair<int, int>(nums[i], i));
        }

        return result;
    }
};
// @lc code=end

