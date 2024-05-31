class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        appeared = set()
        result = set(nums)
        for element in nums:
            if element in appeared:
                result.remove(element)
            appeared.add(element)
        return result
        