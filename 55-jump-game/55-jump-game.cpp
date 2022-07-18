class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
    int max_reach = 0;
    int i = 0;
        while(i < n && i <= max_reach){
            max_reach = max(i + nums[i], max_reach);
            i++;
        }
        if(i == n) return true;
        return false;
    }
};