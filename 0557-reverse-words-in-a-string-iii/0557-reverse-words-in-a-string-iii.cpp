class Solution {
public:
    string reverseWords(string s) 
    {
        string t="",ans="";
        for(int i=0;i<s.size();++i)
        {
            if(s[i]==' ')
            {
                reverse(t.begin(), t.end());
                ans=ans+t+" ";
                t="";
            }
            else
            {
               t=t+s[i]; 
            }
        }
        reverse(t.begin(), t.end());
        ans=ans+t;
        return ans;
    }
};