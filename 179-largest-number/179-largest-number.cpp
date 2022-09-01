#include <cstdlib>

class Solution {
public:
    bool static compare(int a, int b){
        string sa = to_string(a);
        string sb = to_string(b);
        return (sa+sb) > (sb+sa);

    }
    
    string largestNumber(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end(), compare);
        if(to_string(nums.front())=="0" && to_string(nums.back())=="0") return "0";
        string res = "";
        for(auto it: nums){
            res += to_string(it);
        }
        
        return res;
    }
};