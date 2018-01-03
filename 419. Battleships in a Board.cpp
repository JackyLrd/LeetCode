class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int ans = 0;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[i][j] == 'X')
                {
                    if (i == 0)
                    {
                        if (j == 0)
                            ans++;
                        else
                        {
                            if (board[i][j - 1] != 'X')
                                ans++;
                        }
                    }
                    else
                    {
                        if (j == 0)
                        {
                            if (board[i - 1][j] != 'X')
                                ans++;
                        }
                        else
                        {
                            if (board[i - 1][j] != 'X' && board[i][j - 1] != 'X')
                                ans++;
                        }
                    }
                }   
            }
        }
        return ans;
    }
};
