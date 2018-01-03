class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        longUrls.push_back(longUrl);
        return "http://t.com/" + to_string(longUrls.size() - 1);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        auto pos = shortUrl.find_last_of('/');
        auto id = stoi(shortUrl.substr(pos + 1));
        return longUrls[id];
    }
private:
    vector<string> longUrls;
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
