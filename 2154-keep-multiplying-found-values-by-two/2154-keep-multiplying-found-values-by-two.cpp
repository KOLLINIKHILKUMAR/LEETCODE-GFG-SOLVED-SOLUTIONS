class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        if(find(nums.begin(),nums.end(),original)!=nums.end())
        {
            while(find(nums.begin(),nums.end(),original)!=nums.end())
            {
                original=2*original;
            }
        }
        else 
        {

            return original;
        }
        return original;
    }
};