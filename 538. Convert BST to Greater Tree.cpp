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
    TreeNode* convertBST(TreeNode* root) {
        int rightVal = 0;
        traverse(root, rightVal);
        return root;
    }
    void traverse(TreeNode* root, int &rightVal)
    {
        if (root == nullptr)
            return;
        traverse(root->right, rightVal);
        root->val += rightVal;
        rightVal = root->val;
        traverse(root->left, rightVal);
    }
};
