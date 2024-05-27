#
# @lc app=leetcode id=1608 lang=python3
#
# [1608] Special Array With X Elements Greater Than or Equal X
#

# @lc code=start
class Solution:
    def specialArray(self, nums: List[int]) -> int:
        count = 0
        for i in range(0, len(nums)):
            count = 0
            for num in nums:
                if num >= i:
                    count += 1
            if count == i:
                return count
        return -1
# @lc code=end

