class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1, rows = matrix.size(), cols = matrix[0].size(); //  declration of variable col0,rows and cols
        // col0 is used to check whether any element in matrix column 1 is 0
        // rows is number of rows in matrix
        // cols is number of columns in matrix
        
        // traverse matrix form row 0 and j=1
        for(int i=0;i<rows;i++){
            // set col0 =0 if any of the element in column 1 is 0
            if(matrix[i][0]==0){
                col0=0;
            }
            //set matrix column and row zero  element to zero according to value of current element
            for(int j=1;j<cols;j++){
                // if current element is zero set its corresponding column and row zero set vlaue to zero, this will help us in checking whether cell  will be set to zero or not while we traverse matrix again
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                
                }
            }
        }
        
 
        // traverse the matrix again but this time start from backward
        for(int i = rows-1; i>=0;i--){
            
            for(int j=cols-1;j>=1;j--){
                // check for the corresponding column and row zero to the current cell, and set its value to zero accordinly.
                if(matrix[i][0] ==0 || matrix[0][j] ==0){
                    matrix [i][j] =0;
                }
            }
            // check col0 ==0, then set vlaue of elements in column =0 to 0
            if(col0==0){
                matrix[i][0]=0;
            }
        }
        
   
    }
};