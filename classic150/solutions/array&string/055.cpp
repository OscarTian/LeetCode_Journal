class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]+i);
            if(maxi==i&&nums[i]==0&&i!=n-1)
                return 0;
        }
        if(maxi>=n-1)
            return 1;
        return 0;
    }
};

/* 最优解法
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = 0;
        for (int i = 0; mx < nums.size() - 1; i++) {
            if (i > mx) {
                return false;
            }
            mx = max(mx, i + nums[i]);
        }
        return true;
    }
};
*/
