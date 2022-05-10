class Solution {
 vector<vector<int>> res;
public:
    void getComb(int k, int n, vector<int> curr, int sum){
        if(k==0){
            if(sum == n)
                res.push_back(curr);
        } else {
            for(int i=curr[curr.size()-1]+1;i<=9-k+1;i++){
                if(sum+i <= n){
                    curr.push_back(i);
                    getComb(k-1, n, curr, sum+i);
                    curr.pop_back();
                }
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        if(n >= (k*(k+1))/2){
            for(int i=1;i<=9-k+1;i++){
                vector<int> curr={i};
                int sum = i;
                if(sum<=n)
                    getComb(k-1, n, curr, sum);
            }
        }
        return res;
    }
};