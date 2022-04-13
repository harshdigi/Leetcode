class Solution {
public:
    int uniquePaths(int m, int n) {
        vector< vector<int> > numPaths(m, vector<int>(n, 0) );
        
        //fill bottom row
        for(int i = 0; i<n;i++)
        {
            numPaths[m-1][i] =1;
        }
        
        for(int r = m-2; r>=0; r--)
        {  
            numPaths[r][n-1] = 1;
            for(int c=n-2; c>=0;c--)
            {
                numPaths[r][c] = numPaths[r+1][c] + numPaths[r][c+1];
            }    
        }          
        
        return numPaths[0][0];
    }
};