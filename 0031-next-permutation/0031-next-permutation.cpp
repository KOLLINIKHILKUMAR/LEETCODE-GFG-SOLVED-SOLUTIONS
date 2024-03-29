class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int i,k;
        for(i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                break;
            } 
        }
        if(i<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for(k=nums.size()-1;k>i;k--)
            {
                if(nums[k]>nums[i])
                {
                    break;
                }
            }
            swap(nums[k],nums[i]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};