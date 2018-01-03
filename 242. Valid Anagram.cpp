class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        else
        {
            map<char, int> hash1, hash2;
            for (int i = 0; i < s.size(); i++)
            {
                hash1[s[i]]++;
                hash2[t[i]]++;
            }
            for (auto i : hash1)
            {
                if (i.second != hash2[i.first])
                    return false;
            }
            return true;
        }
    }
};
