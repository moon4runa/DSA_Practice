// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void dfs(int i, int j, vector<vector<int>> &m, int n, vector<string> &paths, string path, vector<vector<int>> &vis){
        if(i==n-1 && j == n-1){
            paths.push_back(path);
            return;
        }
        if(i<n-1 && m[i+1][j]==1 && !vis[i+1][j]){
            vis[i][j] = 1;
            dfs(i+1, j, m, n, paths, path + 'D', vis);
            vis[i][j] = 0;
        }
        if(j>0 && m[i][j-1]==1 && !vis[i][j-1]){
            vis[i][j] = 1;
            dfs(i, j-1, m, n, paths, path + 'L', vis);
            vis[i][j] = 0;
        }
        if(j<n-1 && m[i][j+1]==1 && !vis[i][j+1]){
            vis[i][j] = 1;
            dfs(i, j+1, m, n, paths, path + 'R', vis);
            vis[i][j] = 0;
        }
        if(i>0 && m[i-1][j]==1 && !vis[i-1][j]){
            vis[i][j] = 1;
            dfs(i-1, j, m, n, paths, path + 'U', vis);
            vis[i][j] = 0;
        }
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> paths;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        if(m[n-1][n-1] == 0 || m[0][0]==0) return paths;
        dfs(0, 0, m, n, paths, "", vis);
        return paths;
        
        // Your code goes here
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends