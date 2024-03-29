class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int leftMax = 0; 
        int rightMax = 0;
        int res = 0;
        while( left <= right){
            if(height[left] <= height[right]){
                if(height[left] >= leftMax) leftMax = height[left];
                else res += leftMax - height[left];
                left++; 
            }
            else{
                if(height[right] >= rightMax) rightMax = height[right];
                else res += rightMax - height[right];
                right--; 
            }
        }
        return res;

        
        
    }
};


// Brute Force - TC: O(n), SC: O(2n)
//     int n = height.size();
    //     vector<int> leftMax(n, 0);
    //     vector<int> rightMax(n, 0);
    //     int l = height[0];
    //     int r = height[n-1];
    //     leftMax[0] = -1;
    //     rightMax[n-1] = -1;
    //     int j;
    //         for(int i=1; i<n; i++){
    //             j = n - i - 1;
    //             if(l < height[i-1]){
    //                 l = height[i-1];
    //                 }
    //             leftMax[i] = l;
    //             if(r < height[j+1]){
    //                 r = height[j+1];
    //                 }
    //         rightMax[j] = r;
    //         }
    //         int ans = 0;
    //         int temp;
    //         for(int i=0; i<n; i++){
    //             temp = min(leftMax[i], rightMax[i]) - height[i];
    //             if(temp > 0) ans += temp;
    //     }
    // return ans;
