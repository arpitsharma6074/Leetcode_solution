class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        count=0
        i=0
        n=len(nums)
        while(i<len(nums)-1):
            if nums[i]==nums[i+1]:
                nums.pop(i)
                
                count+=1
            else:
                i+=1
        return n-count
         
 

        