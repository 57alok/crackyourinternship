class Solution
{
public:
    int maxPoints(vector<vector<int>> &points)
    {
        int n = points.size();
        if (n == 1)
        {
            return 1;
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            double slope = 1.0;
            map<double, int> mp;
            for (int j = i + 1; j < n; j++)
            {
                int x1 = points[i][0];
                int y1 = points[i][1];
                int x2 = points[j][0];
                int y2 = points[j][1];
                int dy = y2 - y1, dx = x2 - x1;
                if (dy == 0 and dx == 0)
                {
                    continue;
                }
                else if (dx != 0)
                {
                    slope = dy * 1.0 / dx;
                }
                else
                {
                    slope = INT_MAX;
                }
                mp[slope]++;
            }

            for (auto num : mp)
            {
                res = max(res, num.second + 1);
            }
        }
        return res;
    }
};