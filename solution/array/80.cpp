class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=1;
        int k=1;
        while(k<nums.size())
        {
            if(nums[k]==nums[k-1])
            {
                nums[p]=nums[k];
                p++;
                k++;
                while(k<nums.size()&&nums[k]==nums[k-1])
                    k++;
            }
            else
            {
                nums[p]=nums[k];
                p++;
                k++;
            }
        }
        return p;
    }
};
