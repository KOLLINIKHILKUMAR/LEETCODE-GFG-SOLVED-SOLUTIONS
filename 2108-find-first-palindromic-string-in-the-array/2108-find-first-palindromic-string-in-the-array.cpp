class Solution {
bool pan(string s)
{
    int i=0,n=s.size();
	    for(i=0;i<n/2;i++)
	    {
	        if(s[i]!=s[n-i-1]) return 0;
	    }
	    return 1;
}
public:
    string firstPalindrome(vector<string>& words) 
    {
        bool x;
        for(int i=0;i<words.size();++i)
        {
            x=pan(words[i]);
            if(x==true) return words[i];
        }
        return "";
    }
};