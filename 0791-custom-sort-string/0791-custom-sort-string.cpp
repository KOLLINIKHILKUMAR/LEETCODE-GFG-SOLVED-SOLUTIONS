class Solution {
public:
    string customSortString(string order, string s) 
    {
      string ans;
        unordered_map<char, int>mp;
        
        for(auto i : s) 
            mp[i]++;
        
        for(int i = 0; i < order.size(); i++)
        {
            while(mp[order[i]] > 0)
            {
                ans.push_back(order[i]);
                mp[order[i]]--;
            }
        }
        for(auto i : mp)
        {
            while(i.second > 0)
            {
                ans.push_back(i.first);
                i.second--;
            }  
        }
     return ans;  
    }
};