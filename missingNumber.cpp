class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums[0] != 0)
        {
            return 0;
        }
        int n = nums.size();
        int ans = nums[n - 1] + 1;
        for (int i = 1, j = 0; i < n; i++, j++)
        {

            if (nums[i] != nums[j] + 1)
            {
                return nums[j] + 1;
            }
        }
        return ans;
    }
};