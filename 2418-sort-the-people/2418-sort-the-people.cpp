class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        vector<string> ans;
        map<int,string>m;
        for(int i=0;i<names.size();i++)
        {
            m[heights[i]]=names[i];
        }
        for (auto i = m.rbegin(); i != m.rend();++i) 
        {
            ans.emplace_back(i->second);
        }
        return ans;
    }
};