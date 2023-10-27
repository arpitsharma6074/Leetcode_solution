#Approch:-just find the largest and shortest str
        #compare the str upto length of shortest str 
        #if found check for all others
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans=""
        first=max(strs)

        last=min(strs)
        for i in range(min(len(first),len(last))):
            if (first[i]!=last[i]):
                return ans 
            ans+=first[i]
        return ans
            