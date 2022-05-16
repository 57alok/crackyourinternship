class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        ListNode *t = head;
        int count = 0;
        while (t)
        {
            ++count;
            t = t->next;
        }
        int sum = 0;
        count--;
        t = head;
        while (t)
        {
            sum += (t->val) * pow(2, count);
            t = t->next;
            count--;
        }
        return sum;
    }
};