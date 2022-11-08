class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i =0, j = n-1;
        int res = 0, m =0;
        while(i<j){
            if(arr[i]<arr[j]){
                res = (j-i)*arr[i];
                i++;
            }
            else{
                res = (j-i)*arr[j];
                j--;
            }
            m = max(m, res);
            
        }
        return m;
        
    }
};