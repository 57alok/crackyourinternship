class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans;
        for (int i = 0, j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                ans = nums[i];
                break;
            }
            i++;
        }
        return ans;
    }
};