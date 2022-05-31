class Solution
{
    void rec(int i, int target, vector<int> &temp, vector<vector<int>> &ans, vector<int> &candidate)
    {
        if (i == candidate.size())
        {
            if (target == 0)
            {
                ans.push_back(temp);
            }
            return;
        }
        if (target - candidate[i] >= 0)
        {
            temp.push_back(candidate[i]);
            target -= candidate[i];
            rec(i + 1, target, temp, ans, candidate);
            temp.pop_back();
            target += candidate[i];
        }
        rec(i + 1, target, temp, ans, candidate);
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidate, int target)
    {
        vector<int> temp;
        vector<vector<int>> ans;
        rec(0, target, temp, ans, candidate);
        return ans;
    }
};