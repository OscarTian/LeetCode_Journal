class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int p=0;
        int k=0;
        while(p<nums.size())
        {
            if(nums[p]==val)
            {
                p++;
            }
            else
            {
                nums[k]=nums[p];
                k++;
                p++;
            }
        }
        return k;
    }
};