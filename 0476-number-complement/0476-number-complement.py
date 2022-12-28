class Solution:
    def findComplement(self, num: int) -> int:
        b=str(bin(num)).replace("0b","")
        b=b.replace('0', '%temp%').replace('1', '0').replace('%temp%', '1')
        return int(b,2)
 
        