class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int i,s=nums[0];
        for(i=1;i<nums.size();i++)
        {
            
            nums[i]=s+nums[i];
            s=nums[i];
        }
        return nums;
    }
};