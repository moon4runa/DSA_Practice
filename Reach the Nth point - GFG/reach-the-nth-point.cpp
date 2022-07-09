// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		vector<int> dp;
        for(int i=0; i<=n; i++){
            if(i<=2) dp.push_back(i);
            else dp.push_back((dp[i-1]%1000000007 + dp[i-2]%1000000007)%1000000007);
        }
        return dp[n];
		    
		    
		    // Code here
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends