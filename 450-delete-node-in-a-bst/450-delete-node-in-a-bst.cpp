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
    TreeNode* find_inorder_succ(TreeNode* root)
    {
        if(root == NULL)
            return NULL;
        if(root -> left == NULL)
            return root;
        return find_inorder_succ(root -> left);
    }
    TreeNode* deleteNode(TreeNode* root, int key)
    {
        if(root == NULL)
            return NULL;
        if(root -> val > key)
            root -> left = deleteNode(root -> left, key);
        else if(root -> val < key)
            root -> right = deleteNode(root -> right, key);
        else
        {
            if(root -> left == NULL && root -> right == NULL)
            {
                delete root;
                return NULL;
            }
            else if(root -> left == NULL)
            {
                TreeNode* temp = root -> right;
                delete root;
                return temp;
            }
            
            else if(root -> right == NULL)
            {
                TreeNode* temp = root -> left;
                delete root;                
                return temp;
            }
            else
            {
                TreeNode* successor = find_inorder_succ(root -> right);
                root -> val = successor -> val;
                root -> right = deleteNode(root -> right, successor -> val);
            }
        }
        return root;
    }
};