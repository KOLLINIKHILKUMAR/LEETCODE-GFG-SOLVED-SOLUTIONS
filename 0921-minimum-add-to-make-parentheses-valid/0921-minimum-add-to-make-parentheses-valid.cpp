class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        stack<char> ss;
        for(auto i :s)
        {
            if(!ss.empty() && i==')' && ss.top()=='(')
            {
                ss.pop();
            }
            else
            {
                ss.push(i);
            }
                
        }
        return ss.size();
        
    }
};