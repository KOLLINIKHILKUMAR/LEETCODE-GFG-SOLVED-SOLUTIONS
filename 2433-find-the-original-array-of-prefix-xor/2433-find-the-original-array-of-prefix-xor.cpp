class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        vector<int> ans;
        ans.emplace_back(pref[0]);
        int pre_xor=0;
        for(int i=1;i<pref.size();i++)
        {
            pre_xor=pre_xor^ans[i-1];
            ans.emplace_back(pre_xor^pref[i]);
        }
        return ans;
    }
};