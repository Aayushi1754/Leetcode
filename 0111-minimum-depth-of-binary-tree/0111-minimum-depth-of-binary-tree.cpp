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
        leftheight=minDepth(root->left);
        if(root->right)
        rightheight=minDepth(root->right);
        return 1+min(leftheight,rightheight);
        
    }
};