class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        if (prices.size() == 0)
            return ans;
        int min = prices[0];
        for (auto i : prices)
        {
            if (i < min)
            {
                min = i;
            }
            if (i - min > ans)
                ans = i - min;
        }
        return ans;
    }
};
