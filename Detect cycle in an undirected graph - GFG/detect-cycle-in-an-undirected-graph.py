from collections import deque

class Solution:
    
    #Function to detect cycle in an undirected graph.
    def bfscycle(self, node, adj, vis):
        vis[node] = 1
        q = deque()
        q.append((node, -1))
        while q:
		    curr, parent = q.popleft()
		    for i in adj[curr]:
		        if not vis[i]:
		            vis[i] = 1
		            q.append((i, curr))
		        elif i != parent:
		            return True
		    
		    
		return False
        
    
    
    
	def isCycle(self, V, adj):
		vis = [0]*V
		for i in range(V):
		    if vis[i]==0:
    		    if self.bfscycle(i, adj, vis):
    		        return True
		return False
		
		
		#Code here

#{ 
#  Driver Code Starts
if __name__ == '__main__':

	T=int(input())
	for i in range(T):
		V, E = map(int, input().split())
		adj = [[] for i in range(V)]
		for _ in range(E):
			u, v = map(int, input().split())
			adj[u].append(v)
			adj[v].append(u)
		obj = Solution()
		ans = obj.isCycle(V, adj)
		if(ans):
			print("1")
		else:
			print("0")

# } Driver Code Ends