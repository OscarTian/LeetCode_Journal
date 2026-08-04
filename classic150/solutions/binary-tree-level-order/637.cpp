vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int sz = q.size();
            double sum = 0;
            for (int i = 0; i < sz; ++i) {
                TreeNode* node = q.front(); q.pop();
                sum += node->val;
                if (node->left)  q.push(node->left);
                if (node->right) q.push(node->right);
            }
            res.push_back(sum / sz);
        }
        return res;
