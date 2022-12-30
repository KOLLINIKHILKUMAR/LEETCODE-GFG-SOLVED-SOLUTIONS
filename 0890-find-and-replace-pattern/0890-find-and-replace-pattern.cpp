class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        unordered_map<char,string> p;
        vector<string> ans;
        vector<string> stri;
        for(int i=0;i<pattern.size();i++) p[pattern[i]]=p[pattern[i]]+to_string(i);
        for(auto k : p) stri.emplace_back(k.second);
        for(auto word : words)
        {
            unordered_map<char,string> m;
            
            for(int i=0;i<word.size();i++) m[word[i]]=m[word[i]]+to_string(i);
            
            if(m.size()==p.size())
            {
                int f=0;
                
                for(auto j=m.begin();j!=m.end();j++)
                {
                    auto it = find(stri.begin(),stri.end(),j->second);
                    if(it==stri.end()) 
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0) ans.emplace_back(word);
            }
        }
        return ans;
    }
};