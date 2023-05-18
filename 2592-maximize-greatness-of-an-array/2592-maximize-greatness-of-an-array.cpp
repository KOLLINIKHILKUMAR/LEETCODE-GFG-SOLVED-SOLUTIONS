class Solution {
public:
    int maximizeGreatness(vector<int>& nums) 
    {
        vector<int> v;
        v=nums;
        sort(v.begin(),v.end());
        int slow,fast,count=0;
        for(slow=0,fast=1;fast<nums.size();slow,fast)
        {
            if(v[slow]<v[fast])
            {
                count++;
                slow++;
            }
            fast++;
        }
        return count;
        
    }
};