class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int> s;
        
        int i=0,j=0;
        
        for(i=0,j=0;i<pushed.size() && j<popped.size();)
        {
            if(pushed[i]!=popped[j] && i<pushed.size())
            {
                s.push(pushed[i]);
                i++;
            }
            else if(pushed[i]==popped[j])
            {
                s.push(pushed[i]);
                i++;
                while(!s.empty() && s.top()==popped[j])
                {
                    s.pop();
                    j++;
                }
            }
        }
        if(s.empty()) return true;
        else return false;
    }
};