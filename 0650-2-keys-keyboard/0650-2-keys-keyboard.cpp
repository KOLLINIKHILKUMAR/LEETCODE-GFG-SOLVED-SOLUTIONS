class Solution {
public:
    int fun(int n)
    {
        int i=n-1;
        while(i>0 && n%i!=0)
        {
            i--;
        }
        return i;
    }
    int minSteps(int n) 
    {
        int sum=0,ret=0;
        while(n>1)
        {
            ret=fun(n);
            sum=sum+(n/ret);
            n=ret;
           cout<<sum<<n<<endl;
        }
       return sum; 
    }
    
};