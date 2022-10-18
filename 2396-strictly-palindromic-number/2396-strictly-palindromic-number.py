class Solution:
    def isStrictlyPalindromic(self, n: int) -> bool:
        s=bin(n)
        t=s
        s=s[::-1]
        if(s[:-3]==t[2:]):
            return True
        else:
            return False
        