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

/* 最快解法
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) {
            return nums.size();
        }

        int slow = 2;

        for (int fast = 2; fast < nums.size(); fast++) {
            if (nums[fast] != nums[slow - 2]) {
                nums[slow] = nums[fast];
                slow++;
            }
        }

        return slow;
    }
};
*/
