#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        while((x !=0) || (y != 0))
        {
            if (x % 2 != y % 2)
            {
               ans += 1;  
            }
            x /= 2;
            y /= 2;
        }
        return ans;
    }
};
