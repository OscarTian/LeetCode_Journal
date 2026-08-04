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
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX;
        dfs(root, ans);
        return ans;
    }
    pair<int, int> dfs(TreeNode* node, int& ans) {
        if (!node) return {INT_MAX, INT_MIN};
        auto left = dfs(node->left, ans);
        auto right = dfs(node->right, ans);
        int minVal = node->val, maxVal = node->val;
        if (left.second != INT_MIN) {
            ans = min(ans, node->val - left.second);
            minVal = left.first;
        }
        if (right.first != INT_MAX) {
            ans = min(ans, right.first - node->val);
            maxVal = right.second;
        }
        return {minVal, maxVal};
    }
};

/* 最优解法
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX, prev = -1;
        inorder(root, prev, ans);
        return ans;
    }
    void inorder(TreeNode* node, int& prev, int& ans) {
        if (!node) return;
        inorder(node->left, prev, ans);
        if (prev != -1) ans = min(ans, node->val - prev);
        prev = node->val;
        inorder(node->right, prev, ans);
    }
};
*/
