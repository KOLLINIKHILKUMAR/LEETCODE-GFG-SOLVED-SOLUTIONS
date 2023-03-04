class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
        vector<int> ans;
        stack<int> ss;
        for (int i = 0; i <= s.size(); i++)
        {
            ss.push(i);
            if (i ==s.size() || s[i] == 'I')
            {
                while (!ss.empty())
                {
                    ans.emplace_back(ss.top());
                    ss.pop();
                }
            }
        }
        
        return ans;
        
    }
};