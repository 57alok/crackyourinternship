
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min = INT_MAX, diff, sell = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min)
            {
                min = prices[i];
            }
            diff = prices[i] - min;
            sell = max(sell, diff);
        }
        return sell > 0 ? sell : 0;
    }
};
