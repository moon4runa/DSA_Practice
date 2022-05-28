class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        for(auto it: nums){
            s += it;
        }
        int ac = ((n)*(n+1))/2;
        return ac - s;
    }
};