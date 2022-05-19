class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            int l = 0, temp = -1;
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j] && l == 0)
                {
                    l = 1;
                }
                else if (l == 1 && nums1[i] < nums2[j])
                {
                    temp = nums2[j];
                    l = 2;
                }
                else
                {
                    continue;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};