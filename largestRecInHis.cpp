class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> st;
        int n = heights.size();
        if (n == 1)
        {
            return heights[0];
        }
        int left[n], right[n], area = 0, mxa = 0;
        left[0] = 0;
        right[n - 1] = n - 1;
        st.push(0);
        for (int i = 1; i < n; i++)
        {
            while (!st.empty() and heights[st.top()] >= heights[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                left[i] = st.top() + 1;
            }
            else
            {
                left[i] = 0;
            }
            st.push(i);
        }
        while (!st.empty())
        {
            st.pop();
        }
        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--)
        {

            while (!st.empty() and heights[st.top()] >= heights[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                right[i] = st.top() - 1;
            }
            else
            {
                right[i] = n - 1;
            }
            st.push(i);
        }
        for (int i = 0; i < n; i++)
        {
            area = (right[i] - left[i] + 1) * heights[i];
            mxa = max(area, mxa);
        }
        return mxa;
    }
};