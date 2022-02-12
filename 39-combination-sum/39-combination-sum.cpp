class Solution {
public:
    void combinationhelper(vector<int>&candidates, int index, int target, vector<vector<int>>&res, vector<int>&ds){
        if(index == candidates.size()){
            if(target == 0) {
            res.push_back(ds);
            }
            return;
        }
        if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            combinationhelper(candidates, index, target-candidates[index], res, ds);
            ds.pop_back();
        }
        combinationhelper(candidates,index+1, target, res,ds);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        combinationhelper(candidates, 0, target, res, ds );
        return res;
    }
};