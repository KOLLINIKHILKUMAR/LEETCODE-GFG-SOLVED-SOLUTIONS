class Solution {
public:
    int maxArea(vector<int>& nums) 
    {
        int l=0,r=nums.size()-1,ans=0,res=0;
        while(l<r)
        {
            ans=(r-l)*min(nums[l],nums[r]); 
            res=max(res,ans); 
            if(nums[l]<nums[r])
                l++; 
            else
                r--; 
        }
        return res;
    }
};