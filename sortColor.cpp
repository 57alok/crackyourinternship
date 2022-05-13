class Solution
{
public:
    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    void sortColors(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int flag = 0;
            for (int j = 0; j < nums.size() - 1 - i; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(&nums[j], &nums[j + 1]);
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
    }
};