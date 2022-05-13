class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int sum = 0, min = nums[0], n = nums.size();
        for (int i : nums)
        {
            sum += i;
            if (i < min)
            {
                min = i;
            }
        }
        cout << sum << " " << min << " " << n;
        return sum - (min * n);
    }
};