#
# @lc app=leetcode id=1208 lang=python3
#
# [1208] Get Equal Substrings Within Budget
#

# @lc code=start
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        allCost = []
        cost = maxCost
        length = 0
        start = 0
        maxLength = 0
        for i in range(0, len(s)):
            allCost.append(abs(ord(s[i]) - ord(t[i])))
            cost -= allCost[i]
            length += 1
            while cost < 0:
                cost += allCost[start]
                start += 1
                length -= 1
            maxLength = max(length, maxLength)

        print(allCost)

        
        return maxLength



# @lc code=end

