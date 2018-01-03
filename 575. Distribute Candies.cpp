class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(), candies.end());
        int ans = 1;
        for (auto i = candies.begin() + 1; i != candies.end(); i++)
        {
            if (*i != *(i - 1)) ans++;
        }
        if (ans > (candies.size() / 2)) return candies.size() / 2;
        return ans;
    }
};
