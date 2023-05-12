class Solution
{
    public:
        vector<int> findDiagonalOrder(vector<vector < int>> &mat)
        {
            vector<int> ans;
            map<int, vector < int>> m;
            for (int i = 0; i < mat.size(); i++)
            {
                for (int j = 0; j < mat[0].size(); j++)
                {
                    m[i + j].emplace_back(mat[i][j]);
                }
            }
            int j = 0;
            for (auto i: m)
            {
                if (j % 2 != 0)
                {
                    for(auto k : i.second) ans.emplace_back(k);
                }
                else 
                {                   
                    for(auto k = i.second.rbegin();k!=i.second.rend();k++) ans.emplace_back(*k);
                }
                j++;
            }
            return ans;
        }
};