class Solution {
    public int bagOfTokensScore(int[] tokens, int power) {
        Arrays.sort(tokens);
        if(tokens.length == 0) return 0;
        
        if(tokens[0] > power) return 0;
        int score = 0;
        int ans = 0;
        int i = 0;
        int j = tokens.length - 1;
        while(i <= j){
            if(tokens[i] <= power){
                score += 1;
                power -= tokens[i];
                i+=1;
                if(score > ans) ans = score;
            }
            else{
                if(score > 0){
                score -=1;
                power += tokens[j];
                }
                j-=1;
            }

        }

        return ans;



    }
}
