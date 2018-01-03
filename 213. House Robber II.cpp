class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        else if (nums.size() == 1)
            return nums[0];
        else
            return max(myRob(nums, 0, nums.size() - 1), myRob(nums, 1, nums.size()));
    }
    int myRob(vector<int>& nums, int l, int r)
    {
        int prev = 0;
        int pprev = 0;
        for (size_t i = l; i < r; ++i)
        {
            int temp = prev;
            prev = max(nums[i] + pprev, prev);
            pprev = temp;
        }
        return prev;
    }
};
