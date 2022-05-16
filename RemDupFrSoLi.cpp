class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
        {
            return head;
        }
        ListNode *t1 = head, *t2 = t1->next;
        while (t2 != NULL)
        {
            if (t1->val == t2->val)
            {
                t1->next = t2->next;
                ListNode *tem = t2;
                t2 = t1->next;
                delete tem;
                continue;
            }
            t1 = t1->next;
            t2 = t1->next;
        }
        return head;
    }
};