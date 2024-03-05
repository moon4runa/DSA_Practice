class Solution {
    public int minimumLength(String s) {
        int sz = s.length();
        int ans = sz;
        if(sz == 1) return ans;
        int i = 0;
        int j = sz - 1;
        while(i < j){
            if(s.charAt(i) != s.charAt(j)) return ans;
            char c = s.charAt(i);

                while(s.charAt(i) == c){
                    if(i == j) break;
                    ans-=1;
                    i++;
                }
                while(s.charAt(j) == c){
                    if(i==j) {
                        ans-=1;
                        break;
                        }
                    ans -= 1;
                    j--;
                }
            
        }

return ans;
    }
    
}
