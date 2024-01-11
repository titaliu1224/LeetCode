class Solution:
    def maxScore(self, s: str) -> int:
        all = 0
        for i in s:
            all += int(i)

        max_result = 0
        left = 0
        for i in range(0, len(s) - 1):
            if int(s[i]) == 0:
                left += 1
            right = all - (i + 1 - left)

            result = left + right
            if result > max_result:
                max_result = result

        return max_result
        
