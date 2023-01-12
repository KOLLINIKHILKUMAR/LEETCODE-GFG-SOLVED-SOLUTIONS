class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        long int t=0,l=0,r=0;
        for(auto i:nums) t=t+i;
        r=t-nums[0];
        l=0;
        for(int j=0;j<nums.size();j++)
        {
            if(l==r) return j;
            else
            {
                l=l+nums[j];
                if(j!=nums.size()-1) r=r-nums[j+1];
            }
        }
        return -1;
        
    }
};