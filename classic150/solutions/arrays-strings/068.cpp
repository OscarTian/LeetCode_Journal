class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int n = words.size();
        int left = 0;
        while (left < n) {
            int right = left;
            int totalChars = words[right].size();
            while (right + 1 < n && totalChars + 1 + words[right + 1].size() <= maxWidth) {
                right++;
                totalChars += 1 + words[right].size();
            }
            int wordLenSum = 0;
            for (int i = left; i <= right; ++i) wordLenSum += words[i].size();
            int totalSpaces = maxWidth - wordLenSum;
            string line;
            if (left == right || right == n - 1) {
                for (int i = left; i <= right; ++i) {
                    line += words[i];
                    if (i != right) line += ' ';
                }
                line += string(maxWidth - line.size(), ' ');
            } else {
                int slots = right - left;
                int base = totalSpaces / slots;
                int extra = totalSpaces % slots;
                for (int i = left; i < right; ++i) {
                    line += words[i];
                    int spaceCnt = base + (i - left < extra ? 1 : 0);
                    line += string(spaceCnt, ' ');
                }
                line += words[right];
            }
            result.push_back(line);
            left = right + 1;
        }
        return result;
    }
};
