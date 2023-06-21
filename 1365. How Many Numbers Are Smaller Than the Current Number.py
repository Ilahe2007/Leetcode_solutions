class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        a=list(sorted(nums))
        b=[]
        for i in nums:
            b.append(a.index(i))
        return b
