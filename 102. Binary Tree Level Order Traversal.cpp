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
    vector<vector<int>> levelOrder(TreeNode* root) {
        traverse(root, 0);
        return ans;
    }
    void traverse(TreeNode* root, int level)
    {
        if (root == nullptr)
            return;
        else
        {
            if (ans.size() <= level)
            {
                vector<int> newLevel;
                ans.push_back(newLevel);
            }
            ans[level].push_back(root->val);
            traverse(root->left, level + 1);
            traverse(root->right, level + 1);
        }
    }
private:
    vector<vector<int>> ans;
    int lv;
};
