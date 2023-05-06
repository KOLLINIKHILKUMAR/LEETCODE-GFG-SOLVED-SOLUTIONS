class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) 
    {
        vector<int> ans;
        int c=0;
        map<int,int> m1,m2;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i]) c++;
            else 
            {
                if(m1.find(b[i])!=m1.end()) c++;
                if(m2.find(a[i])!=m2.end()) c++;
                m1[a[i]]++;
                m2[b[i]]++;
            }
            ans.emplace_back(c);
        }
        return ans;
        
    }
};