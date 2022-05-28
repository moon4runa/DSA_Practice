#User function Template for python3
from collections import deque

class Solution:
    
    #Function to detect cycle in a directed graph.
    def isCyclic(self, V, adj):
        indeg = [0]*V
        for i in adj:
            for j in i:
                indeg[j] += 1
        q = deque()
        c = 0
        for i in range(V):
            if indeg[i] == 0:
                q.append(i)
        while q:
            curr = q.popleft()
            c += 1
            for i in adj[curr]:
                indeg[i] -= 1
                if indeg[i] == 0:
                    q.append(i)
        return (c!=V)
        
        
        
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import sys
sys.setrecursionlimit(10**6)
        
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        V,E = list(map(int, input().strip().split()))
        adj = [[] for i in range(V)]
        for i in range(E):
            a,b = map(int,input().strip().split())
            adj[a].append(b)
        ob = Solution()
        
        if ob.isCyclic(V, adj):
            print(1)
        else:
            print(0)
# } Driver Code Ends