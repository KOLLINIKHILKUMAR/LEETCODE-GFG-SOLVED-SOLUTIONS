class Solution
{
    public:
        int countPrimes(int n)
        {
            vector<bool> is(n, false);
            int ans = 0;
            for (int i = 2; i < n; i++)
            {
                if (is[i]) continue;
                ans++;
                for (long k = (long)i*i; k<n; k=k+i)
                    is[k] = true;
            }
            return ans;
        }
};