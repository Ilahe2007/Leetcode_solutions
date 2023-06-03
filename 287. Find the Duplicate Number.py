from statistics import mode
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        return mode(nums)
