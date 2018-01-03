class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int temp = 0;
        for (auto i = 0; i <= nums.size(); i++)
        {
            ans += i;
            if (i != nums.size())
                temp += nums[i];
        }
        return ans - temp;
    }
};
