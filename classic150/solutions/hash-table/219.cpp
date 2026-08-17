class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> pos;
        for(int i=0;i<nums.size();i++)
        {
            if(pos.find(nums[i])!=pos.end())
                if(i-pos[nums[i]]<=k)
                    return true;
            pos[nums[i]]=i;
        }
        return false;
    }
};

/* 最优解法
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++) {
            vp[i] = {nums[i], i};
        }
        sort(vp.begin(), vp.end());
        for (int i = 0; i < n - 1; i++) {
            if (vp[i].first == vp[i + 1].first && vp[i + 1].second - vp[i].second <= k) {
                return true;
            }
        }
        return false;
    }
};
*/
