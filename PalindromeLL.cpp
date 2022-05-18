class Solution
{
public:
    vector<int> ans1, ans2;

    bool isPalindrome(ListNode *head)
    {
        if (head == NULL)
        {
            return false;
        }
        ans1.push_back(head->val);
        isPalindrome(head->next);
        ans2.push_back(head->val);
        return ans1 == ans2 ? true : false;
    }
};