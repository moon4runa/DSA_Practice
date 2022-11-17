class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        if(nums.size() < 3) return false;
        for(int& it: nums){
            if(it <= first) first = it;
            else if(it <= second) second = it;
            else return true;
        }
        return false;
    }
};