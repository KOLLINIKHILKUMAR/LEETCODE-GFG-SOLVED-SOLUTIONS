class Solution {
public:
    int minDeletionSize(vector<string>& strs)    
    {
        int c=0,i,j,t;
        for(i=0;i<strs[0].size();++i)
        {
            t=int(strs[0][i]);
            for(j=1;j<strs.size();++j)
            {
                if(int(strs[j][i])>=t) t=int(strs[j][i]);
                else
                {
                    c++;
                    break;
                }
            }
            
        }
        return c;
    }
};