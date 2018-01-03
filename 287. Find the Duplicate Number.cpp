class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = 0, slow = 0;
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        int ans = 0;
        while (ans != slow)
        {
            slow = nums[slow];
            ans = nums[ans];
        }
        return ans;
    }
};
