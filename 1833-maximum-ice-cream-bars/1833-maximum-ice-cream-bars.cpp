class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        int ans=0;
        sort(costs.begin(),costs.end());
        for(auto i : costs)
        {
            if(coins==0) break;
            if(coins-i>=0)
            {
                coins=coins-i;
                ans++;
            }
        }
        return ans;
        
    }
};