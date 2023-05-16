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
    long long int prev=LLONG_MIN;
    bool f=1;
    void inorder(TreeNode* root)
    {
        if(!root) return;
        inorder(root->left);
        if(prev==LLONG_MIN)
        {
            prev=root->val;
        }
        else
        {
            if(root->val<=prev)
            {
                f=0;
            }
            else
            {
                prev=root->val;
            }
        }
        inorder(root->right);
        return;
    }
    bool isValidBST(TreeNode* root) 
    {
        inorder(root);
        return f;
    }
};