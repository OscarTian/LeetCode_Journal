class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()==0)
            return 0;
        int ans=0;
        int left=0;
        int right=height.size()-1;
        while(left<right)
        {
            if(height[left]<=height[right])
            {
                ans=max(ans,(right-left)*height[left]);
                left++;
            }
            else
            {
                ans=max(ans,(right-left)*height[right]);
                right--;
            }
        }
        return ans;
    }
};
