class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> reachable(s.size() + 20, false);
        for (string word : wordDict)
            if (word == s.substr(0, word.size()))
                reachable[word.size() - 1] = true;
        for (int i = 0; i < s.size(); i++)
            if (reachable[i] == true)
                for (string word : wordDict)
                    if (word == s.substr(i + 1, word.size()))
                        reachable[i + word.size()] = true;
        return reachable[s.size() - 1];
    }
};