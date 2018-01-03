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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        int v1 = 0, v2 = 0;
        if (t1 != NULL)
            v1 = t1->val;
        if (t2 != NULL)
            v2 = t2->val;
        if (t1 == NULL && t2 == NULL)
            return NULL;
        TreeNode* anst = new TreeNode(v1 + v2);
        if (t1 == NULL && t2 != NULL)
            anst->left = mergeTrees(NULL, t2->left);
        else if (t1 != NULL && t2 == NULL)
            anst->left = mergeTrees(t1->left, NULL);
        else if (t1 != NULL && t2 != NULL)
            anst->left = mergeTrees(t1->left, t2->left);
        if (t1 == NULL && t2 != NULL)
            anst->right = mergeTrees(NULL, t2->right);
        else if (t1 != NULL && t2 == NULL)
            anst->right = mergeTrees(t1->right, NULL);
        else if (t1 != NULL && t2 != NULL)
            anst->right = mergeTrees(t1->right, t2->right);
        return anst;
    }
};
