class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        vector<vector<int>> r,c;
        vector<int> ansr,ansc;
        int magic=0;
        for(int i=0,p=0;i<grid.size();i++,p++)
        {
            for(int j=0,q=0;j<grid[i].size();j++,q++)
            {
                ansr.push_back(grid[i][j]);
                ansc.push_back(grid[q][p]);   
            }
            r.push_back(ansr);
            c.push_back(ansc);
            ansr.clear();
            ansc.clear();
        }
        for(auto i : r)
        {
            for(auto j : c)
            {
                if(j==i) magic++;
            }
        }
        return magic;
        
    }
};