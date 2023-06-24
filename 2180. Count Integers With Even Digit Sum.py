class Solution:
    def countEven(self, num: int) -> int:
        c=0
        for i in range(1,num+1):
            a=str(i)
            a=list(map(int,a))
            if(sum(a)%2==0):
                c+=1
        return c
