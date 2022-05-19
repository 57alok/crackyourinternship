class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int i = 0, j = 0;
        stack<char> st1, st2;
        while (i < s.length() or j < t.length())
        {

            if (i < s.length() and s[i] == '#' and !st1.empty())
            {
                st1.pop();
            }
            else if (i < s.length() and s[i] != '#')
            {
                st1.push(s[i]);
            }

            if (j < t.length() and t[j] == '#' and !st2.empty())
            {
                st2.pop();
            }
            else if (j < t.length() and t[j] != '#')
            {
                st2.push(t[j]);
            }
            i++;
            j++;
        }
        while (!st1.empty() and !st2.empty())
        {
            if (st1.top() != st2.top())
            {
                return false;
            }
            st1.pop();
            st2.pop();
        }

        return st1.empty() == true and st2.empty() == true ? true : false;
    }
};