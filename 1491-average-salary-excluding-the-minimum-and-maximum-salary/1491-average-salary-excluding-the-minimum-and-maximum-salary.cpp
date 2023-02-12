class Solution {
public:
    double average(vector<int>& salary) 
    {
        double sum=0;
        priority_queue<int> v(salary.begin(),salary.end());
        int i=0;
        while(!v.empty())
        {
            if(i==0 || i==salary.size()-1)
            {
                i++;
                v.pop();
                continue;
            }
            sum=sum+v.top();
            v.pop();
            i++;
        }
        cout<<sum;
        double a=salary.size()-2;
        return (sum/a);
        
    }
};