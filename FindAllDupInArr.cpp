class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int count = 0, n = nums.size();
        int prev = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1] and nums[i] != prev)
            {
                prev = nums[i];
                nums[count] = nums[i];
                ++count;
            }
        }
        for (int i = 0; i < n - count; i++)
        {
            nums.pop_back();
        }
        return nums;
    }
};