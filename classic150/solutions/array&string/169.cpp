class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-1;)
        {
            int count=1;
            i++;
            while(i<n&&nums[i]==nums[i-1])
            {
                i++;
                count++;
            }
            if(count>n/2)
                return nums[i-1];
        }
        return nums[n-1];
    }
};

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 1, ans = nums[0];
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != ans) {
                vote--;
                if(vote == 0) {
                    ans = nums[i];
                    vote = 1;
                }
            } else {
                vote++;
            }
        }
        return ans;
    }
};
*/
