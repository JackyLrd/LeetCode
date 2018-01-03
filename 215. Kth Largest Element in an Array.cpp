class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, cmp> q;
        for (auto num : nums)
        {
            if (q.size() < k)
                q.push(num);
            else
            {
                if (q.top() < num)
                {
                    q.pop();
                    q.push(num);
                }
            }
        }
        return q.top();
    }
    struct cmp
    {
        bool operator ()(int a, int b)
        {
            return a > b;
        }
    };

};
