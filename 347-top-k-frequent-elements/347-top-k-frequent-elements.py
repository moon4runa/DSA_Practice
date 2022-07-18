class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        res = []
        dic = {}
        for i in range(len(nums)):
            if nums[i] not in dic:
                dic[nums[i]] = 1
            else:
                dic[nums[i]] += 1 
        count = dict(sorted(dic.items(), key=lambda item: item[1], reverse = True))
        for i in count:
            if k > 0:
                res.append(i)
            else:
                break
            k -= 1
        return res
        
        