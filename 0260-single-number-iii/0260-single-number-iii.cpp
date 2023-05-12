class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        map<int,int> m;
        vector<int> ans;
        for(auto i : nums) m[i]++;
        for(auto i : m) if(i.second<2) ans.emplace_back(i.first);
        return ans;
    }
};