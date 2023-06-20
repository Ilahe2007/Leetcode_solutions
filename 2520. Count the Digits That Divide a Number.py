class Solution:
    def countDigits(self, num: int) -> int:
        a=list(str(num))
        a=list(map(int,a))
        c=0
        for i in a:
            if num%i==0:
                c=c+1
        return c;
