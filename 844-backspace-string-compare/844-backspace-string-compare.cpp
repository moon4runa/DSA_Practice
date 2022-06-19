class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_st;
        stack<char> t_st;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '#' && !s_st.empty()) s_st.pop();
            else if(s[i] != '#') s_st.push(s[i]);
        }
        for(int i = 0; i<t.size(); i++){
            if(t[i] == '#' && !t_st.empty()) t_st.pop();
            else if(t[i] != '#') t_st.push(t[i]);
        }
        if(s_st.size() != t_st.size()) return false;
        while(!s_st.empty() || !t_st.empty()){
            if(s_st.top() != t_st.top()) return false;
            s_st.pop();
            t_st.pop();
        }
        return true;
        
    }
};