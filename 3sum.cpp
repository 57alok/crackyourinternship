class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums.size() < 3 || nums[0] > 0)
        {

            return {};
        }

        vector<vector<int>> ans;
        unordered_map<int, int> temp;

        for (int i = 0; i < nums.size(); i++)
        {
            temp[nums[i]] = i;
        }
        for (int j = 0; j < nums.size() - 2; j++)
        {

            if (nums[j] > 0)
                break;
            for (int k = j + 1; k < nums.size() - 1; k++)
            {

                if (temp.count(-(nums[j] + nums[k])) && temp.find(-(nums[j] + nums[k]))->second > k)
                {
                    ans.push_back({nums[j], nums[k], -(nums[j] + nums[k])});
                }
                k = temp.find(nums[k])->second;
            }
            j = temp.find(nums[j])->second;
        }
        return ans;
    }
};