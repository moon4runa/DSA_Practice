class Solution {
public:
    string reverseWords(string str) {
         int n = str.length();
    stack<string> st;
    string word = "";
    for(int i=0; i<n; i++){
        
        if(str[i] == ' '){
            if(word != "") st.push(word);
            
            word = "";
        }
        else{
            word += str[i];
        }
    }
    if(word!= "") st.push(word);
    string res = "";
    while(!st.empty()){
        string temp = st.top();
        res += temp;
        st.pop();
        if(!st.empty()) res+=' ';
    }

    return res;
    }
};
