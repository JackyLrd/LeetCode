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
    int findBottomLeftValue(TreeNode* root) {
        curHeight = 0;
        int ans = root->val;
        myFind(root, 0, curHeight, ans);
        return ans;
    }
    void myFind(TreeNode* root, int height, int& curHeight, int& ans)
    {
        height++;
        if (root->right != NULL)
            myFind(root->right, height, curHeight, ans);
        if (root != NULL && height >= curHeight)
        {
            curHeight = height;
            ans = root->val;
        }
        if (root->left != NULL)
            myFind(root->left, height, curHeight, ans);  
    }
private:
    int curHeight;
};
