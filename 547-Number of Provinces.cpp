class Solution {
public:
    void dfs(int node, vector<vector<int>> &adj, vector<int> &vis){
        vis[node] = 1;
        for(auto it: adj[node]){
            if(vis[it] == 0) dfs(it, adj, vis);
        }
}

    int findCircleNum(vector<vector<int>>& adjM) {
        int n = adjM.size();
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

    }
};
