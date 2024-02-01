class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) 
    {
        vector<vector<int>> ans,em;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+3) 
        {
            vector<int> temp;
            if(abs(nums[i]-nums[i+1])<=k && abs(nums[i+1]-nums[i+2])<=k && abs(nums[i]-nums[i+2])<=k)
            {
            temp.emplace_back(nums[i]);
            temp.emplace_back(nums[i+1]);
            temp.emplace_back(nums[i+2]);
            ans.emplace_back(temp);
            }
            else return em;
        }
        return ans;
        
    }
};