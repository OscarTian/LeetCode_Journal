class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        stringstream ss(path);
        string token;
        while (getline(ss, token, '/')) {
            if (token.empty() || token == ".") {
                continue;
            } else if (token == "..") {
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } else {
                stack.push_back(token);
            }
        }
        string result = "/";
        for (size_t i = 0; i < stack.size(); ++i) {
            if (i > 0) result += "/";
            result += stack[i];
        }
        return result;
    }
};
