// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    void dfs(int node, vector<int> adj[], vector<int> &sol, vector<int> &vis){
        if(adj[node].size() == 0) return;
        for(auto it: adj[node]){
            if(vis[it]==0){
                sol.push_back(it);
                vis[it] = 1;
                dfs(it, adj, sol, vis);
            }
        }
        
    }
  
  
    
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       vector<int> vis(V, 0);
       vector<int> sol;
       int i;
       for(int i=0; i<V; i++){
           if(vis[i] == 0){
               sol.push_back(i);
               vis[i] = 1;
               dfs(i, adj, sol, vis);
           }
       }
       return sol;
       
        // Code here
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends