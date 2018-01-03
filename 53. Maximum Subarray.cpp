class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp;
        dp.push_back(nums[0]);
        int ans = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            int temp = nums[i] > nums[i] + dp[i - 1] ? nums[i] : nums[i] + dp[i - 1];
            dp.push_back(temp);
            ans = dp[i] > ans ? dp[i] : ans;
        }
        return ans;
    }
};
