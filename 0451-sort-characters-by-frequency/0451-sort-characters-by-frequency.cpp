class Solution
{
    public:
        string frequencySort(string s)
        {
            
            string ans = "";
            unordered_map<char,int> m;
            priority_queue<pair<int,char>,vector<pair<int,char>> > pq;
            for(auto i: s)
            {
                m[i]++;
            }
            for(auto i : m)
            {
                pq.push({i.second,i.first});
            }
            while(!pq.empty())
            {                
                auto it=pq.top();
                pq.pop();
                int cnt=it.first;
                while(cnt--) ans+=it.second;
            }
            return ans;
        }
};