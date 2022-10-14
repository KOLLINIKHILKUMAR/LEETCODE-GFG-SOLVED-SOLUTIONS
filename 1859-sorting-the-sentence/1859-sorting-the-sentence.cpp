class Solution {
public:
    string sortSentence(string s) 
    {
        string t="";
        char x;
        map<char,string> m;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]==' ')
            {
                x=t[t.size()-1];
                t.pop_back();
                m[x]=t;
                t="";
            }
            else 
            {
                t=t+s[i];
            }
        }
        x=t[t.size()-1];
        t.pop_back();
        m[x]=t;
        s="";
        for(auto i : m)
        {
            s=s+i.second+' ';
        }
        s.pop_back();
        return s;
    }
};