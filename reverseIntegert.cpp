class Solution
{
public:
    int reverse(int x)
    {
        int tempx = x;
        int rem = 0;
        long long int sum = 0;
        while (tempx)
        {
            if (sum > INT_MAX / 10 || sum < INT_MIN / 10)
            {
                return 0;
            }
            rem = tempx % 10;
            sum = (10 * sum) + rem;

            tempx /= 10;
        }
        return sum;
    }
};