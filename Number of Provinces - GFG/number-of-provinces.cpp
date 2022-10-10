//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void dfs(int node, vector<vector<int>> &adj, vector<int> &vis){
        vis[node] = 1;
        for(auto it: adj[node]){
            if(vis[it] == 0) dfs(it, adj, vis);
        }
    }

    int numProvinces(vector<vector<int>> adjM, int n) {
         //int n = adjM.size();
        vector<vector<int>> adj(n+1);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            if(adjM[i][j] == 1){
                adj[i+1].push_back(j+1);
            }
        }
        } 
        vector<int> vis(n+1, 0);
        int count = 0;
        for(int i=1; i<=n; i++){
            if(vis[i] == 0){
                count += 1;
                dfs(i,adj, vis); 
            }
        }
        return count;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends