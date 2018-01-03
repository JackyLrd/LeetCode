class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> hash;
        for (auto i : nums)
        {
            hash[i]++;
        }
        int length = nums.size() % 2 == 0 ? nums.size() / 2 : (nums.size() + 1) / 2;
        for (auto i : hash)
        {
            if (i.second >= length)
            {
            	cout << i.first << " " << i.second << endl;
                return i.first;
            }
        }
    }
};
