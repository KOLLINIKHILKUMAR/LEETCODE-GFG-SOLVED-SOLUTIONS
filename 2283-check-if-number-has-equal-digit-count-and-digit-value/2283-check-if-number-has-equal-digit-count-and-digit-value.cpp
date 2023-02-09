class Solution {
public:
    bool digitCount(string num) 
    {
        map<int,int> m,n;
        map<int,int> :: iterator it;
        int i;
        
        for(auto j : num)
            n[j]++;
        
        for(i=0;i<num.size();i++)
            m[i]=n[i+48];
        
        for(i=0,it=m.begin();i<num.size();i++,it++)
        {
            if(it->second+48!=int(num[i])) return false;
            // cout<<it->second+48<<" "<<int(num[i])<<endl;
        }
        return true;
    }
};
