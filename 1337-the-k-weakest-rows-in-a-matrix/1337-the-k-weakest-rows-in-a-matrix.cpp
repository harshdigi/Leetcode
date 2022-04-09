class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
       vector<pair<int,int>> sol;
        int m = mat.size();
        
        for(int i =0 ; i < m; i++){
            int start = 0, n = mat[i].size(), end = n-1, mid = 0, sold = n;
            while(start <= end){
                mid = start + (end - start) / 2;
                if(mat[i][mid] == 0 && (mid == 0 || mat[i][mid-1] == 1)){
                    sold = mid;
                    break;
                }
                else if(mat[i][mid] == 1) start = mid +1;
                else end = mid-1;
            }
            sol.push_back({i,sold});
        }
        
        sort(sol.begin(),sol.end(),[](pair<int,int>& a,pair<int,int>& b){
            if(a.second == b.second) return a.first < b.first;
            return a.second < b.second;
        });
        
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(sol[i].first);
        }
        
        return ans;
    }
};