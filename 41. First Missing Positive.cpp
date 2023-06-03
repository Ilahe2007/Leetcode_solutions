class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        c=0
        a=list(filter(lambda x: x>0,nums))
        nums=list(set(nums))
        b=list(sorted(nums))
        d=[x for x in range(1,max(nums)+1)]
        if len(a)!=0:
            for i in d:
                if i not in b:
                    return i
                    c=c+1
                    break
            if c==0:
                return 1
        else:
            return 1
        
