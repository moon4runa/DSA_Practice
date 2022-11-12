//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string st)
{
    // your code here
    int res = 0;
        int n = st.length();
        if(n<2) return n;
        unordered_map<char, int> mp;
        int s = 0;
        int e = 0;
        while(s<=e && e<n){
            char c = st[e];
            mp[c]++;
            if(mp[c] == 1){
                res = max(res, e-s+1);
            }
            else if(mp[c] > 1){
                while(mp[c] > 1){
                    mp[st[s]] --;
                    s++;
                }
            }
            e++;
        }
        return res;
}