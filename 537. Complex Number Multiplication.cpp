class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        auto v1 = process(a);
        auto v2 = process(b);
        int x = v1[0] * v2[0] - v1[1] * v2[1];
        int y = v1[0] * v2[1] + v1[1] * v2[0];
        return to_string(x) + '+' + to_string(y) + 'i';
    }
    vector<int> process(string str)
    {
        vector<int> vec;
        int pos = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '+')
            {
                vec.push_back(stoi(str.substr(pos, i - pos)));
                pos = i + 1;
            }
            else;
        }
        vec.push_back(stoi(str.substr(pos, str.size() - pos)));
        return vec;
    }
};
