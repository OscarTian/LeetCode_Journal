class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> ss=track(s);
        vector<int> tt=track(t);
        for(int i=0;i<ss.size();i++)
            if(ss[i]!=tt[i])
                return false;
        return true;
    }
    vector<int> track(string s)
    {
        int signal=1;
        vector<int> signe(128,0);
        vector<int> ss;
        for(int i=0;i<s.size();i++)
        {
            if(signe[s[i]]==0)
            {
                signe[s[i]]=signal;
                ss.push_back(signal);
                signal++;
            }
            else
                ss.push_back(signe[s[i]]);
        }
        return ss;
    }
};
