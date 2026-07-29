class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length=nums.size()+1;
        int left=0;
        int right=0;
        int ttl=0;
        for(;right<nums.size();right++)
        {
            ttl+=nums[right];
            for(;ttl-nums[left]>=target;left++)
                ttl-=nums[left];
            if(ttl>=target)
                length=min(length,1-left+right);
        }
        if(length==nums.size()+1)
            return 0;
        return length;
    }
};
