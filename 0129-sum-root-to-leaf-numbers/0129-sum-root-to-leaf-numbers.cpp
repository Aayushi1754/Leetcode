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
int sum=0;
void dfs(TreeNode* root,int path)
{
    if(root==NULL)
    return;
    path=path*10+ root->val;
    if(root->left==NULL && root->right==NULL)
    sum=sum+path;
    dfs(root->left,path);
    dfs(root->right,path);

}
    int sumNumbers(TreeNode* root) {  
        if(root==NULL)
        return 0;
        dfs(root,0);
        return sum;

        
        
        
    }
};