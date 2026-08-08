class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=m-1;
        while(left<right)
        {
            int mid=(left+right)/2;
            if(matrix[mid][n-1]==target)
                return true;
            if(matrix[mid+1][0]==target)
                return true;
            if(matrix[mid][n-1]<target&&matrix[mid+1][0]>target)
                return false;
            if(target<matrix[mid][n-1])
                right=mid;
            else
                left=mid+1;
        }
        int row=left;
        left=0;
        right=n-1;
        while(left<right)
        {
            int mid=(left+right)/2;
            if(target==matrix[row][mid])
                return true;
            if(target<matrix[row][mid])
                right=mid;
            if(target>matrix[row][mid])
                left=mid+1;
        }
        if(target==matrix[row][left])
            return true;
        return false;
    }
};
