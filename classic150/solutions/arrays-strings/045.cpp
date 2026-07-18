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
class Solution {
public:
    int jump(vector<int>& nums) {
        int maxPos = 0, n = nums.size(), end = 0, step = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (maxPos >= i) {
                maxPos = max(maxPos, i + nums[i]);
                if (i == end) {
                    end = maxPos;
                    ++step;
                }
            }
        }
        return step;
    }
};
*/
