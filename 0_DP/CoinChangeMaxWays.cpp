//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/coin-change2448/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {
            // if(sum == 0) return 1;
            // if(sum < 0) return 0;
            // if(N <= 0) return 0;
            // long long int exclude = count(coins, N-1, sum);
            // long long int include = 0;
            // if(coins[N-1] <= sum) include = count(coins, N, sum - coins[N-1]);
            
            // return exclude + include;
            
            vector<vector<long long int>> dp(N+1, vector<long long int> (sum+1, 0));
           // dp[0][0] = 1;
            for(int i=0; i<=N; i++){
                for(int  j=0; j<=sum; j++){
                    if(i==0) dp[i][j] = 0;
                    else if(j==0) dp[i][j] = 1;
                    else if(coins[i-1] > j) dp[i][j] = dp[i-1][j];
                    else dp[i][j] = dp[i-1][j] + dp[i][j - coins[i-1]];
                }
            }
            return dp[N][sum];
            
            
            
        // code here.
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends