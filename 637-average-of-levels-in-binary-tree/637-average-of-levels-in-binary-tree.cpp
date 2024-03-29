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
    vector<double> averageOfLevels(TreeNode* root)
    {
        vector<double> ans;
        queue<TreeNode*> help;
        help.push(root);
        while(help.size()>0)
        {
            int size = help.size();
            double sum =0;
            for(int i=0;i<size;i++)
            {
                TreeNode* p = help.front();
                help.pop();
                sum+=p->val*1.0;
                if(p->left!=NULL) 
                    help.push(p->left);
                if(p->right!=NULL)
                    help.push(p->right);
            }
            ans.push_back(sum/size);
        }
        return ans;
    }
};