class Solution {
public:
    
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for (string i : words)
        {
            if (judge(i)) ans.push_back(i);
        }
        return ans;
    }
    int h(char str)
    {
        if (str == 'q' || str == 'w' || str == 'e' || str == 'r' || str == 't' || str == 'y' || str == 'u' || str == 'i' || str == 'o' || str == 'p') return 1;
        else if (str == 'a' || str == 's' || str == 'd' || str == 'f' || str == 'g' || str == 'h' || str == 'j' || str == 'k' || str == 'l') return 2;
        else return 3;
    }

    bool judge(string str)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str << endl;
        int f = h(str[0]);
        for (int i = 0; i < str.size(); i++)
        {
            if (f != h(str[i])) return false;
        }
        return true;
    }
};
