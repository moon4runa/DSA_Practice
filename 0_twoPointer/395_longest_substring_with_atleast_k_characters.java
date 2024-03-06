class Solution {

    public boolean check(String s, int k){
        Map<Character, Integer> charFrequencyMap = new HashMap<>();
        for (char c : s.toCharArray()) {
            charFrequencyMap.put(c, charFrequencyMap.getOrDefault(c, 0) + 1);
        }
        for (int frequency : charFrequencyMap.values()) {
            if (frequency < k) {
                return false;
            }
        }
        return true;
    }

    public int longestSubstring(String s, int k) {
        if(k==1) return s.length();
        if(s.length() == 0) return 0;
        if(check(s, k)) return s.length();

        Map<Character, Integer> cntMp = new HashMap<>();
        int ans = 0;
        for (char c : s.toCharArray()) {
            cntMp.put(c, cntMp.getOrDefault(c, 0) + 1);
        }

        int i = 0;
        int j = 0;
        while(j <= s.length()){
            if(j==s.length() || cntMp.get(s.charAt(j)) < k){       
                    String temp = s.substring(i, j);
                    int v = longestSubstring(temp, k);
                    ans = Integer.max(ans, v);
                    i = j+1;
                    j = j+1;           
            }
            else{
                j+=1;
            }
        }
        return ans;
        
    }
}
