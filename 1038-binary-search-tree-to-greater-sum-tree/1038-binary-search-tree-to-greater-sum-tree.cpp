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
    void getsum(TreeNode* root,int &sum)
    {
        if(!root) return;
        getsum(root->left,sum);
        sum=sum+root->val;
        getsum(root->right,sum);
        return; 
    }
    void getroots(TreeNode* root,int & sum,int & minus)
    {
        if(!root) return;
        
        getroots(root->left,sum,minus);
        int temp=root->val;
        root->val=sum-minus;
        minus=minus+temp;
        getroots(root->right,sum,minus);
        return; 
    }
    TreeNode* bstToGst(TreeNode* root) 
    {
        int sum=0,minus=0;
        getsum(root,sum);
        getroots(root,sum,minus);
        return root;
    }
};