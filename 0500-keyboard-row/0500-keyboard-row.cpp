class Solution {
public:
    vector<string> findWords(vector<string>& words) 
    {
        string fr="qwertyuiop",fr1="QWERTYUIOP",sr="asdfghjkl",sr1="ASDFGHJKL",tr="zxcvbnm",tr1="ZXCVBNM";
        int f=0,j;
        vector<string> ans;
        for(int i=0;i<words.size();++i)
        {
            f=0;
            if(fr.find(words[i][0])!=string::npos || fr1.find(words[i][0])!=string::npos)
            {
                for(j=1;j<words[i].size();++j)
                {
                    if(fr.find(words[i][j])!=string::npos || fr1.find(words[i][j])!=string::npos) f++;
                }
                if(f==words[i].size()-1) ans.emplace_back(words[i]);
            }
            
            else if(sr.find(words[i][0])!=string::npos || sr1.find(words[i][0])!=string::npos)
            {
                for(j=1;j<words[i].size();++j)
                {
                    if(sr.find(words[i][j])!=string::npos || sr1.find(words[i][j])!=string::npos) f++;
                }
                if(f==words[i].size()-1) ans.emplace_back(words[i]);
                
            }
            
            else
            {
                for(j=1;j<words[i].size();++j)
                {
                    if(tr.find(words[i][j])!=string::npos || tr1.find(words[i][j])!=string::npos) f++;
                }
                if(f==words[i].size()-1) ans.emplace_back(words[i]);
                
            }
        }
        return ans;
    }
};