class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        vector<pair<int, int>> ans;
        sort(people.begin(), people.end(), cmp);
        for (int i = 0; i < people.size(); i++)
        {
            ans.insert(ans.begin() + people[i].second, people[i]);
        }
        return ans;
    }
    static bool cmp(const pair<int, int>& a, const pair<int, int>& b)
    {
        return a.first > b.first || (a.first == b.first && a.second < b.second);
    }
};
