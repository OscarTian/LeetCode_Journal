class Solution {
public:
    int mySqrt(int x) {
        long long ans=0;
        while(ans*ans<=x)
        {
            ans++;
        }
        if(ans*ans==x)
            return ans;
        return ans-1;
    }
};

/* 最优解法
class Solution {
public:
    int mySqrt(int x) {
        long a = x;
        while (a * a > x) {
            a = (a + x / a) / 2;
        }
        return a;
    }
};
*/
