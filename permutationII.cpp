class Solution
{
    void rec(int in, vector<int> &nums, vector<vector<int>> &ans)
    {
        if (in == nums.size())
        {
            if (!count(ans.begin(), ans.end(), nums))
            {
                ans.push_back(nums);
            }
            return;
        }
        for (int i = in; i < nums.size(); i++)
        {
            if (i > in and nums[i] == nums[i - 1])
                continue;
            swap(nums[in], nums[i]);
            rec(in + 1, nums, ans);
            swap(nums[in], nums[i]);
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        rec(0, nums, ans);
        return ans;
    }
};