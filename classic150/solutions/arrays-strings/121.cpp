class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int low=prices[0];
        for(int i=1;i<n;i++)
        {
            ans=max(ans,prices[i]-low);
            low=min(low,prices[i]);
        }
        return ans;
    }
};
