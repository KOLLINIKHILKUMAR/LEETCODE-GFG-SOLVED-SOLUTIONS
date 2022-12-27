class Solution {
public:
    vector<int> findLonely(vector<int>& nums) 
    {
        vector<int> ans;
        map<int,int> m;
        for(auto i : nums) m[i]++;
        for(auto it=m.begin();it!=m.end();++it)
        {
            if(it->second==1)
            {
                if(m.find((it->first)+1)==m.end() && m.find((it->first)-1)==m.end()) ans.push_back(it->first);
            }
        }
        return ans;
    }
};