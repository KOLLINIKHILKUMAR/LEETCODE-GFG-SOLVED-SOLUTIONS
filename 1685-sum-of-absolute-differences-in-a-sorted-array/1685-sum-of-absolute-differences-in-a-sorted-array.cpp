class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
    {
        int sum=0,prefix=0,n=nums.size();
        vector<int> ans(n,0);
        sum=accumulate(begin(nums),end(nums),0);
        
        for(int i=0;i<n;i++)
        {
            ans[i]=(i*nums[i]-prefix)+((sum-prefix-nums[i])-(n-i-1)*nums[i]);
            prefix += nums[i];
        }
        
        return ans;
    }
};