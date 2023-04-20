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
    int widthOfBinaryTree(TreeNode* root) 
    {
        if(root == NULL) return 0; 
        queue<pair<TreeNode*,long long> > q; 
        int depth = 0; 
        long long ans = 1; 
        q.push({root,0});
        while(!q.empty()) {
            int size = q.size(); 
            long long mx = INT_MIN , mn = INT_MAX; 
            long long k = q.front().second; 
            while(size--) {
                auto f = q.front(); 
                q.pop(); 
                mx = max(mx, f.second-k); 
                mn = min(mn, f.second-k); 

                if(f.first->left) q.push({f.first->left, (f.second-k)*2+1}); 
                if(f.first->right) q.push({f.first->right, (f.second-k)*2+2}); 
            }
            ans = max(ans, mx-mn+1);
            depth++; 
        }
        return ans;
    }
};