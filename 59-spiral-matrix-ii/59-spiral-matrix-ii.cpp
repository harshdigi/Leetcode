class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         
        int k=0;
        
        vector<vector<int>> ans(n,vector<int>(n,0));
        
        int top=0,right=n-1,down=n-1,left=0;
        
        k=1;
        
        int i=0;
        
        while(k<=n*n){
            
            i=left;
            while(i<=right){
                ans[top][i]=k;
                k++;
                i++;
            }
            top++;
            
            i=top;
            while(i<=down){
                ans[i][right]=k;
                k++;
                i++;
            }
            right--;
            
            i=right;
            while(i>=left){
                ans[down][i]=k;
                k++;
                i--;
            }
            down--;
            
            i=down;
            while(i>=top){
                ans[i][left]=k;
                k++;
                i--;
            }
            left++;
        }
        
        return ans;
    }
};