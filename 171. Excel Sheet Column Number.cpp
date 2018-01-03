class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        int base = 1;
        auto str = s.c_str();
        for (int i = s.size() - 1; i >= 0; i--)
        {
            ans += (str[i] - 64) * base;
            base *= 26;
        }
        return ans;
    }
};
