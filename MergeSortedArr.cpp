class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (n == 0)
        {
            return;
        }
        for (int i = 0, j = 0, k = 0; i < (m + n); i++)
        {
            if (i >= m)
            {
                nums1[i] = nums2[k++];
                continue;
            }
            if (nums1[j] <= nums2[k])
            {
                nums1[i] = nums1[j];
                j++;
                cout << " if ";
            }
            else if (nums2[k] < nums1[j])
            {
                int temp = nums1[i];
                nums1[i] = nums2[k];
                nums2[k] = temp;
                sort(nums2.begin(), nums2.end());
                j++;
                cout << " else ";
            }
        }
    }
};