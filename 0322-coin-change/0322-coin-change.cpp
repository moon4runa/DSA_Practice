class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        int n = coins.size();
        dp[0] = 0;
        for(int i=1; i<=amount ; i++){
            for(int j=0; j<n; j++){
                if(i - coins[j] >= 0){
                    int temp = dp[i - coins[j]];
                    if(temp!= INT_MAX && temp + 1 < dp[i]) dp[i] = temp +1;
                }
            }
        }
        if(dp[amount] == INT_MAX) return -1;
        else return dp[amount];
    }
};