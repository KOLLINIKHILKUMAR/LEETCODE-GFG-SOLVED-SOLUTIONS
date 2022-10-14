class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        map<char,int> m;
        int x;
        for(int i=0;i<s.size();++i)
        {
            m[s[i]]++;
        }
        x=m.begin()->second;
        for(auto i : m)
        {
            if(x!=i.second)
            {
                return false;
            }
        }
        return true;
        
    }
};