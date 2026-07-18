class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        vector<int> left(len,0);
        left[0] = height[0];
        vector<int> right(len,0);
        right[len - 1] = height[len - 1];

        for(int i = 1; i < len; i++){
            if(height[i] > left[i - 1]) left[i] = height[i];
            else left[i] = left[i - 1];
        }
        for(int i = len - 2; i > 0; i--){
            if(height[i] > right[i + 1]) right[i] = height[i];
            else right[i] = right[i + 1];
        }

        int max = 0;
        for(int i = 1; i < len - 1; i++){
            max += min(left[i], right[i]) - height[i];
        }
        return max;
    }
};
