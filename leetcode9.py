import math
#Approch:- just checked the str and reverse str is equal 
#          then return "true".otherwise "false"
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if str(x)==str(x)[::-1]:
            return True
        else:
            return False