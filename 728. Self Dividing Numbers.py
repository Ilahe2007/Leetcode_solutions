class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        b=[]
        for i in range(left,right+1):
            a=list(set(str(i)))
            a=list(map(int,a))
            c=0
            for j in a:
                if j!=0 and i%j==0:
                    c=c+1
            if c==len(a):
                b.append(i)
        return b
