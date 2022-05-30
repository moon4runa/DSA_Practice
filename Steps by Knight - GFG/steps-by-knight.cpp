// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
   
    
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int ak_i = KnightPos[0] - 1;
	    int ak_j = N -  KnightPos[1] ;
	    int at_i = TargetPos[0] - 1;
	    int at_j = N- TargetPos[1] ;
	    
	    vector<vector<int>> dq = {
	        {-1,2},
	        {2,1},
	        {1,2},
	        {2,-1},
	        {1,-2},
	        {-2,1},
	        {-1,-2},
	        {-2,1},
	        {-2,-1}
	    };
	    
	    queue<pair<int, int>> q;
	    int i, j;
	    vector<vector<int>> dist(N, vector<int>(N, INT_MAX));
	    q.push(make_pair(ak_i, ak_j));
	    dist[ak_i][ak_j] = 0;
	    pair<int, int> curr;
	    while(!q.empty()){
	        curr = q.front();
	        q.pop();
	        if(curr.first == at_i && curr.second == at_j){
	            return dist[at_i][at_j];
	        }
	        
	        int d = dist[curr.first][curr.second];
	        for(auto it: dq){
	            i = curr.first + it[0];
	            j = curr.second + it[1];
	            if(i > N-1 || i < 0 || j< 0 || j > N-1 ) continue;
	            if((d+1) < dist[i][j]){ 
	                dist[i][j] = d + 1;
	                q.push(make_pair(i, j));
	                }
	            
	        }
	        
	    }
	    return dist[at_i][at_j];
	    
	    
	 
	    
	    
	    
	    // Code here
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends