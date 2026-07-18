class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();
        int correct=0;
        for(int i=0;i<h;i++)
        {
            int j=0;
            for(;i+j<h&&j<n&&haystack[i+j]==needle[j];j++)
                correct++;
            if(correct==n)
                return i; 
            correct=0;
        }
        return -1;
    }
};

/* 最优解法
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle) != string::npos) return haystack.find(needle);
        return -1;
    }
};
*/

/* 算法最优解：KMP
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size(), n = needle.size();
        if (n == 0) return 0;
        vector<int> next(n, 0);
        for (int i = 1, j = 0; i < n; ++i) {
            while (j > 0 && needle[i] != needle[j]) j = next[j - 1];
            if (needle[i] == needle[j]) ++j;
            next[i] = j;
        }
        for (int i = 0, j = 0; i < h; ++i) {
            while (j > 0 && haystack[i] != needle[j]) j = next[j - 1];
            if (haystack[i] == needle[j]) ++j;
            if (j == n) return i - n + 1;
        }
        return -1;
    }
};
*/
