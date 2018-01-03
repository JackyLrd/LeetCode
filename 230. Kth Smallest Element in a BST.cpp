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
    int kthSmallest(TreeNode* root, int k) {
        num = 0;
        traverse(root, k);
        return ans;
    }
    void traverse(TreeNode* root, int k)
    {
        if (root->left != NULL)
            traverse(root->left, k);
        num++;
        if (num == k)
        {
            ans = root->val;
            return;
        }
        if (root->right != NULL)
            traverse(root->right, k);
    }
private:
    int num;
    int ans;
};
