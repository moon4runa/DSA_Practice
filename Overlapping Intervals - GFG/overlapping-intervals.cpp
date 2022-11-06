//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n==1) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<int> ref = intervals[0];
        vector<vector<int>> res;
        for(int i=0; i<=n-1; i++){
            if(intervals[i][0] <= ref[1]){
                ref[1] = max(ref[1], intervals[i][1]);
                
            }
            else{
                res.push_back(ref);
                ref = intervals[i];
            }
        }
        res.push_back(ref);
        
        
        return res;
        
         // Code here
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends