class Solution {
public:
    void dfs(int sr, int sc, vector<vector<int>> &image, int newColor, int sourceColor){
        int m = image.size();
        int n = image[0].size();
        if(image[sr][sc]==sourceColor){
            image[sr][sc] = newColor;
            if(sr > 0) dfs(sr - 1, sc, image, newColor, sourceColor);
            if(sr < m - 1) dfs(sr + 1, sc, image, newColor, sourceColor);
            if(sc > 0) dfs(sr, sc-1, image, newColor, sourceColor);
            if(sc < n - 1) dfs(sr, sc+1, image, newColor, sourceColor);
        }
        
    }
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int sourceColor = image[sr][sc];
        if(sourceColor == newColor) return image;
        
        dfs(sr, sc, image, newColor, sourceColor);
        return image;
        
        
    }
};