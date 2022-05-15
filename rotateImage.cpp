class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int m;
        m = matrix.size();
        for (int i = 0; i < m; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int k = 0; k < m; k++)
        {
            for (int j = 0; j < m / 2; j++)
            {

                swap(matrix[k][j], matrix[k][m - j - 1]);
                // reverse(matrix[k].begin(),matrix[k].end());
            }
        }
    }
};