class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int pr1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int pr2 = nums[0] * nums[1] * nums[n - 1];
        return pr1 > pr2 ? pr1 : pr2;
    }
};