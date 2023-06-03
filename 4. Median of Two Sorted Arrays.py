a=input().split()
b=input().split()
c=a+b
c=list(map(int,c))
c=list(sorted(c))
if (len(c)%2!=0):
  print('{:.5f}'.format(c[len(c)//2]))
else:
  print('{:.5f}'.format((c[len(c)//2]+c[len(c)//2-1])/2))
