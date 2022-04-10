class Solution {
public:
    void helper(int idx,vector<int>&arr,int tar,vector<vector<int>>&v,vector<int>&cur){
         
            if(tar==0){
                v.push_back(cur);
                
            
            return;
        }
        
        for(int i=idx;i<arr.size();i++){
            if(idx<i&&arr[i]==arr[i-1]){
                continue;
            }
            if(arr[i]>tar)break;
            cur.push_back(arr[i]);
            helper(i+1,arr,tar-arr[i],v,cur);
            cur.pop_back();
            // helper(idx+1,arr,tar,v,cur);

        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(begin(candidates),end(candidates));
        vector<vector<int>>v;
        vector<int>m;
        helper(0,candidates,target,v,m);
        return v;
    }
};