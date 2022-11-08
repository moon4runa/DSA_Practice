//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int target){
        
        int i = 0; 
        int j = n -1;
        int res = 0;
        while(i < j){
            int temp = arr[i] + arr[j];
            if(temp == target){
                res += 1;
                i++;
                j--;
            }
        else if(temp < target) i++;
        else j--;
        }
        if(res == 0) return -1;
        return res;
        
        // Complete the function
    
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends