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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if (!root) return res;
        stack<pair<TreeNode*, int>> stk;
        TreeNode* cur = root;
        int depth = 0;
        while (cur || !stk.empty()) {
            while (cur) {
                if (depth == res.size()) {
                    res.push_back(cur->val);
                }
                stk.push({cur, depth});
                cur = cur->right;
                depth++;
            }
            auto [node, d] = stk.top(); stk.pop();
            cur = node->left;
            depth = d + 1;
        }
        return res;
    }
};
