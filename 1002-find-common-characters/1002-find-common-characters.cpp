class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        int c=0;
        string s="";
        vector<string> ans;
        for(int i=0;i<words[0].size();i++)
        {
            c=0;
            for(int j=1;j<words.size();++j)
            {
                if(words[j].find(words[0][i])!= string::npos)
                {
                    c++;
                    words[j].erase(words[j].find(words[0][i]),1);
                }
            }
            if(c==words.size()-1)
                {
                    s=s+words[0][i];
                    ans.emplace_back(s);
                    s="";
                }
        }
        return ans;
        
    }
};