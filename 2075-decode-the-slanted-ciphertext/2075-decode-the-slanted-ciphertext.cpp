class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) 
    {
        if(rows==1) return encodedText;
        int n=encodedText.size(),temp=0;
        int cols=n/rows;
        
        vector<vector<char>> v;
        for(int i=0;i<rows;i++)
        {
            vector<char> tt;
            for(int j=0;j<cols;j++)
            {
                tt.emplace_back(encodedText[temp++]);
            }
            v.emplace_back(tt);
        }
        string ans;
        for(int i=0;i<cols;i++)
        {
            int now=i;
            for(int j=0;j<rows && now<cols;j++,now++)
            {
                ans.push_back(v[j][now]);
            }
        }
        while(ans.size()&&ans.back()==' ')
        {
            ans.pop_back();
        }
        return ans;
    }
};