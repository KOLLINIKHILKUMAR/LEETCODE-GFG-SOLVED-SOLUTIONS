class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> ans;
        int l=p.size();
        map<char,int> m,temp;
        
        for(auto i : p) m[i]++;
        for(int i=0;i<l;i++)
        {
            temp[s[i]]++;
        }
        if(m==temp) ans.emplace_back(0);
        
        for(int i=l;i<s.size();i++)
        {
            temp[s[i-l]]--;
            if(temp[s[i-l]]==0) temp.erase(s[i-l]);
            temp[s[i]]++;
            if(temp==m) ans.emplace_back(i-p.size()+1);
        }
        return ans;
    }
};