class Solution {
public:
    int lengthOfLongestSubstring(string st) {
        int res = 0;
        int n = st.length();
        if(n<2) return n;
        unordered_map<char, int> mp;
        int s = 0;
        int e = 0;
        while(s<=e && e<n){
            char c = st[e];
            mp[c]++;
            if(mp[c] == 1){
                res = max(res, e-s+1);
            }
            else if(mp[c] > 1){
                while(mp[c] > 1){
                    mp[st[s]] --;
                    s++;
                }
            }
            e++;
        }
        return res;
    }
};