class Solution:
    def isHappy(self, n: int) -> bool:
        def square(number):
            return int(number) ** 2
        while(n>4):
            l=list(str(n))
            m=list(map(square,l))
            n=sum(m)
            if(n<3): break
        if(n==1): return 1
        return 0
    
        
        