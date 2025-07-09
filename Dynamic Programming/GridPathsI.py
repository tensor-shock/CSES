n=int(input())
MOD=1000000007
lis=[]
for i in range(n):
    s=input()
    lis.append(s)
dp=[[0 for i in range(n)] for j in range(n)]
# dp[0][0]=1
for i in range(n):
    for j in range(n):
        if lis[i][j]!='*':
            if i==0 and j==0:
                dp[i][j]=1
            elif i==0:
                dp[i][j]+=dp[i][j-1]
            elif j==0:
                dp[i][j]+=dp[i-1][j]
            else:
                dp[i][j]+=dp[i-1][j]+dp[i][j-1]
            dp[i][j]%=MOD
print(dp[n-1][n-1])
