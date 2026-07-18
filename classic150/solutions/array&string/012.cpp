class Solution {
public:
    string intToRoman(int num) {
        string s;
        char c[4][2]={{'I','V'},{'X','L'},{'C','D'},{'M','o'}};
        for(int i=1,j=0;num/i>=1;i*=10,j++)
        {
            int digit=(num/i)%10;
            if(digit==9)
            {
                s.insert(0, 1, c[j+1][0]);
                s.insert(0, 1, c[j][0]);
            }
            else if(digit==4)
            {
                s.insert(0, 1, c[j][1]);
                s.insert(0, 1, c[j][0]);
            }
            else
            {
                for(int k=0;k<digit%5;k++)
                    s.insert(0, 1, c[j][0]);
                if(digit>=5)
                    s.insert(0, 1, c[j][1]);
            }
        }
        return s;
    }
};
