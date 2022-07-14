class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        # Dynamic Programming
        dp = [];
        dp.append(set(["()"]))
        if n==1:
            return dp[0]
        for i in range(1, n):
            temp_set = set()
            for prev in dp[i-1]:
                for j in range(0, len(prev)):
                    temp_set.add(prev[0:j] + "()" + prev[j:])
            dp.append(temp_set)
        return dp[n-1]
                    
                        
                    
                
        