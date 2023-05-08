class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) 
    {
        int n=arr.size();
        int sum=0;
        for(int i=0,j=n-1;i!=n;i++,j--)
        {
            sum=sum+arr[i][j];
        }
        if(n%2==0)
        {
            for(int i=0,j=0;i!=n;i++,j++)
            {
                sum=sum+arr[j][i];
            } 
        }
        else
        {
            for(int i=0,j=0;i!=n;i++,j++)
            {
                if(n/2==i && n/2==j) continue;
                else sum=sum+arr[j][i];
            } 
        }
        return sum;
           
    }
};