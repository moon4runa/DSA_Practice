class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        ans = 0
        i = 0
        while i < n:
            j = i
            l = 0
            d = []
            while j < n:
                if s[j] in d:
                    break
                d.append(s[j])
                l += 1
                j += 1
            ans = max(l, ans)
            i += 1
    
        return ans
                    
                
                
        