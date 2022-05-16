class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        if (head->next == NULL)
        {
            return head;
        }
        ListNode *t = head, *t2 = head;
        int c = 0;
        while (t != NULL)
        {
            if (t->next == NULL)
            {
                t2 = t2->next;
                return t2;
                break;
            }
            ++c;
            if (c > 1 and c % 2 != 0)
            {
                t2 = t2->next;
            }
            t = t->next;
        }
        return t2;
    }
};