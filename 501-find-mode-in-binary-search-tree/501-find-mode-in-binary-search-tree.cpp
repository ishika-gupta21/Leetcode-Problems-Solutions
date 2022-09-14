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
    unordered_map<int,int> m;
    int mx=INT_MIN;
    void helper(TreeNode* root)
    {
        if(root==NULL)
            return;
        m[root->val]++;
        mx=max(m[root->val],mx);
        helper(root->left);
        helper(root->right);
            
    }
    vector<int> findMode(TreeNode* root) 
    {
        helper(root);
        vector<int> ans;
        for(auto it: m)
        {
            if(it.second==mx)
                ans.push_back(it.first);
        }
        return ans;
    }
};