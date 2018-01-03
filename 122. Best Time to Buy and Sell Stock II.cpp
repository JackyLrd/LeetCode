class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int length = prices.size() - 1;
        for (int i = 0; i < length; i++)
        {
            if (prices[i + 1] > prices[i])
            {
                ans += prices[i + 1] - prices[i];
            }
        }
        return ans;
    }
};
