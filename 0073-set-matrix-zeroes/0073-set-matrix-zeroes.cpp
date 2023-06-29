class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        map<int,vector<int>> mp;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    mp[i].emplace_back(j);  
                }
                
            }
        }
        for(auto i :  mp) 
        {
            cout<<i.first<<" ";
            for(auto k : i.second) cout<<k<<" ";
            cout<<endl;
        }
        for(auto i : mp)
        {
            for(int p=0;p<m;p++) matrix[i.first][p]=0;
            for(auto k : i.second)
            {
                for(int p=0;p<n;p++) matrix[p][k]=0;
            }
        }
       
    }
};