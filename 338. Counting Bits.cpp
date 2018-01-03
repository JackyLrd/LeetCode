class Solution {
public:
    vector<int> countBits(int num) 
{
    vector<int> ans;
    ans.push_back(0);
    ans.push_back(1);
    ans.push_back(1);
    ans.push_back(2);
    while (ans.size() < num + 1)
    {
        int o_size = (2 * ans.size()) > (num + 1) ? num + 1 - ans.size() : ans.size();
        for (int i = 0; i < o_size; i++)
        {
            ans.push_back(ans[i] + 1);
        }
    }
    while (ans.size() > (num + 1))
    {
        ans.pop_back();
    }
    return ans;
}
};
