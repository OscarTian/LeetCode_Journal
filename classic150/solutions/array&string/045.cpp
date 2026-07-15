class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> mini(n, n);
        mini[0]=0;
        for(int i=0;i<n;i++)
            for(int j=1;j<=nums[i]&&j<n-i;j++)
                mini[i+j]=min(mini[i+j],mini[i]+1);
        return mini[n-1];
    }
};

/* 最优解法

*/
