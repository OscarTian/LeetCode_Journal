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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((!p)!=(!q))
            return false;
        if((!p)&&(!q))
            return true;
        if(p->val!=q->val)
            return false;
        if((!p->left!=!q->left)||(!p->right!=!q->right))
            return false;
        bool ans=true;
        if(p->left)
            ans=ans&&isSameTree(p->left,q->left);
        if(p->right)
            ans=ans&&isSameTree(p->right,q->right);
        return ans;
    }
};
