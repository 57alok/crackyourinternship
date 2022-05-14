class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                ++count;
            }
        }
        for (int i = 0; i < count; i++)
        {
            for (int j = 1, k = 0; j < n; j++, k++)
            {
                if (nums[k] == 0)
                {
                    swap(nums[k], nums[j]);
                }
            }
        }
    }
};