class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        map<string,int> w,temp;
        int count=0;
        for(auto i : words)
            w[i]++;
        for(auto i : w)
        {
            string ii=i.first;
            int j=0,k=0,c=0;
            while(j< s.size() && k<ii.size())
            {
                if(s[j]==ii[k])
                {
                    j++;
                    k++;
                    c++;
                }
                else
                {
                    j++;
                }
            }
            if(c==ii.size()) count=count+i.second;
        }
        return count;
    }
    
};