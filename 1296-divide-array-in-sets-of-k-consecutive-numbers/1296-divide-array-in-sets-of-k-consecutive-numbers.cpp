class Solution {
public:
    bool isPossibleDivide(vector<int>& hand, int groupSize) 
    {
        
        if(hand.size()%groupSize!=0) return false;
        map<int,int> mp;
        for(auto i : hand) mp[i]++; 
        while(mp.size())
        {
            map<int,int> :: iterator it=mp.begin();   
            int i,t=groupSize;
            for(i=it->first,t=0;t<groupSize;i++,t++)
            {
                if(!mp[i]) return false;
                else
                {
                    mp[i]--;
                    if(mp[i]<1) mp.erase(i);
                }
            }
        }
        return true;
        
    }
};