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
