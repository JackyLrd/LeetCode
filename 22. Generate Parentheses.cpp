class Solution {
public:
    vector<string> generateParenthesis(int n) {
        dfs("", n, n);
        return ans;
    }
    void dfs(string str, int left, int right)
    {
        if (left == 0 && right == 0)
        {
            ans.push_back(str);
            return;
        }
        if (left > 0)
            dfs(str + "(", left - 1, right);
        if (left < right)
            dfs(str + ")", left, right - 1);
    }
private:
    vector<string> ans;
};
