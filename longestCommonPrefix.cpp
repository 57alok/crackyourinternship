class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string common = "";
        int min = strs[0].size();
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i].size() < min)
            {
                min = strs[i].size();
            }
        }
        for (int j = 0; j < min; j++)
        {
            for (int k = 1; k < strs.size(); k++)
            {
                if (strs[k - 1][j] != strs[k][j])
                {
                    return common;
                }
            }
            common.push_back(strs[0][j]);
        }

        return common;
    }
};