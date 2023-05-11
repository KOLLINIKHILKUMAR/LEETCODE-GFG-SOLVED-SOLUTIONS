class Solution {
public:
    bool stoneGame(vector<int>& piles) 
    {
        int a=0,b=0;
        for(int i=0,j=piles.size()-1;i<j;i,j)
        {
            if(piles[i]>piles[j])
            {
                a=a+piles[i];
                i++;
                b=b+piles[j];
                j--;
            }
            else
            {
                a=a+piles[j];
                j--;
                b=b+piles[i];
                i++;
            }
        }
        if(a>b) return true;
        return false;
        
    }
};