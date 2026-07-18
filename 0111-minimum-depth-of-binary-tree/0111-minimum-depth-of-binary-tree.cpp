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
    int minDepth(TreeNode* root) {
        int leftheight=INT_MAX,rightheight=INT_MAX;
        if(root==NULL)
        return 0;
        if(root->left==NULL && root->right==NULL)
        return 1;
        if(root->left)
         leftheight=1+minDepth(root->left);
        if(root->right)
         rightheight=1+minDepth(root->right);
        return min(leftheight,rightheight);
        
    }
};