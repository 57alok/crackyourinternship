class Solution
{
public:
    bool isHappy(int n)
    {
        int sum = 0, i;
        set<int> myset;
        while (1)
        {
            sum = 0;
            while (n)
            {
                i = n % 10;
                sum += i * i;
                n /= 10;
            }
            if (sum == 1)
            {
                return true;
            }
            else if (myset.find(sum) != myset.end())
            {
                return false;
            }
            myset.insert(sum);
            n = sum;
        }
        return false;
    }
};