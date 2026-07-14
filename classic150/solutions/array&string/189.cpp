class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k!=0)
        {
            int expand[k];
            for(int i=0;i<k;i++)
                expand[k-1-i]=nums[n-1-i];
            for(int i=0;i<n-k;i++)
                nums[n-1-i]=nums[n-k-1-i];
            for(int i=0;i<k;i++)
                nums[i]=expand[i];
        }
    }
};
