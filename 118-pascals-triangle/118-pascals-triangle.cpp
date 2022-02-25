class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
    vector<vector<int>> ans ;
    if (numRows==0) return ans;
    vector<int> fRow= {1};
        ans.push_back(fRow);
        for(int i=1;i<numRows;i++){
            vector<int> pRow= ans[i-1];
            vector<int> row ={1};
            for(int j=1;j<i;j++){
                
                row.push_back(pRow[j-1]+pRow[j]);
                
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
        
    }
};