class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0;
        int j = height.size() - 1;
        int maxarea = 0;
        while (i < j)
        {
            int len1 = height[i], len2 = height[j];
            int minlen = min(len1, len2);
            int b = j - i;
            maxarea = max(maxarea, b * minlen);
            if (len1 > len2)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return maxarea;
    }
};