class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ans;
        map<int, int> mp;
        priority_queue<pair<int, int>> pq;
        for (auto i : nums)
        {
            mp[i]++;
        }
        for (auto &pair : mp)
            pq.emplace(pair.second, pair.first);
        while (k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};