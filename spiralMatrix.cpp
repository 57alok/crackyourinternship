class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans(m * n);
        int top = 0, left = 0, right = n - 1, bottom = m - 1, dir = 0, k = 0;
        while (top <= bottom and left <= right)
        {
            if (dir == 0)
            {
                for (int i = left; i <= right; i++)
                {
                    ans[k++] = matrix[top][i];
                }
                top++;
                dir++;
            }
            else if (dir == 1)
            {
                for (int i = top; i <= bottom; i++)
                {
                    ans[k++] = matrix[i][right];
                }
                right--;
                dir++;
            }
            else if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                {
                    ans[k++] = matrix[bottom][i];
                }
                bottom--;
                dir++;
            }
            else if (dir == 3)
            {
                for (int i = bottom; i >= top; i--)
                {
                    ans[k++] = matrix[i][left];
                }
                dir = 0;
                left++;
            }
        }
        return ans;
    }
};