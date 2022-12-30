class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) 
    {
        vector<int> ans;
        int sum=0;
        for(auto i : nums) if(i%2==0) sum=sum+i;
        for(auto i:queries)
        {
            int temp = nums[i[1]];
            
            nums[i[1]]+=i[0];
            
            if(abs(temp)%2==0)
            {
                if(nums[i[1]]%2==0)
                {
                    sum+=i[0];
                }
                else
                {
                    sum-=temp;
                }
            }
            else
            {
                if(nums[i[1]]%2==0) sum+=nums[i[1]];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};