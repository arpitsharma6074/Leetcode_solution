#this is solution of 2sum
class Solution(object):
    def twoSum(self, nums, target):
        idx=0
        for i in range(len(nums)):
            diff=target-nums[i]
            if diff in nums :
                idx=nums.index(diff)
                if i!=idx:
                    return i,idx
                    


                