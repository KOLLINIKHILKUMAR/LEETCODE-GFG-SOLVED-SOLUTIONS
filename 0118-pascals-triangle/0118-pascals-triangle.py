class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 0:
            return []
        ans = [[1]]
        for i in range(1, numRows):
            te = [1]
            for j in range(1, len(ans[i-1])):
                te.append(ans[i-1][j-1] + ans[i-1][j])
            te.append(1)
            ans.append(te)
        return ans
    
                
        
        