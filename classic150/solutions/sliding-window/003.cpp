class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int ll=0;
        int temp=0;
        while(right<s.size())
        {
            int i=left;
            while(i<right)
            {
                if(s[i]==s[right])
                    break;
                i++;
            }
            if(i!=right)
            {
                left++;
                temp--;
            }
            else
            {
                right++;
                temp++;
                ll=max(ll,temp);
            }
        }
        return ll;
    }
};

/* 最优解法
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int left = 0, maxLen = 0;
        for (int right = 0; right < s.size(); ++right) {
            char c = s[right];
            if (dict[c] >= left) {
                left = dict[c] + 1;
            }
            dict[c] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
*/
