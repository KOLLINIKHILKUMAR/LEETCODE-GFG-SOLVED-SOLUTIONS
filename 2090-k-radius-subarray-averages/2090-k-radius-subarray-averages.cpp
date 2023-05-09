class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) 
    {
        vector<int> ans(nums.size(),-1);
        long long sum=0;
        if(k==0) return nums;
        if(2*k>=nums.size()) return ans;
            for(int i=0;i<=(2*k);i++)
            { 
                sum=sum+nums[i];
            }
        
            ans[k]=sum/((2*k)+1);
            
            for(int i=k+1;i+k<nums.size();i++)
            {
                sum=sum-nums[i-k-1];
                sum=sum+nums[i+k];
                ans[i]=sum/((2*k)+1);
            }
        
        return ans;
    }
};