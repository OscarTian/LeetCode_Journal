class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int signal=1;
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='I')
                ans+=1*(signal==1? 1:-1);
            else if(s[i]=='V')
            {
                signal=5;
                ans+=5;
            }
            else if(s[i]=='X')
            {
                signal=max(10,signal);
                ans+=10*(signal==10? 1:-1);
            }
            else if(s[i]=='L')
            {
                signal=50;
                ans+=50;
            }
            else if(s[i]=='C')
            {
                signal=max(100,signal);
                ans+=100*(signal==100? 1:-1);
            }
            else if(s[i]=='D')
            {
                signal=500;
                ans+=500;
            }
            else if(s[i]=='M')
            {
                signal=1000;
                ans+=1000;
            }
        }
        return ans;
    }
};
