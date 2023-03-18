class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) 
    {
        vector<int>ans;
        
        priority_queue<int, vector<int>, greater<int> > pq;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > p;
        
        for(int i=0;i<nums.size();i++)
        {
                p.push(make_pair(abs(nums[i]-x),nums[i]));
        }
        
        int a=0;
        while(a<k)
        {
            pq.push(p.top().second);
            p.pop();
            a++;
        }
        
        while(!pq.empty())
        {
            ans.emplace_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }
};