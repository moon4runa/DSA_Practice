//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string p, string st) {
	    unordered_map<char, int> mp;
	int m = p.length();
	int n = st.length();
	for(int i=0; i<m; i++){
		mp[p[i]]++;
	}
	int char_mat = 0;
	int s = 0;
	int e = 0;
	int res = 0;
	while(e < n){
		if(mp.find(st[e]) != mp.end()){
		mp[st[e]]--;
		if(mp[st[e]] == 0) char_mat += 1;
		}
		if(char_mat == mp.size()) res++;
		if(e-s == m-1){
			if(mp.find(st[s]) != mp.end()){
				if(mp[st[s]] == 0) char_mat --;
				mp[st[s]]++;
			}
			s++;
		}
		e++;
	}
	return res;
	    
	    
	    // code here
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends