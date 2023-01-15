class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int i,j;
        vector<vector<int>> ans;
        vector<int> e;
        for(i=0;i<mat.size();i++)
        {
            for(j=0;j<mat[0].size();j++)
            {
                e.emplace_back(mat[i][j]);
            }
        }
        // if(mat.size()*mat[0].size()==r*c) 
        // {
        //     cout<<"iam herer";
        //     return mat;
        // }
        auto k=0;
        for(i=0;i<r;i++)
        {
            vector<int> temp;
            for(j=0;j<c;j++)
            {
                if(e.size()==r*c )
                {
                    temp.emplace_back(e[k]);
                    k++;
                }
                else
                    return mat;
            }
            ans.emplace_back(temp);
        }
        return ans;
    }
};