class Solution {
public:
    int cal(int m)
        {
            if(m<1)
                return 0;
            return  (m%10)+cal(m/10);
        }
    int maximumSum(vector<int>& nums) 
    {
        unordered_map<int,int> m;
        int maxi=-1,sum;
        for(int i=0;i<nums.size();i++)
        {
            sum=cal(nums[i]);
            if(!m[sum])
            {
                m[sum]=nums[i];
            }
            else
            {
                maxi=max(maxi,nums[i]+m[sum]);
                m[sum]=max(m[sum],nums[i]);
            }
        }
        return maxi;  
    }
};