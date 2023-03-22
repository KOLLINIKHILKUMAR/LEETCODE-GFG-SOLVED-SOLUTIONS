/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
        int sum=0;
public:

    void solve(TreeNode* root) 
    {
        if(root == NULL) return;
        
        sumOfLeftLeaves(root->left);
        
        if(root->left && !root->left->left && !root->left->right) 
        {
            cout<<root->val<<" ";
            sum=sum+root->left->val;
            
        }
        sumOfLeftLeaves(root->right);
    
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if(root == NULL) return 0;
        solve(root);
        return sum;
    }
};