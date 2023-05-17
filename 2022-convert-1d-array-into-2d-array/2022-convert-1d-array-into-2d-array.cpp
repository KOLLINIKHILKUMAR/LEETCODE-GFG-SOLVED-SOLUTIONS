class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
    {
        vector<vector<int>> ans,l;
        int k=0;
        for(int i=0;i<m;i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            {
                if(k<original.size()) v.emplace_back(original[k++]);
                else return l;
            }
            ans.emplace_back(v);
        }
        cout<<k;
        if(k==original.size()) return ans;
        else return l; 
    }
    
};