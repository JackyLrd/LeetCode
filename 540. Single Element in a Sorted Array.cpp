class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        while (r != l)
        {
            int mid = (l + r) / 2;
            if (nums[mid] != nums[mid - 1])
            {
                mid = mid - 1;
            }
            if ((mid + 1) % 2 == 0)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        return nums[l];
    }
};
