class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        if(n==1)
            return triangle[0][0];
        vector<vector<int>> dp(n);
        dp[0].push_back(triangle[0][0]);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                    dp[i].push_back(dp[i-1][0]+triangle[i][0]);
                else if(j==i)
                    dp[i].push_back(dp[i-1][i-1]+triangle[i][i]);
                else
                    dp[i].push_back(min(dp[i-1][j-1],dp[i-1][j])+triangle[i][j]);
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
            mini=min(mini,dp[n-1][i]);
        return mini;
    }
};
