class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        vector<int> arr(k, 0);
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            int index = sum % k;
            if (index < 0)
            {
                index += k;
            }
            arr[index]++;
        }
        int ans = arr[0];
        for (int i : arr)
        {
            ans += (i * (i - 1)) / 2;
        }
        return ans;
    }
};