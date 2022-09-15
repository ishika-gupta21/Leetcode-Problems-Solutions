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
    set<int> s;
    void sec(TreeNode *r)
    {
        if(!r)
            return;
        s.insert(r->val);
        sec(r->left);
        sec(r->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        sec(root);
        if(s.size()==1)
            return -1;
        set<int>::iterator st = s.begin();
        advance(st,1);
        return *st;
    }
};