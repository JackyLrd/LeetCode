class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while (1)
        {
            n = getNums(n);
            if (n == 1)
                return true;
            else
            {
                if (s.count(n) == 0)
                    s.insert(n);
                else
                    return false;
            }
        }
    }
    int getNums(int n)
    {
        int ret = 0;
        while (n != 0)
        {
//        	cout << n << endl;
            ret += (n % 10) * (n % 10);
            n /= 10;
        }
//        cout << "ret: " << ret << endl;
        return ret;
    }
};
