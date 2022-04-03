class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
    
    // for transpose of matrix
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    //reversing every row from starting to end
   for(int i=0; i<n; i++){
    reverse(matrix[i].begin(), matrix[i].end());
   }
    }
};