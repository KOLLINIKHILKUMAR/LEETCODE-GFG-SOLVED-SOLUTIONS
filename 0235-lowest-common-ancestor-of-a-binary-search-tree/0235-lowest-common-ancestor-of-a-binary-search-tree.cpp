/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool find(TreeNode* root, TreeNode* p)
    {
        if(!root) return false;
        if(root==p) return true;
        return find(root->left,p) || find(root->right,p);
    }
    TreeNode* go(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root) return NULL;
        TreeNode* get = go(root->left,p,q); 
        if(get) return get;
        get = go(root->right,p,q);
        if(get) return get;
        if(find(root,p) && find(root,q)) return root;
        return NULL;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        return go(root,p,q);
    }
};