class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        l=[]
        nums.sort()
        for i in range(k):
            m=mode(nums)
            l.append(m)
            nums=list(filter((m).__ne__,nums))
        return l
            