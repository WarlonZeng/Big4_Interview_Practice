n = int(raw_input())
count = 0

M = []
for i in range(n):
    M.append(list(raw_input()))


visited = [False] * n


def dfs(M, k, visited):
    visited[k] = True
    
    for i in range (0, n):
        
        if (M[k][i] == 'N' or visited[i]):
            continue
        dfs(M, i, visited)
        
for i in range(0, n):
    if (visited[i]):
        continue
    dfs(M, i, visited)
    count += 1

print count
