class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temp)
    {
        int n = temp.size();
        stack<int> st;
        vector<int> ans(n, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() and temp[i] >= temp[st.top()])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ans[i] = st.top() - i;
            }
            st.push(i);
        }
        return ans;
    }
};