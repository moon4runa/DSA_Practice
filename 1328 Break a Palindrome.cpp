class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();
    if(n==1) return "";
    string res; 
    int flag =0;
    for(int i=0; i<n; i++){
        if(n%2!= 0 && i == (n-1)/2) continue;
        if(palindrome[i] != 'a'){
    palindrome.replace(i,1,"a");
    flag = 1;
    break;
    }
    }
    if(flag==0) palindrome.replace(n-1, 1,"b");
    return palindrome; 

        
    }
};
