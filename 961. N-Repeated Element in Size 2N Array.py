class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        n=len(nums)//2
        a=list(set(nums))
        b=list(filter(lambda x:nums.count(x)==n,a))
        return b[0]
