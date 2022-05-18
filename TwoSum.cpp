class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> maps;
        for (int i = 0; i < nums.size(); i++)
        {
            maps.insert({nums[i], i});
        }

        int i, j;
        for (i = 0; i < nums.size(); i++)
        {
            int x = target - nums[i];
            auto itr = maps.find(x);
            if (itr != maps.end() and itr->second != i)
            {
                j = itr->second;
                break;
            }
        }
        return {i, j};
    }
};