class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        d=list(map(str,digits))
        d=int(''.join(d))
        d=d+1
        d=list(str(d))
        d=list(map(int,d))
        return d
