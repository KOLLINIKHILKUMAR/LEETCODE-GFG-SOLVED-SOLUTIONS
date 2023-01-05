class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        s=""
        for i in num:
            s=s+str(i)
        p=str(int(s)+k)
        z=map(int,list(p))
        return z