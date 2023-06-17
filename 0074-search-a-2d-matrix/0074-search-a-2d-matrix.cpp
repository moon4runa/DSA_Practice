class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int j = n-1;
        // if(m==1 && n==1){
        //     return matrix[0][0] == target;
        // }
        
        while(i >=0 && j>=0 && i <m && j<n){
            if(matrix[i][j] == target) return true;
            else if(target < matrix[i][j]) j--;
            else i++;
        }
        return false;
    }
};