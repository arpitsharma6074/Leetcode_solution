class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res=[]
        nums.sort()
        length=len(nums)-1
        for i in range(length):
            l=i+1
            r=length
            if i>0 and nums[i]==nums[i-1]:
                continue
            while(l<r):
                if nums[i]+nums[l]+nums[r]==0:
                    res.append([nums[i],nums[l],nums[r]])
                    while r>l and nums[l]==nums[l+1]:
                        l+=1
                    while r>l and nums[r]==nums[r-1]:
                        r-=1
                    l+=1
                    r-=1
                elif (nums[i]+nums[l]+nums[r]) > 0:
                    r-=1
                else:
                    l+=1
        return res
        