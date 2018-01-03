class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        mat = M;
        vector<bool> temp(M.size(), false);
        visited = temp;
        int ans = 0;
        for (int i = 0; i < visited.size(); i++)
        {
            ans += dfs(i) > 0;
        }
        return ans;
    }
    int dfs(int i)
    {
        if (visited[i])
            return 0;
        int count = 1;
        visited[i] = true;
        for (int j = 0; j < visited.size(); j++)
        {
            if (mat[i][j] && i != j)
            {
                count += dfs(j);
            }
        }
        return count;
    }
private:
    vector<vector<int>> mat;
    vector<bool> visited;
};
