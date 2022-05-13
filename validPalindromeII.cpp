class Solution
{
public:
    bool validPalindrome(string s)
    {
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                int j1 = j - 1, i2 = i + 1;
                while (i < j1 && s[i] == s[j1])
                {
                    i++, j1--;
                };
                while (i2 < j && s[i2] == s[j])
                {
                    i2++, j--;
                };
                return i >= j1 || i2 >= j;
            }
            i++;
            j--;
        }
        return true;
    }
};