class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        tsum=sum(nums)
        ls=0
        rs=tsum-nums[0]
        for i in range(len(nums)):
            if(ls==rs): return i
            else:
                ls=ls+nums[i]
                if(i!=len(nums)-1):
                    rs=rs-nums[i+1]
                print(ls,rs)
        return -1
        