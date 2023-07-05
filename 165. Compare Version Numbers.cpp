class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        a=version1.split('.')
        b=version2.split('.')
        a=list(map(int,a))
        b=list(map(int,b))
        c=0
        if(len(a)>len(b)):
            while(len(a)!=len(b)):
                b.append(0)
        if(len(b)>len(a)):
            while(len(a)!=len(b)):
                a.append(0)
        if(len(a)==len(b)):
            for i in range(0,len(a)):
                if(a[i]<b[i]):
                    return -1
                    c+=1
                    break
                elif(a[i]>b[i]):
                    c+=1;
                    return 1
                    break
        if(c==0):
            return 0
