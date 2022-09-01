class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int n = prices.size();
            int min_day = prices[0];
            int max_profit = 0;
            int profit;
            for(int i=1; i<n; i++){
                profit = prices[i]-min_day;
                max_profit = max(max_profit, profit);
                min_day= min(min_day, prices[i]);
            }
        return max_profit;
        

        }
};

// Brute Force TC: O(n^2) SC: O(n)
// int m_pr, pr;
//             vector<int> max_profit;
//             int n = prices.size();
//             for(int i=0; i<n; i++){
//                 m_pr = 0;
//             for(int j=i+1; j<n; j++){
//                 pr = prices[j] - prices[i];
//                 m_pr = max(pr, m_pr);
//             }
//             max_profit.push_back(m_pr);
//             }
//             return *max_element(max_profit.begin(), max_profit.end());