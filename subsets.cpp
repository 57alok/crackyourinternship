class Solution
{
    void rec(int i, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans)
    {
        if (i == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        rec(i + 1, nums, ds, ans);
        ds.pop_back();
        rec(i + 1, nums, ds, ans);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> ds;
        vector<vector<int>> ans;
        rec(0, nums, ds, ans);
        return ans;
    }
};