class Solution
{
    void rec(int in, vector<int> &ds, vector<vector<int>> &ans, vector<int> &nums)
    {
        ans.push_back(ds);
        for (int i = in; i < nums.size(); i++)
        {
            if (i > in and nums[i] == nums[i - 1])
                continue;
            ds.push_back(nums[i]);
            rec(i + 1, ds, ans, nums);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> ds;
        vector<vector<int>> ans;
        rec(0, ds, ans, nums);
        return ans;
    }
};