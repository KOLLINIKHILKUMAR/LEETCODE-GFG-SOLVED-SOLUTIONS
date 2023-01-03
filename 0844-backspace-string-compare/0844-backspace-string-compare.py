def goandcome(k: str) -> str:
        ans=""
        for i in k:
            if i!='#':
                ans=ans+i
            else:
                ans=ans[:-1]
        return ans
class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        a=goandcome(s)
        b=goandcome(t)
        if a==b: return 1
        else: return 0
        
        