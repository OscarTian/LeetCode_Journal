class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        int n=strs.size();
        for(int i=1;i<n;i++)
        {
            string s1;
            for(int j=0;j<s.size()&&j<strs[i].size();j++)
            {
                if(s[j]==strs[i][j])
                    s1+=s[j];
                else
                    break;
            }
            s=s1;
        }
        return s;
    }
};
