n=int(input())
MOD=10**9+7
lis=[0]*(n+1)
lis[0]=1
for i in range(1,n+1):
    for j in range(1,7):
        if i-j>=0:
            lis[i]+=lis[i-j]
            lis[i]%=MOD
print(lis[n])