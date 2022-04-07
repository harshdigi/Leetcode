class Solution {
public:
    bool wordPattern(string pattern, string s) {
        std::unordered_map<char, std::string> patternToString;
        std::unordered_map<std::string, std::set<char>> stringToPattern;
        
        s += ' ';
        std::string temp;
        int is = 0;
        int ip = 0;
        while (is < s.length())
        {
            if (s[is] == ' ')
            {
                patternToString[pattern[ip]] = temp;
                stringToPattern[temp].insert(pattern[ip]);
                temp = "";
                ip++;
            }
            else
            {
                temp += s[is];
            }
            
            is++;
        }
        
        for (const char& c : pattern)
        {
            temp += patternToString[c];
            temp += ' ';
        }
        
        for (const std::pair<std::string, std::set<char>>& p : stringToPattern)
        {
            if (p.second.size() > 1)
                return false;
        }
        
        return temp == s;   
    }
};