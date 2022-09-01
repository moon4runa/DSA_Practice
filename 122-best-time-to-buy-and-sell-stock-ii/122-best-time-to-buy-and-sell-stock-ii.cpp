class Solution {
public:
    

    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2,-1));
        int profit;
        dp[n][1] = dp[n][0] = 0;
        for(int i=n-1; i>=0; i--){
            for(int flag = 0; flag<=1; flag++){
                if(flag == 0){
                    profit = max(dp[i+1][0], -prices[i]+dp[i+1][1]);
                }
                if(flag == 1){
                    profit = max(dp[i+1][1], prices[i]+dp[i+1][0]);
                }
                
                dp[i][flag] = profit;
            }
        }
        
        
        
     return dp[0][0]; 
    }
};

// recursive function
// int maxProfit(vector<int> prices, int day, int profit, int flag){
// 	if(day == prices.sizes()) return profit;
// int p1 = maxProfit(prices, day+1, profit, flag);
// if(flag == 0)int p2 = maxProfit(prices, day+1, profit-prices[day], 1);
// else int p2 = maxProfit(prices, day+1, profit+prices[day],0);
// return max(p1, p2);
// }
