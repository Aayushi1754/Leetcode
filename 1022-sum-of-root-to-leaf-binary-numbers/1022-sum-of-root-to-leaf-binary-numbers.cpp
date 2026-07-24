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
int num_to_bin(vector<int> num)
{
    int ans = 0;

    for(int i = 0; i < num.size(); i++)
    {
        ans = ans * 2 + num[i];
    }

    return ans;
}
void dfs(TreeNode*root, vector<int>&res, vector<vector<int>> &path)
{
    if(root==NULL)
    return;
    res.push_back(root->val);
    if(root->left==NULL && root->right==NULL)
    path.push_back(res);
    dfs(root->left,res,path);
    dfs(root->right,res,path);
    res.pop_back();
}
vector<vector<int>> all_paths(TreeNode*root)
{
    vector<vector<int>> path;
    vector<int>ans;
    dfs(root,ans,path);
    return path;
}
    int sumRootToLeaf(TreeNode* root) {
        if(root==NULL)
        return 0;
        int sum=0;
        vector<vector<int>> paths=all_paths(root);
        for(auto x:paths)
        {
            sum+=num_to_bin(x);
        }
        return sum;

        
    }
};