s=input()
r,c=map(int,s.split())
lis=[]
for i in range(r):
    s=input()
    lis.append(s)
ans=0
visited=[[False for i in range(c)] for j in range(r)]
for i in range(r):
    for j in range(c):
        if lis[i][j]=='#' or visited[i][j]:
            continue
        ans+=1
        stack=[(i,j)]
        while stack:
            x,y=stack.pop()
            if x>0 and lis[x-1][y]=='.' and not visited[x-1][y]:
                visited[x-1][y]=True
                stack.append((x-1,y))
            if x<r-1 and lis[x+1][y]=='.' and not visited[x+1][y]:
                visited[x+1][y]=True
                stack.append((x+1,y))
            if y>0 and lis[x][y-1]=='.' and not visited[x][y-1]:
                visited[x][y-1]=True
                stack.append((x,y-1))
            if y<c-1 and lis[x][y+1]=='.' and not visited[x][y+1]:
                visited[x][y+1]=True
                stack.append((x,y+1))
print(ans)
            