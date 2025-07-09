n=int(input())
lis=[10000000 for i in range(n+1)]
lis[0]=0
for i in range(1,n+1):
    j=i
    while(j):
        lis[i]=min(lis[i],lis[i-j%10]+1)
        j//=10
print(lis[n])
