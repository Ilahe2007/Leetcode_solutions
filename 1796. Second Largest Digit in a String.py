class Solution:
    def secondHighest(self, s: str) -> int:
        a=[x for x in s if(x.isdigit()==True)]
        a=list(set(a))
        a=list(map(int,a))
        a=list(sorted(a,reverse=True))
        if(len(a)==1 or len(a)==0):
            return -1
        return a[1] 
