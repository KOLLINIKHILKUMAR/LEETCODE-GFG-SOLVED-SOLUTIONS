class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        long long sum=0;
        bool f=0;
        long long c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                if(i==nums.size()-1)
                {   
                    c++;
                    sum=sum+((c*(c+1))/2);
                }
                else
                {
                    c++;
                }
            }
            else
            {
                sum=sum+((c*(c+1))/2);
                c=0;
            }
        }
        return sum;
        
    }
};