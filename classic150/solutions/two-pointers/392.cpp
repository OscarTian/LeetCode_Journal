class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int ss=s.size();
        int ts=t.size();
        while (i < ss && j < ts) {
            if (s[i] == t[j]) i++;
            j++;
        }
        return i == ss;
    }
};

/* 进阶
class Solution {
    vector<vector<int>> pos; // 存储每个字符的出现位置
public:
    // 预处理，只调用一次
    void preprocess(string t) {
        pos.assign(26, {}); // 假设只有小写字母
        for (int i = 0; i < t.size(); ++i) {
            pos[t[i] - 'a'].push_back(i);
        }
    }
    bool isSubsequence(string s) {
        int cur = -1; // 当前在 t 中匹配到的最后位置
        for (char c : s) {
            const auto& vec = pos[c - 'a'];
            auto it = upper_bound(vec.begin(), vec.end(), cur);
            if (it == vec.end()) return false;
            cur = *it;
        }
        return true;
    }
};
*/
