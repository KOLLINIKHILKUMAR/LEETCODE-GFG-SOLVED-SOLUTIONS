class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        map<int,int> m;
        for(auto i : arr) 
            m[i]++;
        for(auto i : m) 
        {   
            if(i.first==0)
            {
                if(i.second>1)
                    if(m.find(i.first*2)!=m.end()) return true;
                else return false;
            }
            else
            {
                if(m.find(i.first*2)!=m.end()) return true;
            }
        }
        return false;
        
    }
};