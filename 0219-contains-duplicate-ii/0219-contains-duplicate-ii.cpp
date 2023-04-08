class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        map<int,int> m;
        for(int t=0;t<nums.size();t++)
        {
            if(m.find(nums[t])==m.end())
            {
                m[nums[t]]=t;
            }
            else
            {
                if(abs(t-m[nums[t]])<=k) return true;
                else m[nums[t]]=t;
            }
        }
        return false;
    }
};