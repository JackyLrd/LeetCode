class Solution {
	
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int sum = 0;
        for (auto &op : ops)
        {
            if (op == "C")
            {
                st.pop();
            }
            else if (op == "+")
            {
                int temp = st.top();
                st.pop();
                int s = temp + st.top();
                st.push(temp);
                st.push(s);
            }
            else if (op == "D")
            {
                st.push(2 * st.top());
            }
            else
            {
                st.push(atoi(op.c_str()));
            }
        }
        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
