class Solution:
    def deleteGreatestValue(self, grid: List[List[int]]) -> int:
        ans=0
        for i in range(len(grid)):
            grid[i].sort(reverse=True)
        for i in range(len(grid[0])):
            t=[]
            maxi=0
            for j in range(len(grid)):
                maxi=max(grid[j][i],maxi)
            ans=ans+maxi
        return ans
        