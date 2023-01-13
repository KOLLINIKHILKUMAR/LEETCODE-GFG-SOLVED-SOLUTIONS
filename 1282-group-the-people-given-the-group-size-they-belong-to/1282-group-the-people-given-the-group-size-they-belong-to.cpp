class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) 
    {
        vector<vector<int>> ans;
        map<int,vector<int>> m;
        for(int i=0;i<gs.size();i++)
        {
            m[gs[i]].push_back(i);
        }
        // for(auto j : m)
        // {
        //     cout<<j.first<<" ";
        //     for(auto k : j.second) cout<<k<<",";
        //     cout<<endl;
        // }
        for(auto j : m)
        {
            
            for(int k=0;k<j.second.size();k)
            {
                vector<int> temp;
                while(temp.size()<j.first)
                {
                    temp.emplace_back(j.second[k]);
                    k++;
                }
                ans.emplace_back(temp);
            }
        }
        return ans;
        
    }
};