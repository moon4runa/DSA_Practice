class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        # Recursive with memoization
        def lcs(s1, s2, ind1, ind2, dp):
            if ind1 < 0 or ind2 < 0:
                return 0
            if dp[ind1][ind2] != -1:
                return dp[ind1][ind2]
            if s1[ind1] == s2[ind2]:
                dp[ind1][ind2] = 1 + lcs(s1,s2,ind1-1, ind2-1,dp)
            else:
                dp[ind1][ind2] = max(lcs(s1,s2,ind1-1, ind2,dp), lcs(s1, s2, ind1, ind2-1,dp)) 
            return dp[ind1][ind2]
        
        n = len(text1)
        m = len(text2)
        dp = []
        for i in range(n):
            dp.append([-1]*m)
        
        return lcs(text1, text2, len(text1)-1, len(text2)-1, dp)
        
        