class Solution {
public:
    string decodeString(string s) {
        stack <string> ans;
        for(int i=0; i<s.length(); i++){
            string t(1, s[i]);
            if(s[i] != ']'){
                ans.push(t);
            }
            else{
                string sstring;
                while(ans.top() != "["){
                    string temp = ans.top();
                    ans.pop();
                    sstring = temp + sstring;
                }
                ans.pop();
                string num;
                
                while(ans.size()!=0&&ans.top()[0]-'0'>=0&&ans.top()[0]-'0'<=9 ){
                    string temp1 = ans.top();
                    ans.pop();
                    num = temp1 + num;
                }
                int c = stoi(num);
                string rep;
                for(int k = 0; k <c; k++){
                    rep = rep + sstring;
                }
                ans.push(rep);
            }
        }
        string dc;
        while(!ans.empty()){
            dc = ans.top() + dc;
            ans.pop();
                           }
        return dc;
       
    }
};