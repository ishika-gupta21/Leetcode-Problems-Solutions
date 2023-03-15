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
    bool isCompleteTree(TreeNode* root) 
    {
        queue<TreeNode*> q; 
        q.push(root);
        bool flagPar = false;
        while(!q.empty())
        {
            int size = q.size();
            bool flag = false;  
            while(size--)
            {
                auto f = q.front(); 
                q.pop(); 
                if(f->left == NULL && f->right == NULL) {
                    flag = true;
                    continue; 
                }
                else if(f->left == NULL || f->right == NULL)
                {
                    if(flag || flagPar) return false;
                    if(f->right) return false; 
                    q.push(f->left); 
                    flag = true; 
                }
                else {
                    if(flag || flagPar) return false;
                    q.push(f->left); 
                    q.push(f->right);
                }
            }
            flagPar = flag;
        }
        return true;
    }
};