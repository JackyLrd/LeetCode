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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return myConstructor(nums, 0, nums.size() - 1);
    }
    TreeNode* myConstructor(vector<int>& nums, int begin, int end)
    {
        int max = nums[begin];
        int index = begin;
        for (int i = begin; i <= end; i++)
        {
            if (max <= nums[i])
            {
                max = nums[i];
                index = i;
            }
        }
        auto anst = new TreeNode(max);
        if (index > begin && begin < end)
            anst->left = myConstructor(nums, begin, index - 1);
        if (index < end && begin < end)
            anst->right = myConstructor(nums, index + 1, end);
        return anst;
    }
};
