class Solution {
public:
    int trailingZeroes(int n) {
        int n2=n;
        int c2=0;
        int n5=n;
        int c5=0;
        while(n2>0)
        {
            n2=n2/2;
            c2+=n2;
        }
        while(n5>0)
        {
            n5=n5/5;
            c5+=n5;
        }
        return c2<c5? c2:c5;
    }
};
