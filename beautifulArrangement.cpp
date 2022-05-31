class Solution
{
    void rec(vector<int> &mp, vector<int> &ds, int &ans, int n, int ind)
    {
        if (ds.size() == n)
        {
            ans++;
            return;
        }

        for (int i = 1; i <= n; i++)
        {
            if (mp[i] != 0)
                continue;
            if (i % ind == 0 or ind % i == 0)
            {
                ds.push_back(i);
                mp[i] = 1;
                rec(mp, ds, ans, n, ind + 1);
                ds.pop_back();
                mp[i] = 0;
            }
        }
    }

public:
    int countArrangement(int n)
    {
        vector<int> mp(n + 1, 0), ds;
        int ans = 0;
        rec(mp, ds, ans, n, 1);
        return ans;
    }
};