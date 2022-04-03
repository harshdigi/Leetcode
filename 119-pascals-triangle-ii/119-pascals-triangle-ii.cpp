class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans (rowIndex +1 );
        if(rowIndex==0 || rowIndex==1){
        ans[0]=1;
        ans[rowIndex] =1;
        return ans;
        }
        
        int val=1;
        for(int i=0;i<=rowIndex;i++){
            ans[i]=val;
            val=(int)((long)val*(rowIndex-i)/(i+1));
        }
        
        return ans;
    }
};