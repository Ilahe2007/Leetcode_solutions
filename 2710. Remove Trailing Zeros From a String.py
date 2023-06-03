class Solution:
    def removeTrailingZeros(self, num: str) -> str:
        a=int(num)
        while(a%10==0):
            a=a//10
        return str(a)
