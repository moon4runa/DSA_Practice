class Solution {
public:
    
    int climbStairs(int n) {
        // if(n<3) return n;
        // return climbStairs(n-1) + climbStairs(n-2);
        
        vector<int> dp;
        for(int i=0; i<=n; i++){
            if(i<3) dp.push_back(i);
            else dp.push_back(dp[i-1] + dp[i-2]);
        }
        return dp[n];
    }
};