class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
         int m = matrix.size();
        int n= matrix[0].size();
       
        int newN= n;
        
        if(target > matrix [m-1][n-1]){
            return false;
        }
        if(target<matrix[0][0]){
            return false;
        }
        for(int i=0;i<n;i++){
            if(matrix[0][i]==target){
                return true;
            }
            else if(matrix[0][i]>target){
                newN= i;
                break;
            }
        }
        
        for(int i=0;i<newN;i++){
            if(target== matrix[m-1][i]){
                return true;
            }
            else if(target< matrix[m-1][i]){
                int lowR=0,highR=m-2;
                while(lowR<=highR){
                    int mid = lowR+(highR-lowR)/2;
                    if(matrix[mid][i]==target){
                        return true;
                    }
                    else if(matrix[mid][i]<target){
                        lowR= mid+1;
                    }
                    else if (matrix[mid][i]>target){
                        highR=mid-1;
                    }
                    else{
                        continue;
                    }
                }
            }
            else{
                continue;
            }
        }
        
        return false;
        
       
        
    }
};