class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
# Recursive with memoization
#         def lcs(s1, s2, ind1, ind2, dp):
#             if ind1 < 0 or ind2 < 0:
#                 return 0
#             if dp[ind1][ind2] != -1:
#                 return dp[ind1][ind2]
#             if s1[ind1] == s2[ind2]:
#                 dp[ind1][ind2] = 1 + lcs(s1,s2,ind1-1, ind2-1,dp)
#             else:
#                 dp[ind1][ind2] = max(lcs(s1,s2,ind1-1, ind2,dp), lcs(s1, s2, ind1, ind2-1,dp)) 
#             return dp[ind1][ind2]
        
    
        n = len(text1)
        m = len(text2)
        dp = []
        for i in range(n+1):
            dp.append([-1]*(m+1))
 
        
        
        
        for ind1 in range(n+1):
            for ind2 in range(m+1):
                if(ind1 == 0 or ind2 == 0):
                    dp[ind1][ind2] = 0
                elif text1[ind1 -1]==text2[ind2-1]:
                    dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1]
                else:
                    dp[ind1][ind2] = max(dp[ind1-1][ind2], dp[ind1][ind2-1])
                
        return dp[n][m]
            
        
        # return lcs(text1, text2, len(text1)-1, len(text2)-1, dp)
        
        