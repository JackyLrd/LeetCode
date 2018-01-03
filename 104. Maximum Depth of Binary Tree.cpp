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
    int maxDepth(TreeNode* root) {
        return mySearch(root, 0);
    }
    int mySearch(TreeNode* root, int depth)
    {
        if (root == NULL)
            return depth;
        else
            depth++;
        int max = depth;
        int x = mySearch(root->left, depth);
        max = max > x ? max : x;
        x = mySearch(root->right, depth);
        max = max > x ? max : x;
        return max;
    }
};
