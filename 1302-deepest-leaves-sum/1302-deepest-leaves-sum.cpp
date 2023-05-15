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
public:
    int dep=0,sum=0;
    void solve(TreeNode* root,int nh)
    {
        if(!root) return;
        if(nh==dep-1)
            sum=sum+root->val;
        solve(root->left,nh+1);
        solve(root->right,nh+1);
        
    }
    int depth(TreeNode* root)
    {
        if(!root) return 0;
        int lh = depth(root->left);
        int rh = depth(root->right);
        return max(lh,rh)+1;
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        dep=depth(root);
        solve(root,0);
        return sum;
    }
};