class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ans.emplace_back(i);
            }
            else if(ans.size()>1) break;
        }
        return ans;
    }
};