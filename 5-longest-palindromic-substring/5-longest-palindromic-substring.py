class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        dp = []
        for i in range(n):
            dp.append([False]*n)
        a = s[0]
        for i in range(n-1):
             for j in range(i,n):
                    if i == j:
                        dp[i][j] = True
        for i in range(n-1, -1, -1):
            for j in range(i+1, n):
                if s[i] == s[j]:
                    if j - i == 1 or dp[i+1][j-1] == True:
                        dp[i][j] = True 
                        if j - i + 1 > len(a):
                            a = s[i:j+1]
                            
                    
        
        
        # print(dp)
                        
                        
                
        return a
        
        