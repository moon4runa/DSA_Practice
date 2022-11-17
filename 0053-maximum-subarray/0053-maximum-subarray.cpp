class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_ending = 0;
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            max_ending += nums[i];
            ans = max(ans, max_ending);
            max_ending = max(0, max_ending);
        }
        return ans;
    }
};