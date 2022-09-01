// https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1 


//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k){
        long long same, diff, total;
        long long mod = 1000000007;
        for(int i=1; i<=n; i++){
            if(i==1){
                same = k;
                diff = 0;
            
            }
            else if(i == 2){
                same = k;
                diff = k*(k-1);
            }
            else{
                same = diff;
                diff = total*(k-1);
                diff = diff%mod;
            }
                 
            total = (same + diff)%mod;
          
        }
        return total;
        
        
        
        
        
        // code here
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends
