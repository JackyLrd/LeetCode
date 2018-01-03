class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        for (size_t i = 0; i < grid.size(); ++i)
        {
            for (size_t j = 0; j < grid[i].size(); ++j)
            {
                if (grid[i][j] == 1)
                {
                    ans += 4;
                    if (i + 1 >= 0 && i + 1 < grid.size() && j >= 0 && j < grid[i].size() && grid[i + 1][j] == 1)
                    {
                        ans -= 1;
                    }
                    if (i >= 0 && i < grid.size() && j + 1 >= 0 && j + 1 < grid[i].size() && grid[i][j + 1] == 1)
                    {
                        ans -= 1;
                    }
                    if (i - 1 >= 0 && i - 1 < grid.size() && j >= 0 && j < grid[i].size() && grid[i - 1][j] == 1)
                    {
                        ans -= 1;
                    }
                    if (i >= 0 && i < grid.size() && j - 1 >= 0 && j - 1 < grid[i].size() && grid[i][j - 1] == 1)
                    {
                        ans -= 1;
                    }
                }
            }
        }
        return ans;
    }
};
