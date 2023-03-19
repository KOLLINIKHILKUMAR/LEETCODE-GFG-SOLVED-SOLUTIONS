class Solution {
public:
    int getMaximumGenerated(int n) 
    {
        if (n == 0 || n == 1) return n;
        vector<int> ans(n+1);
        ans[0] = 0;
        ans[1] = 1;
        int maxi = 1;
        for (int i = 2; i <= n; i++) {
            if(i % 2 == 0)
            {
                ans[i]=ans[i/2];
            }
            else
            {
                ans[i]= ans[i / 2] + ans[i / 2 + 1];
            }
            maxi = max(maxi, ans[i]);
        }
        
        return maxi;
    }
};