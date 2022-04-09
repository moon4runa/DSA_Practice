class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        if n <=1:
            return n
        ans = 0
        i = 0
        d = {}
        for j in range(n):
            if s[j] not in d:
                ans = max(j-i+1, ans)
            else:
                if d[s[j]] < i:
                    ans = max(j-i+1, ans)
                else:
                    i = d[s[j]] + 1 
            d[s[j]] = j 
        return ans
        
        
        # while i <= j and j < n :
        #     if i==j and j < n-1:
        #         j += 1
        #     if s[j] in d:
        #         i = d[s[j]] + 1
        #         d[s[j]] = j 
        #     else:
        #         d[s[j]] = j
        #         l = j - i + 1
        #         ans = max(ans, l)
        #         j += 1
        
        return ans
                    
                    
                
            
                
                
        