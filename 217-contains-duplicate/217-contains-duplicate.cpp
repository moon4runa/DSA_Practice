class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> count;
        for(auto it: nums){
            if(count.find(it) == count.end()){
                count[it] = 1;
            }
            else{
                    return true;
                
            }
        }
        return false;
    }
};