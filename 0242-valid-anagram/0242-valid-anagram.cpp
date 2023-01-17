class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        map<char,int> m1,m2;
        map<char,int>:: iterator it,ij;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for(it=m1.begin(),ij=m2.begin();it!=m1.end();++it,++ij)
        {
            if(it->second!=ij->second || it->first!=ij->first) return false;
        }
        return true;
        
    }
};