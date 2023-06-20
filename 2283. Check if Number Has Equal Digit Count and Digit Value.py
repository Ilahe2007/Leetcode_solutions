class Solution:
    def digitCount(self, num: str) -> bool:
        a=''
        for i in range(0,len(num)):
            b=num.count(str(i))
            a+=str(b)
        if(a==num):
            return True
        return False
