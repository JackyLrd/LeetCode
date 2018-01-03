class Solution {
public:
    int findComplement(int num) {
        int base = 1;
        int ans = 0;
        while (num != 0)
        {
            if (num % 2 == 0)
            {
                ans += base;
            }
            base *= 2;
            num /= 2;
        }
        return ans;
    }
};
