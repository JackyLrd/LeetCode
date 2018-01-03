class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (nums.size() > 0 && nums[0].size() > 0 && nums.size() * nums[0].size() == r * c)
        {
            vector<vector<int>> ret;
            int count = 0;
            for (size_t i = 0; i < r; ++i)
            {
                vector<int> temp;
                for (size_t j = 0; j < c; ++j)
                {
                    temp.push_back(nums[count / nums[0].size()][count % nums[0].size()]);
                    ++count;
                }
                ret.push_back(temp);
            }
            return ret;
        }
        return nums;
    }
};
