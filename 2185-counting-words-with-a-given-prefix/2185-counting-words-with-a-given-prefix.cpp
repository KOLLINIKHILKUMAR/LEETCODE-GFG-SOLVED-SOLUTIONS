class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int c=0,f=pref.size(),n=0;
        for(int i=0;i<words.size();++i)
        {
            n=0;
            for(int j=0;j<words[i].size() && j<pref.size();++j)
            {
                if(words[i][j]==pref[j]) n++;
            }
            if(n==f) c++;
        }
        return c;
    }
};
