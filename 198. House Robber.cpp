class Solution {
public:
    int rob(vector<int>& nums) {
        int ans = 0;
        if (nums.size() <= 3 && nums.size() > 0)
        {
            if (nums.size() == 1)
                ans = nums[0];
            else if (nums.size() == 2)
                ans = nums[0] > nums[1] ? nums[0] : nums[1];
            else
                ans = nums[0] + nums[2] > nums[1] ? nums[0] + nums[2] : nums[1];
        }
        else if (nums.size() > 3)
        {
            vector<int> dp;
            for (auto i = 0; i < 2; i++)
            {
                dp.push_back(nums[i]);
            }
            dp.push_back(nums[2] + dp[0]);
            ans = dp[2] > dp[1] ? dp[2] : dp[1];
            for (int i = 3; i < nums.size(); i++)
            {
                if (nums[i] + dp[i - 2] > nums[i] + dp[i - 3])
                {
                    dp.push_back(nums[i] + dp[i - 2]);
                }
                else dp.push_back(nums[i] + dp[i - 3]);
                if (ans < dp[i])
                    ans = dp[i];
            }
        }
        return ans;
    }
};
