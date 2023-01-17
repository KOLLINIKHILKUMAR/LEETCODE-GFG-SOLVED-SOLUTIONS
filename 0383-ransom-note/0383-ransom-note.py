class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ransomNote=list(ransomNote)
        magazine=list(magazine)
        sum=0
        for i in ransomNote:
            if i in magazine:
                sum=sum+1
                magazine.remove(i)
        if(len(ransomNote)==sum):
            return True
        else:
            return False
            
        