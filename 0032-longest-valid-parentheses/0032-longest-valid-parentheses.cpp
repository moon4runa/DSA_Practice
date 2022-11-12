class Solution {
public:
    int longestValidParentheses(string s) {
    stack<int> st;
    int n = s.length();
    st.push(-1);
    if(n < 2 ) return 0;
    int res = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){ 
            st.push(i); 
            continue;
        }
            res = max(res, i-st.top());
        }
    }
    return res;
    }
};