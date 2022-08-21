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
    void helper(TreeNode* root,string asf,vector<string>&res)
    {
        if(!root->left && !root->right)
        {
            res.push_back(asf);
            return ;
        }
        if(root->left) 
            helper(root->left,asf + "->" + to_string(root->left->val),res);
        if(root->right)
            helper(root->right,asf + "->" + to_string(root->right->val),res); 
    }
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string>res;
        helper(root,to_string(root->val),res);
        return res;
    }
};