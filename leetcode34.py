class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if target in nums:
            idx=nums.index(target)
            for i in range(len(nums)-1,idx-1,-1):
                if nums[i]==target:
                    return [idx,i]
             
        else:
            return [-1,-1]