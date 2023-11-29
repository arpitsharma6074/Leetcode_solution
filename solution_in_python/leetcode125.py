class Solution:
    def isPalindrome(self, s: str) -> bool:
        x=[]
        for i in range(len(s)):
            if s[i].isupper() and s[i].isalnum():
                x.append(s[i].lower())
            elif s[i].isalnum():
                x.append(s[i])
        if x == x[::-1]:
            return True
        else:
            return False
 