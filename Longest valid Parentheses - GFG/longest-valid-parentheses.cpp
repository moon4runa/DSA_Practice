//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string s){
        stack<int> st;
    int n = s.length();
    st.push(-1);
    if(n < 2 ) return 0;
    int res = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){ 
            st.push(i); 
            continue;
            }
            res = max(res, i-st.top());
        }
    }
    return res;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends