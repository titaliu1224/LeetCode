'''
Runtime: 31 ms (98%)
Memory: 17 MB (6%)
'''

class Solution:
    def maxScore(self, s: str) -> int:
        right = 0
        for i in s:
            right += int(i)

        max_result = 0
        left = 0
        for i in range(0, len(s) - 1):
            if s[i] == '0':
                left += 1
            else:
                right -= 1

            max_result = max(left + right, max_result)

        return max_result
