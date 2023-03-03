class Solution {
public:
    string makeGood(string s) 
    {
        string ans="";
        for(auto i : s)
        {
            if((ans.size() && (int)ans.back()==((int)i+32)) || (ans.size() && (int)ans.back()+32==((int)i)))
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(i);
            }
            
        }
        return ans; 
    }
};