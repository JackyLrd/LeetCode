class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        auto used = new bool[nums.size()];
        memset(used, false, nums.size());
        vector<int> arr;
        myFunc(nums, used, arr);
        return ans;
    }
    
    void myFunc(vector<int>& nums, bool* used, vector<int> arr)
    {
        if (arr.size() == nums.size())
        {
            ans.push_back(arr);
            return;
        }
        for (auto i = 0; i < nums.size(); i++)
        {
            if (!used[i])
            {
                used[i] = true;
                arr.push_back(nums[i]);
                myFunc(nums, used, arr);
                arr.erase(arr.end() - 1);
                used[i] = false;
            }
        }
    }
private:
    vector<vector<int>> ans;
};
