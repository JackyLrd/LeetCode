class Solution {
public:
    string reverseWords(string s) {
        int i;
    string ans = "";
    int pos = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ');
        else
        {
        	string str = s.substr(pos, i - pos);
        	reverse(str.begin(),str.end());  
        	if (ans != "") ans += (' ' + str);
            else ans += (str);
            pos = i + 1;
        }
    }
    string str = s.substr(pos, i - pos);
    reverse(str.begin(),str.end());  
    if (ans != "") ans += (' ' + str);
    else ans += (str);
    return ans;
    }
};
