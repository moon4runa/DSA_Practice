class Solution {
public:
    int max(int a, int b){
        if(a>b) return a;
        return b;
    }
    
    int dfs(vector<vector<int>>& grid, int i, int j, int m, int n, int c){
        if(i < 0 || j <0 || i >= m || j >= n || grid[i][j] == 0) return 0;
        else{
        grid[i][j] = 0;
        c = 1 + dfs(grid, i-1, j, m, n, c) + dfs(grid, i+1, j, m, n, c)+ dfs(grid, i, j-1, m, n, c ) + dfs(grid, i, j+1, m, n, c);
        return c;
        }
       
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int ans = 0;
        vector<vector<int>>vis (rows, vector<int>(cols, 0));
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]==1){
                    ans = max(ans, dfs(grid, i, j, rows, cols, 0));
                }
            }
        }
        return ans;
    }
    
};