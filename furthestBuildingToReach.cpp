class Solution
{
public:
    int furthestBuilding(vector<int> &heights, int bricks, int ladders)
    {
        int i = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (i; i < heights.size() - 1; i++)
        {
            int x = heights[i + 1] - heights[i];
            if (x <= 0)
            {
                continue;
            }
            pq.push(x);
            if (pq.size() > ladders)
            {
                bricks -= pq.top();
                pq.pop();
                if (bricks < 0)
                    break;
            }
        }
        return i;
    }
};