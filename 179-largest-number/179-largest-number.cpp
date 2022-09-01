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
//         for(int i=0; i<n; i++){
//             for(int j=0; j< n-i-1; j++){
//                 //cout<< nums[j];
//                 if(!compare(to_string(nums[j]), to_string(nums[j+1]))) swap(nums[j], nums[j+1]);
//                 //cout<<nums[j];
//             }
            
//         }
        sort(nums.begin(), nums.end(), compare);
        if(to_string(nums.front())=="0" && to_string(nums.back())=="0") return "0";
        string res = "";
        for(auto it: nums){
            res += to_string(it);
        }
        
        return res;
    }
};