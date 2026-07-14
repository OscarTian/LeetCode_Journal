class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,n=prices.size();
        for(int i=1;i<n;i++)
            ans+=max(0,prices[i]-prices[i-1]);
        return ans;
    }
};

/* 最优解法
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0,last = prices[0];
        for(auto x: prices) ans += max(0, x - last), last=x;
        return ans;
    }
};
*/
