class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        if len(nums)<2: return 0
        maxp=-1
        nums.sort()
        for i in range(1,len(nums)):
            maxi=abs(nums[i-1]-nums[i])
            maxp=max(maxp,maxi)
        maxp=max(maxp,maxi)
        return maxp