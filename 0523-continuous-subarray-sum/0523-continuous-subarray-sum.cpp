class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> m;
        
        m.emplace(0,-1);
        
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(m.find(sum%k)==m.end())
            {
                m.emplace(sum%k,i);
            }
            else
            {
                if((i-m[sum%k])>=2) return true;
            }
        }
        return false;
        
    }
};