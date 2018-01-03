class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> heap;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (heap.size() < k)
                    heap.push(matrix[i][j]);
                else
                {
                    if (matrix[i][j] > heap.top())
                        break;
                    else
                    {
                        heap.pop();
                        heap.push(matrix[i][j]);
                    }
                }
            }
        }
        return heap.top();
    }
};
