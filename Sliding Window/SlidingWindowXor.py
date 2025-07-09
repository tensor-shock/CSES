s = input()
n,k=map(int,s.split())
s=input()
x,a,b,c=map(int,s.split())
lis=[x]
for i in range(1,n):
    x=(a*x+b)%c
    lis.append(x)
cs=0
for i in range(k):
    cs^=lis[i]
ans=[cs]
for i in range(k,n):
    cs^=lis[i]
    cs^=lis[i-k]
    ans.append(cs)
res=0
for x in ans:
    res=res^x
print(res)
