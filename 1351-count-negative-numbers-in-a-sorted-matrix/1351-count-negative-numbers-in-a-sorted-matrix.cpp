class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row =grid.size();
        int col = grid[0].size();
        int count=0;
        if(grid[0][0]<=0){
            count = row*col;
            return count;
        }
        if(grid[row-1][col-1]>=0){
            return 0;
        }
        
        for(int i=0;i<row;i++){
            
            int left =0;
            int right = col-1;
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
            count +=( col-left);
        }
        return count;
    }
};