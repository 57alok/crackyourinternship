class Solution
{
public:
    string intToRoman(int num)
    {
        string ans = "";
        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string valR[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        while (num)
        {
            for (int i = 0; i < 13; i++)
            {
                if (num >= val[i])
                {
                    ans += valR[i];
                    num -= val[i];
                    break;
                }
            }
        }
        return ans;
    }
};