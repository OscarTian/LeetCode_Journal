class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=1;
        int k=0;
        while(p<nums.size())
        {
            if(nums[k]==nums[p])
            {
                p++;
            }
            else
            {
                k++;
                nums[k]=nums[p];
                p++;
            }
        }
        return k+1;
    }
};