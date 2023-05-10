class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int c=0;
        for(int i=2;i<nums.size();i++)
        {   
            if(nums[i]==nums[i-2-c]) c++;
            else nums[i-c]=nums[i];
        }
        return nums.size()-c;
        
    }
};