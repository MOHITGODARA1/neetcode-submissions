class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int n=0;
        while(col>n){
            if(matrix[0][n]<=target && matrix[row-1][n]>=target){
                int right=row-1;
                int left=0;
                while(left<=right){
                    int mid=left+(right-left)/2;
                    if(matrix[mid][n]==target){
                        return true;
                    }
                    if(matrix[mid][n]>target){
                        right=mid-1;
                    }else{
                        left=mid+1;
                    }
                }
                
            }
            n++;
        }
        return false;
    }
};
