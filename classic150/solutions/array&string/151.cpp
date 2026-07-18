class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++)
        {
            if(s[n-1-i]==' ')
                continue;
            else
            {
                string s1;
                for(int j=0;i<n;j++,i++)
                {
                    s1.insert(0, 1, s[n-1-i]);
                    if(i==n-1||s[n-2-i]==' ')
                        break;
                }
                ans+=s1;
                ans+=' ';
            }
        }
        ans.erase(ans.size()-1);
        return ans;
    }
};
