//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int start[], int end[], int n)
    {
    
    sort(start, start+n);
    sort(end, end+n);
  
    int res = 0;
    int s = 0;
    int e = 0;
    while(s < n){
        if(start[s] <= end[e]) {
            res+=1;
            s++;
        }
        else{
            e++;
            s++;
        }
    }
    
    return res;
    	
    	
    	// Your code here
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends