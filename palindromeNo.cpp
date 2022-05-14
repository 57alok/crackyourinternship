class Solution
{
public:
    bool isPalindrome(int x)
    {
        int tempx = x;
        int rem = 0;
        long long int sum = 0;
        while (tempx > 0)
        {
            rem = tempx % 10;
            sum = (10 * sum) + rem;
            tempx /= 10;
        }
        return sum == x ? true : false;
    }
};