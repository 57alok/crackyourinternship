class Solution
{
public:
    int kthFactor(int n, int k)
    {

        int ans = -1, count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                ++count;
            }
            if (count == k)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};