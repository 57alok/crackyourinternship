class Solution
{
    void rec(vector<int> &ds, vector<vector<int>> &ans, int n, int k, int size, int no)
    {
        if (size == k)
        {
            ans.push_back(ds);
            return;
        }
        else if (no > n)
        {
            return;
        }

        ds.push_back(no);
        rec(ds, ans, n, k, size + 1, no + 1);
        ds.pop_back();
        size -= 1;
        rec(ds, ans, n, k, size + 1, no + 1);
    }

public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> ds;
        vector<vector<int>> ans;
        rec(ds, ans, n, k, 0, 1);
        return ans;
    }
};