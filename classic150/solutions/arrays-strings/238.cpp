class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,1);
        int left=1,right=1;
        for(int i=0;i<n;i++)
        {
            answer[i]*=left;
            answer[n-1-i]*=right;
            left*=nums[i];
            right*=nums[n-1-i];
        }
        return answer;
    }
};
