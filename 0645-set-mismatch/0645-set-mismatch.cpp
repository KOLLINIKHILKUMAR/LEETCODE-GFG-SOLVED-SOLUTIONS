class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int sum=0,n;
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i : m)
        {
            if(i.second<=1)
            {
                sum=sum+i.first;
            }
            else
            {
                sum=sum+i.first;
                ans.emplace_back(i.first);
            }
        }
        n=nums.size();
        ans.emplace_back(((n*(n+1))/2)-sum);
        return ans;
    }
};