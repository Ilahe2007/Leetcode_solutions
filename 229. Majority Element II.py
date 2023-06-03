class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        b=list(set(nums))
        a=list(filter(lambda x:nums.count(x)>len(nums)/3,b))
        return a
