//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string str) 
    { 
        int n = str.length();
    stack<string> st;
    string word = "";
    for(int i=0; i<n; i++){
        
        if(str[i] == '.'){
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
        if(!st.empty()) res+='.';
    }

    return res;
        // code here 
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends