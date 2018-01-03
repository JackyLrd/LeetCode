class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int, int> myMap;
        vector<vector<int>> temp(nums.size() + 1);
        vector<int> ans;
        for (auto num : nums)
        {
            myMap[num]++;
        }
        for (auto h : myMap)
        {
            temp[h.second].push_back(h.first);
        }
        for (auto i = temp.size() - 1; i >= 0; i--)
        {
            for (auto x : temp[i])
            {
                ans.push_back(x);
                if (ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
