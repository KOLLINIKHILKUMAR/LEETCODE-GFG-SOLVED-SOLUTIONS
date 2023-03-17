class Solution {
public:
    int findClosestNumber(vector<int>& nums) 
    {
        int ele=nums[0],min=abs(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(min>=abs(nums[i]))
            {
                if(ele==abs(nums[i]))
                {
                    if(nums[i]<0) ele=abs(nums[i]);
                    else ele=nums[i];
                    min=abs(nums[i]);
                }
                else
                {
                    ele=nums[i];
                    min=abs(nums[i]);
                }
            }
        }
        return ele;
    }
};