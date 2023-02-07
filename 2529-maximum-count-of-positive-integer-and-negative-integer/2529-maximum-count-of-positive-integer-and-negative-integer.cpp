class Solution {
public:
    int maximumCount(vector<int>& nums) 
    {
        int neg=0,i,pos=0;
        for(i=0;i<nums.size() && nums[i]<0; i++){}
        neg=i;
        for(i=neg;i<nums.size();i++){
            if(nums[i]>0) break;
        }
        pos=nums.size()-(i-neg)-neg;
        cout<<pos<<" ";
        return max(pos,neg);
    }
};