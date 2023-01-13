class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d={}
        for i in strs:
            k=list(i)
            k.sort()
            p=str(k)
            if p in d:
                d[p].append(i)
            else:
                d[p]=[]
                d[p].append(i)
        return list(d.values())
        