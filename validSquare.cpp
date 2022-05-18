class Solution
{
public:
    double find(vector<int> &p1, vector<int> &p2)
    {
        int x1 = p1[0], x2 = p2[0], y1 = p1[1], y2 = p2[1];
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
    }
    bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
    {
        if (p1 == p2 or p2 == p3 or p3 == p4 or p4 == p1 or p1 == p3 or p2 == p4)
        {
            return false;
        }
        map<double, int> mp;
        double l1 = mp[find(p1, p2)]++, l2 = mp[find(p2, p3)]++, l3 = mp[find(p3, p4)]++, l4 = mp[find(p4, p1)]++, l5 = mp[find(p1, p3)]++, l6 = mp[find(p2, p4)]++;
        if (mp.size() > 2)
        {
            return false;
        }

        return true;
    }
};