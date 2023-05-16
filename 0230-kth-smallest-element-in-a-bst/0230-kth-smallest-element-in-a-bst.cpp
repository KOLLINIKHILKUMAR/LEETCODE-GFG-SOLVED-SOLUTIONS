/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
    vector<int> v;
    void getnode(TreeNode *root, int k)
    {
        if (!root) return;
        getnode(root->left, k--);
        v.emplace_back(root->val);
        getnode(root->right, k--);
        return;
    }
    int kthSmallest(TreeNode *root, int k)
    {
        getnode(root, k);
        return v[k-1];
    }
};