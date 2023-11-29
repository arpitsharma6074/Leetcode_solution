class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        count=res=0
        for x in nums:
            if x>0:
                count+=1
            elif x<0:
                res+=1
        return max(res,count)