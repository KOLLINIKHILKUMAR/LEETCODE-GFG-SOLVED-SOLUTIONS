class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> m;
        int sum=0,count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(sum==k) count++;
            if(m.find(sum-k)!=m.end())
            {
                count=count+m[sum-k];
                
            }
            m[sum]++;            
        }
        return count;
    }
};