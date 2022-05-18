class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *top = NULL;
        while (head != NULL)
        {
            ListNode *t;
            t = new ListNode;
            if (top == NULL)
            {
                t->val = head->val;
                top = t;
                t->next = NULL;
            }
            else
            {
                t->val = head->val;
                t->next = top;
                top = t;
            }
            head = head->next;
        }
        return top;
    }
};