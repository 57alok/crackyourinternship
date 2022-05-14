class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.length(), m = needle.length();
        int count = 0, i = 0, j = 0, k = -1;
        if (m > n)
        {
            return -1;
        }
        while (i < n)
        {
            if (haystack[i] == needle[0])
            {
                int l = i;
                while (l < n and haystack[l] == needle[j])
                {
                    l++;
                    j++;
                    count++;
                }

                if (count == m)
                {
                    k = i;
                    break;
                }
                j = 0;
                count = 0;
            }
            i++;
        }
        return k;
    }
};