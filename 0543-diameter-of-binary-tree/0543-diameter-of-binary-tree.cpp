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
int result=INT_MIN;
int height(TreeNode* root)
{
    if(root==NULL)
        return 0;
        int lefttree=height(root->left);
        int righttree=height(root->right);
        result=max(result,lefttree+righttree);
        return max(lefttree,righttree)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        int h=height(root);
        return result;
        
    }
};