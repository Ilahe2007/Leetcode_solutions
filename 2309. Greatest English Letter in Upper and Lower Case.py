class Solution:
    def greatestLetter(self, s: str) -> str:
        a=list(set(s))
        a=list(sorted(a,reverse=True))
        c=0
        for i in a:
            if s.count(i.upper())!=0 and s.count(i.lower())!=0:
                return i.upper()
                c=c+1
                break
        if(c==0):
            return ""
