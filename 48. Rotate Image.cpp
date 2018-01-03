class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - i; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[size - 1 - j][size - 1 - i];
                matrix[size - 1 - j][size - 1 - i] = temp;
            }
        }
        for (int i = 0; i < size / 2; i++)
        {
            for (int j = 0; j < size; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[size - 1 - i][j];
                matrix[size - 1 - i][j] = temp;
            }
        }
    }
};
