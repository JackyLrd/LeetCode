class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> hash;
        for (auto i : nums)
        {
            if (hash[i] >= 1)
                return true;
            hash[i]++;
        }
        return false;
    }
};
