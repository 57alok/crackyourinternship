class Solution
{
public:
    bool isPossible(long long a[], long long b[], long long n, long long k)
    {
        // Your code goes here
        bool ans = false;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] + b[i] >= k)
            {
                ans = true;
                break;
            }
        }
        return ans;
    }
};