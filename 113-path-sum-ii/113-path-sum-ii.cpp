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
    void pathSumhelper(TreeNode* root, int sum, vector<int>& v, vector<vector<int>>& res){
        if(!root) 
            return;
        v.push_back(root->val);
        if(sum == root->val && !root->left && !root->right) 
            res.push_back(v);
        pathSumhelper(root->left, sum - root->val, v, res);
        pathSumhelper(root->right, sum - root->val, v, res);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum)
    {
        vector<vector<int>> res;
        vector<int> v;
        pathSumhelper(root, sum, v, res);
        return res;
    }
};