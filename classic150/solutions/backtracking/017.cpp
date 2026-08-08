class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> alpha={
            {' '},{' '},
            {'a','b','c'},{'d','e','f'},
            {'g','h','i'},{'j','k','l'},{'m','n','o'},
            {'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}
        };
        vector<string> res;
        string cur;
        backtrack(digits, 0, alpha, cur, res);
        return res;
    }
    void backtrack(const string& digits, int idx,
                   const vector<vector<char>>& alpha,
                   string& cur, vector<string>& res) {
        if (idx == digits.size()) {
            res.push_back(cur);
            return;
        }
        int digit = digits[idx] - '0';
        for (char c : alpha[digit]) {
            cur.push_back(c);
            backtrack(digits, idx + 1, alpha, cur, res);
            cur.pop_back();
        }
    }
};
