class Solution {
public:
    int givemax(vector<int>& nums1, vector<int>& nums2,int i,int j,vector<vector<int>>& dp)
    {
        if(i<=0 || j<=0)
        {
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(nums1[i-1]==nums2[j-1])
        {
            dp[i][j]= 1+givemax(nums1,nums2,i-1,j-1,dp);
        }
        else
        {
            dp[i][j] = max(givemax(nums1,nums2,i,j-1,dp),givemax(nums1,nums2,i-1,j,dp));
        }
        return dp[i][j];
        
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<vector<int>> dp(nums1.size() + 1, vector<int>(nums2.size() + 1, -1));
        return givemax(nums1,nums2,nums1.size(),nums2.size(),dp);
    }
};