class Solution
{
    vector<string> result;

public:
    void rcall(int open, int close, int n, string a)
    {
        if (a.length() == 2 * n)
        {
            result.push_back(a);
            return;
        }
        if (open < n)
        {
            rcall(open + 1, close, n, a + "(");
        }
        if (close < open)
        {
            rcall(open, close + 1, n, a + ")");
        }
    }
    vector<string> generateParenthesis(int n)
    {
        rcall(0, 0, n, "");
        return result;
    }
};