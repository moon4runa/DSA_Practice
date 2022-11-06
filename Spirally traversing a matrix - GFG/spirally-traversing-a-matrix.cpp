//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int> output;
        

        int fr = 0, fc = 0, lr = n-1, lc = m-1;
        while(fr<=lr && fc<=lc){
            // print fr: fc->lc
            for(int i=fc; i<=lc; i++){
                output.push_back(matrix[fr][i]);
            }
            fr+=1;
            // print lc: fr->lr
            for(int i=fr; i<=lr; i++){
                output.push_back(matrix[i][lc]);
            }
            lc-=1;

            // print lr: lc->fc
            if(lr>=fr){
            for(int i=lc; i>=fc; i--){
                output.push_back(matrix[lr][i]);
            }
            lr-=1;
            }
            // print fc: lr->fr
            if(lc>=fc){
            for(int i=lr; i>=fr; i--){
                output.push_back(matrix[i][fc]);
            }
            fc+=1;
            }
        }
        return output;
        
        // code here 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends