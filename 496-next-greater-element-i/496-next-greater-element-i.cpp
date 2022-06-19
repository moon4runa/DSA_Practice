class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> res;
        for(int i=0; i<nums2.size(); i++){
            int j = i+1;
            while(j < nums2.size()){
                if(nums2[j] > nums2[i]){
                    res[nums2[i]] = nums2[j];
                    break;
                }
                j += 1;
            }
            if (j == nums2.size()){
                res[nums2[i]] = -1;
            }
        }
        for(int i= 0; i < nums1.size(); i++){
            int curr = nums1[i];
            nums1[i] = res[curr];
        }
        return nums1;
        
    }
};