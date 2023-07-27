class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int> product(nums.size(), 1);
        int temp=1;
        for(int i=1;i<nums.size();i++)
        {
            product[i]=product[i-1]*nums[i-1];
        }
        
        for(int i = product.size()-1; i >= 1 ; i--){
            temp *= nums[i];
            product[i-1] *= temp;
        }
        
        return product;
    }
};