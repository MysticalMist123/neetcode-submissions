class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_s = 0, row_e = matrix.size()-1;

        while(row_s<=row_e){
            int mid = (row_s+row_e)/2;
            if(matrix[mid][0]>target){
                row_e = mid - 1;
            }
            else if(matrix[mid][0]<target){
                row_s = mid + 1;
            }
            else{
                return true;
            }
        }
        int row = (row_e+row_s)/2;

        int col_s = 0, col_e = matrix[0].size()-1;
        while(col_s<=col_e){
            int mid = (col_s+col_e)/2;
            if(matrix[row][mid]>target){
                col_e = mid - 1;
            }
            else if(matrix[row][mid]<target){
                col_s = mid + 1;
            }
            else{
                return true;
            }
        }

        return false;
    }
};
