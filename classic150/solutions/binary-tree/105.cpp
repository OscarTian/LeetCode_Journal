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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> pos;
        for (int i = 0; i < inorder.size(); ++i) {
            pos[inorder[i]] = i;
        }
        return build(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1 ,pos);
    }
    TreeNode* build(vector<int>& pre, vector<int>& in, 
                    int preL, int preR, int inL, int inR,
                    unordered_map<int, int>& pos) {
        if (preL > preR || inL > inR) return nullptr;
        int rootVal = pre[preL];
        TreeNode* root = new TreeNode(rootVal);
        int rootIdx = pos[rootVal];
        int leftCnt = rootIdx - inL;
        root->left = build(pre, in, preL + 1, preL + leftCnt, inL, rootIdx - 1, pos);
        root->right = build(pre, in, preL + leftCnt + 1, preR, rootIdx + 1, inR, pos);
        return root;
    }
};
