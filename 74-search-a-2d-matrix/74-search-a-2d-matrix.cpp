class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if (target> matrix[m-1][n-1]){
                return false;
        }
        for(int i=0;i<m;i++){
            if (target == matrix[i][n-1]){
                return true;
            }
            else if(target<matrix[i][n-1]){
                int low=0, high=n-1;
                while(low<=high){
                    int mid= low + (high -low)/2;
                    if(matrix[i][mid] ==target){
                        return true;
                        }
                    else if( matrix[i][mid]< target){
                        low = mid +1;
                    }
                    else if(matrix[i][mid]> target){
                        high = mid-1;
                        }
                }
                return false;
            }
            else{
                continue;
            }
    }
        return false;
    }
};