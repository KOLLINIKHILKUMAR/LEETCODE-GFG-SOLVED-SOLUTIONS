class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string> s;
        int k=1;
        for(auto i=0;i<target.size();i++)
        {
            if(k==target[i])
            {   
                s.emplace_back("Push");
                
                k++;
            }
            else
            {
                while(k<target[i])
                {
                    s.emplace_back("Push");
                    s.emplace_back("Pop");
                    k++;
                }
                s.emplace_back("Push");
                k++;
            }
        }
        return s;
        
    }
};