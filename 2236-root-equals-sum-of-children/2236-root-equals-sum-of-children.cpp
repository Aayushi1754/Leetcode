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
int node_value(TreeNode* root)
{
    return root->val;
}
    bool checkTree(TreeNode* root) {
        int left=node_value(root->left);
        int right=node_value(root->right);
        return (left+right==root->val);
        
        
    }
};