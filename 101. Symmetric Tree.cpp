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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;
        if (root->left == nullptr && root->right == nullptr)
            return true;
        else if (root->left != nullptr && root->right != nullptr)
            return traverse(root->left, root->right);
        else return false;
    }
    bool traverse(TreeNode* ltree, TreeNode* rtree)
    {
        if (ltree->val == rtree->val)
        {
            bool l = false;
            bool r = false;
            if (ltree->left != nullptr && rtree->right != nullptr)
            {
                l = traverse(ltree->left, rtree->right);
            }
            else if (ltree->left == nullptr && rtree->right == nullptr)
            {
                l = true;
            }
            
            if (ltree->right != nullptr && rtree->left != nullptr)
            {
                r = traverse(ltree->right, rtree->left);
            }
            else if (ltree->right == nullptr && rtree->left == nullptr)
            {
                r = true;
            }
            
            if (l == true && r == true)
                return true;
            return false;
        }
        else return false;
    }
};
