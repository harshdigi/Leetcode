class Solution {
public:
    vector<vector<int>> res;
    void backtrack(int n, int cS, int cK,  vector<int> in = {}, int i=1){
        if(cK ==0 ){
            if(cS == n){
            res.push_back(in);
            }
            return;
        }
        if(cS > n || i>9){
            return;
        }
        in.push_back(i);
        cS += i;
        backtrack(n,cS,cK-1,in, i+1);
        in.pop_back();
        backtrack(n,cS-i,cK,in, i+1);        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(n, 0, k);
        return res;
    }
};