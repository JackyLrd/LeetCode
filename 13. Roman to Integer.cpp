class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int temp = 0;
        int base = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'I')
            {
                if (base > 1)
                {
                    temp = 0;
                }
                else if (base < 1)
                {
                    ans -= 2 * temp;
                    temp = 0;
                }
                else;
                ans += 1;
                temp += 1;
                base = 1;
            }
            else if (s[i] == 'V')
            {
                if (base > 5)
                {
                    temp = 0;
                }
                else if (base < 5)
                {
                    ans -= 2 * temp;
                    temp = 0;
                }
                else;
                ans += 5;
                temp += 5;
                base = 5;
            }
            else if (s[i] == 'X')
            {
                if (base > 10)
                {
                    temp = 0;
                }
                else if (base < 10)
                {
                    ans -= 2 * temp;
                    temp = 0;
                }
                else;
                ans += 10;
                temp += 10;
                base = 10;
            }
            else if (s[i] == 'L')
            {
                if (base > 50)
                {
                    temp = 0;
                }
                else if (base < 50)
                {
                    ans -= 2 * temp;
                    temp = 0;
                }
                else;
                ans += 50;
                temp += 50;
                base = 50;
            }
            else if (s[i] == 'C')
            {
                if (base > 100)
                {
                    temp = 0;
                }
                else if (base < 100)
                {
                    ans -= 2 * temp;
                    temp = 0;
                }
                else;
                ans += 100;
                temp += 100;
                base = 100;
            }
            else if (s[i] == 'D')
            {
                if (base > 500)
                {
                    temp = 0;
                }
                else if (base < 500)
                {
                    ans -= 2 * temp;
                    temp = 0;
                }
                else;
                ans += 500;
                temp += 500;
                base = 500;
            }
            else if (s[i] == 'M')
            {
                if (base > 1000)
                {
                    temp = 0;
                }
                else if (base < 1000)
                {
                    ans -= 2 * temp;
                    temp = 0;
                }
                else;
                ans += 1000;
                temp += 1000;
                base = 1000;
            }
            else;
        }
        return ans;
    }
};