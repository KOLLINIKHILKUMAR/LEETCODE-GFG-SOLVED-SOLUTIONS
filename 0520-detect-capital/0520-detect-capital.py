class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if word.isupper(): return 1
        elif word.islower(): return 1
        elif word[1:].islower() and word[0].isupper(): return 1
        else: return 0
        