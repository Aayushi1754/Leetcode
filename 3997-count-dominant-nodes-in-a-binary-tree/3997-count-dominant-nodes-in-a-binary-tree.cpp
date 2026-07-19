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
            int count=0;
    int dfs(TreeNode* root)
    {
        int currmax=INT_MIN;
        if(root==NULL)
            return INT_MIN;
        int leftmax=dfs(root->left);
        int rightmax=dfs(root->right);
         currmax=max(leftmax,max(rightmax,root->val));
        if(root->val==currmax)
            count ++;
        return currmax;
    }
    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return count;
        
    }
};