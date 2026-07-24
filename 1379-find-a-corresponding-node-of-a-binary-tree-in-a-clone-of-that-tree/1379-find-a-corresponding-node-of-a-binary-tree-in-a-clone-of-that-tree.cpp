/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode*ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(target==NULL)
        return NULL;
        if(original==NULL || cloned==NULL)
        return NULL;
        if(original==target)
        {
        ans= cloned;
        return ans;
        }
        getTargetCopy(original->left,cloned->left,target);
        getTargetCopy(original->right,cloned->right,target);
        return ans;
    }
    
};