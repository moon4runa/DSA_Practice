class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2 + 1;
        int ans;
        map<int, int> count;
        for(int i=0; i<nums.size(); i++){
            if(count.find(nums[i]) == count.end()){
                count[nums[i]] = 1;
            }
            else{
                count[nums[i]] +=1;
            }
        if(count[nums[i]] == n){
            ans = nums[i];
            break;
        }
        }
        return ans;
    }
};