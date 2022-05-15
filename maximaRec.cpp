class Solution
{
public:
    int larges(vector<int> &heights)
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

    int maximalRectangle(vector<vector<char>> &M)
    {
        int x = M.size(), y = M[0].size();
        int ma = 0;
        vector<int> his(y, 0);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (M[i][j] == '1')
                    his[j] += 1;
                else
                    his[j] = 0;
            }
            ma = max(ma, larges(his));
        }
        return ma;
    }
};