class Solution {
public:
    void solve(int n, vector<string> &ans, int co, int cc, string temp){
        if(co==cc && temp.length() == 2 * n){
            ans.push_back(temp);
            return;
        }
        if(co < n) solve(n, ans, co+1, cc, temp+"(");
        if(cc < co && cc < n) solve(n, ans, co, cc+1, temp+")");
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n, ans, 0,0,"");
        return ans;
    }
};