class Solution
{
public:
    int rec(TreeNode *root, int &d)
    {
        if (root == NULL)
        {
            return 0;
        }
        int ld = rec(root->left, d);
        int rd = rec(root->right, d);
        d = max(d, rd + ld);
        return max(ld, rd) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int d = 0;
        rec(root, d);
        return d;
    }
};