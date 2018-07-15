class Solution(object):
    def findCircleNum(self, M):
        """
        :type M: List[List[int]]
        :rtype: int
        """
        
        visited = [False] * len(M)
        stack = []
        count = 0
        
        for i in range (0, len(M)):
            stack.append(i) # 0
            if visited[i] == True:
                continue
            
            while stack: # 0
                # print stack
                cur = stack.pop()
                visited[cur] = True
                
                for j in range(0, len(M[cur])):
                    if (visited[j] == False) and (M[cur][j] == 1):
                        # print cur, j
                        stack.append(j)
            
            count += 1
            # print count

        return count
