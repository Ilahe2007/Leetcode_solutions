class Solution:
    def firstUniqChar(self, s: str) -> int:
        d=-1
        for i in s:
            if s.count(i)==1:
                d=s.index(i)
                break
        return d
