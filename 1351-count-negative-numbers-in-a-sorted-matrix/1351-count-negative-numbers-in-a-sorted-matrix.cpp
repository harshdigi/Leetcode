class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row =grid.size()-1;
        int col = grid[0].size()-1;
        
        if(grid[0][0]<=0){
            return (row+1)*(col+1);
        }
        if(grid[row][col]>=0){
            return 0;
        }
        int count=0;
        
        for(int i=0;i<=row;i++){
            
            int left =0;
            int right = col;
            if(grid[i][right]>=0){
                continue;
            }
            while(left<=right){
                int mid= left + (right-left)/2;
                
                if( grid[i][mid]>=0){
                    left =mid+1;
                }
                else{
                    right =mid-1;
                }
            }
            count +=( (col+1)-left);
        }
        return count;
    }
};