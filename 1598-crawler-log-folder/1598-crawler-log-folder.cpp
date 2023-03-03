class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        stack<string> s;
        for(auto i : logs)
        {
            if(s.empty() && i=="../")
            {
                continue;
            }
            else if(i=="../") s.pop();
            else if(i=="./") continue;
            else 
            {
                s.push(i);
            }
        }
        return s.size();
    }
};