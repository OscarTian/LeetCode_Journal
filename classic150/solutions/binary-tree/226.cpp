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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return root;
        if(!(!(root->left)||!(root->right)))
        {
            TreeNode* l=root->left;
            root->left=invertTree(root->right);
            root->right=invertTree(l);
            return root;
        }
        if(root->left)
        {
            root->right=invertTree(root->left);
            root->left=nullptr;
            return root;
        }
        if(root->right)
        {
            root->left=invertTree(root->right);
            root->right=nullptr;
            return root;
        }
        else
        return root;
    }
};
