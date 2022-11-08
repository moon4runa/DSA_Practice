class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> res;
        stack<int> st;
        for(int i=0; i<nums2.size(); i++){
            if(st.empty()){
                st.push(nums2[i]);
                continue;
            }
            while(!st.empty() && st.top() < nums2[i]){
                res[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            res[st.top()] = -1;
                st.pop();
        }
        for(int i= 0; i < nums1.size(); i++){
            int curr = nums1[i];
            nums1[i] = res[curr];
        }
        return nums1;
        
    }
};