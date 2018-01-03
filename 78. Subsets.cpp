class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> arr;
        for (int i = 0; i <= nums.size(); i++)
        {
            myFunc(i, arr, nums, 0);
        }
        return ans;
    }
    void myFunc(int length, vector<int> arr, vector<int>& nums, int pos)
    {
        if (length == 0)
        {
            ans.push_back(arr);
            return;
        }
        for (int i = pos; i < nums.size(); i++)
        {
            arr.push_back(nums[i]);
            myFunc(length - 1, arr, nums, i + 1);
            arr.pop_back();
        }
    }
private:
    vector<vector<int>> ans;
};
