class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        a=len(arr)
        b=set(arr)
        b=list(map(int,b))
        a=list(filter(lambda x: arr.count(x)>a*0.25,b))
        return a[0]
