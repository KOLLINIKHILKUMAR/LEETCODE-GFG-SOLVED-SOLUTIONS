class Solution {
public:
    int partitionDisjoint(vector<int>& nums) 
    {        
        int mini=nums[0],maxi=nums[0];
        int index=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<mini){
                index=i;
                mini=maxi;
            }
            maxi=max(nums[i],maxi);
        }
        return index+1;
    }
};