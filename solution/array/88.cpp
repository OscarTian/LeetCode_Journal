class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0)
        {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }

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
