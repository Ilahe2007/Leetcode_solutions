class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        a=max(nums)
        b=list(set(nums))
        b=[x*2 for x in b]
        b=list(filter(lambda x:x>a,b))
        if len(b)!=1:
            return -1
        else:
            return nums.index(a)
