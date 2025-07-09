s=input()
n,x=map(int,s.split())
s=input()
lis=list(map(int,s.split()))
# lis.sort()
INF=10000000
dp=[INF for _ in range(x+1)]
dp[0]=0
for i in range(1,x+1):
    for j in range(n):
        if i-lis[j]>=0 and dp[i-lis[j]]!=INF:
            dp[i]=min(dp[i],dp[i-lis[j]]+1)
if dp[x]==INF:
    print(-1)
else: 
    print(dp[x])