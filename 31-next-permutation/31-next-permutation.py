class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        n = len(nums)
        i = n - 2
        while nums[i] >= nums[i + 1] and i >= 0:
            i -= 1
            
        if i == -1:
            i = 0
            j = n - 1 
            while i < j:
                curr = nums[i]
                nums[i] = nums[j]
                nums[j] = curr 
                i+=1
                j-=1
            return
            
            
        ind = i 
        num = nums[ind]
        i = ind + 1
        curr = max(nums)
        curr_i = -1
        while i < n:
            if nums[i] > num:
                curr = min(curr, nums[i])
                curr_i = i 
            i += 1
        nums[ind] = curr 
        nums[curr_i] = num
        i = ind + 1
        j = n - 1 
        while i < j:
            curr = nums[i]
            nums[i] = nums[j]
            nums[j] = curr 
            i+=1
            j-=1 
        
        
        