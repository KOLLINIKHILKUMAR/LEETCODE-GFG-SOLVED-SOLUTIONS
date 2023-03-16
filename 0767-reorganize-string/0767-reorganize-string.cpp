class Solution {
public:
    string reorganizeString(string s) 
    {
        typedef pair<int, char> P;
        priority_queue<P> pq;
        
        map<char,int> m;
        
        string give="";
        
        int n=s.size();
        
        vector<char> ans(n,'a');
        
        for(auto i : s)
            m[i]++;
        
        for(auto i : m)
            pq.push(make_pair(i.second,i.first));
        
        int temp=pq.top().first;
        
        for(int i=0;i<n;i=i+2)
        {   
            if(temp==0)
            {
                pq.pop();
                temp=pq.top().first;
            }
            ans[i]=pq.top().second;
            temp--;
        }
        
        for(int i=1;i<n;i=i+2)
        {
            if(temp==0)
            {
                pq.pop();
                temp=pq.top().first;
            }
            if(ans[i-1]!=pq.top().second)
            {
                ans[i]=pq.top().second;
                temp--;
            }
            else
            {
                return "";
            }
        }
        for(auto i : ans)
        {
            give=give+i;
        }
        return give;
        
    }
};