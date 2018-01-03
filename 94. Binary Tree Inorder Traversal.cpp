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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        while (root != NULL || st.empty() == false)
        {
            if (root != NULL)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                ans.push_back(st.top()->val);
                root = st.top()->right;
                st.pop();
            }
        }
        return ans;
    }
};