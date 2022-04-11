class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n * 2, 1, 0, "(", result);
        return result;
    }
    void generate(int n, int opened, int closed, std::string&& str, vector<string>& result)
    {
        if(opened + closed == n)
        {
            result.push_back(std::move(str));
			return;
        }
        if(n/2 > opened)
        {
            generate(n, opened + 1, closed, str + "(", result);
        }
        if(opened > closed)
        {
            generate(n, opened, closed + 1, str + ")", result);
        }
    }
};