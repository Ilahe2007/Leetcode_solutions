class Solution:
    def sumOfNumberAndReverse(self, num: int) -> bool:
        for i in range(0,num+1):
            a=list(str(i))
            a=list(reversed(a))
            if(int(''.join(a))+i==num):
                return True
                break
        return False
