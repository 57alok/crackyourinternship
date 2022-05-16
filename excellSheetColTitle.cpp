class Solution
{
public:
    string convertToTitle(int n)
    {

        string sum = "";

        while (n > 0)
        {
            n--;
            sum = (char)((n % 26) + 'A') + sum;
            n = n / 26;
        }
        return sum;

        string ans;
    }
};