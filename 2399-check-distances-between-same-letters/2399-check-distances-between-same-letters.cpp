class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
       map<char,int> m;
        
       for(int i=0;i<s.size();i++)
       {
           if(!m[s[i]])  
           {
               m[s[i]]=i;
           }
           else
           {
             m[s[i]]=i-m[s[i]];
           }
       }
        for (auto i = m.begin(); i != m.end(); i++)
        {
            int n=i->first-97;
            if(distance[n]!=i->second-1)
                return 0;
        }
        return 1;
    }
};