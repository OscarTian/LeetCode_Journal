class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        vector<int> alp(26,0);
        for(int i=0;i<s.size();i++)
        {
            alp[s[i]-'a']++;
            alp[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
            if(alp[i]!=0)
                return false;
        return true;
    }
};
