class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        long long maxi=0,sum=0;
        map<long,long> m;
        
        for(int i=0;i<k;i++)
        {
            sum=sum+nums[i];
            m[nums[i]]++;
        }
        if(m.size()==k) maxi=max(maxi,sum);
        for(int i=k;i<nums.size();i++)
        {
            m[nums[i-k]]--;
            if(m[nums[i-k]]==0) m.erase(nums[i-k]);
            sum-=nums[i-k];
            sum+=nums[i];
            m[nums[i]]++;
            if(m.size()==k)
            {
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};