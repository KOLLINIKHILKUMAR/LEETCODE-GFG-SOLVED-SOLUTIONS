class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {
        int ans=0,ind_mini=0,ind_maxi,maxi=INT_MIN,mini=INT_MAX,front,back,fb1,fb2;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(mini>nums[i])
            {
                mini=nums[i];
                ind_mini=i;
            }
            if(maxi<nums[i])
            {
                maxi=nums[i];
                ind_maxi=i;
            }
        } 
        if(n==1) return 1;
        if(n==2) return 2;
        ind_mini++;
        ind_maxi++;
        cout<<ind_mini<<" "<<ind_maxi<<" ";
        if(ind_mini>ind_maxi)
        {
            front=ind_mini;
            back=n-ind_maxi+1;
            fb1=ind_maxi;
            fb2=n-ind_mini+1;
        }
        else
        {
            front=ind_maxi;
            back=n-ind_mini+1;
            fb2=n-ind_maxi+1;
            fb1=ind_mini;
        }
        ans=min(front,back);
        ans=min(ans,fb1+fb2);
        return ans;
        
    }
};