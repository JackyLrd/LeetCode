class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        map<int, int> hash;
        int ans = 0;
        for (auto i : A)
        {
            for (auto j : B)
            {
                hash[i + j]++;
            }
        }
        for (auto i : C)
        {
            for (auto j : D)
            {
                if (hash.count(-(i + j)) != 0)
                {
                    ans += hash[-(i + j)];
                }
            }
        }
        return ans;
    }
};
