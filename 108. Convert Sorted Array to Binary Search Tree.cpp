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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        auto ans = traverse(nums);
        return ans;
    }
    TreeNode* traverse(vector<int>& nums)
    {
        if (nums.size() == 0)
            return NULL;
        vector<int> numL;
        vector<int> numR;
        int mid = nums.size() / 2;
        auto root = new TreeNode(nums[mid]);
        for (int i = 0; i < mid; i++)
        {
            numL.push_back(nums[i]);
        }
        if (mid != 0)
        {
            for (int i = mid + 1; i < nums.size(); i++)
            {
                numR.push_back(nums[i]);
            }
        }
        root->left = traverse(numL);
        root->right = traverse(numR);
        return root;
    }
};
