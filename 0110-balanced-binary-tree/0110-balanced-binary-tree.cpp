/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int height(TreeNode* root)
{
    if(root==NULL)
    return 0;
    int l=height(root->left);
    int r=height(root->right);
    return 1+max(l,r);
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return true;
        int l=height(root->left);
        bool leftbalance=isBalanced(root->left);
        if(leftbalance==false)
        return false;
        int r=height(root->right);
        bool rightbalance=isBalanced(root->right);
        if(rightbalance==false)
        return false;

        if(abs(l-r)<=1)
        return true;
        else
        return false;
        
    }
};