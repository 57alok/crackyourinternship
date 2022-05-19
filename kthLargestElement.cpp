class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        priority_queue<int> q;
        int n = nums.size();
        for (auto i : nums)
        {
            q.push(i);
        }
        int k1 = 0, temp = 0;
        while (k1 < k - 1)
        {
            q.pop();
            k1++;
        }
        return q.top();
    }
};