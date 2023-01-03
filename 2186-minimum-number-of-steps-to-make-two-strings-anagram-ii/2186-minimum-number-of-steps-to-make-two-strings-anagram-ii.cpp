class Solution {
public:
    int minSteps(string s, string t) 
    {
        map<char,int> sm,tm;
        int ans=0;
        for(auto i : s)
        {
            sm[i]++;
            ans++;
        }
        
        for(auto i : t) tm[i]++;
        for(auto i : tm) 
        {
            auto it = sm.find(i.first);
            if(it==sm.end())
            {
                ans=ans+i.second;
            }
            else
            {
                if(it->second==i.second) ans=ans-i.second;
                else
                {
                    ans=ans-it->second;
                    ans=ans+(abs(it->second-i.second));
                }
                
            }
        }
        return ans;
    }
};