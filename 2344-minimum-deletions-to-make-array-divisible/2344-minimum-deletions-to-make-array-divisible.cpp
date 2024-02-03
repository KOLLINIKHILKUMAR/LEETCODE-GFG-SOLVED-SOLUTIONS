class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) 
    {
        int ans=0,f=0;
        map<int,int> m,m1;
        for(auto i : nums) m[i]++;
        for(auto i : numsDivide) m1[i]++;
        for(auto i : m)
        {
            f=0;
            for(auto j : m1)
            {
                if((j.first%i.first)!=0) 
                {
                    ans=ans+i.second;
                    break;
                }
                else
                {
                    f++;
                }
                
            } 
            if(f==m1.size()) return ans;
        }
        return -1;
        
    }
};