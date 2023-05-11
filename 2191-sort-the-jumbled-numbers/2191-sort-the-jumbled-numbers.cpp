class Solution
{
    public:
        vector<int> sortJumbled(vector<int> &mapping, vector<int> &nums)
        {
            map<int, int> m;
            map<int, vector < int>> c;
            vector<int> ans;
            for (int i = 0; i <= 9; i++)
            {
                m[i] = mapping[i];
            }
            for (int i = 0; i < nums.size(); i++)
            {
                int n = nums[i], sum = 0, j = 1;
                if (n == 0) 
                {
                    c[mapping[0]].emplace_back(0);
                }
                else
                {
                    while (n > 0)
                    {
                        sum = sum + (m[n % 10]) *j;
                        n = n / 10;
                        j = j * 10;
                    }
                    c[sum].emplace_back(nums[i]);
                }
            }
            for (auto k: c)
            {
                for (int i = 0; i < k.second.size(); i++)
                {
                    ans.emplace_back(k.second[i]);
                }
            }
            return ans;
        }
};