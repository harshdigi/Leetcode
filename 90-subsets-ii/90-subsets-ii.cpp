class Solution {
public:
    void helper(vector<vector<int>>&v,vector<int>&nums,vector<int>&m,int idx){
        
      if(idx==nums.size()){
            v.push_back(m);
            return;
        }
        v.push_back(m);
        for(int i=idx;i<nums.size();i++){
            if(idx<i&&nums[i]==nums[i-1]){
             
                continue;}
            
        m.push_back(nums[i]);
        helper(v,nums,m,i+1);
        m.pop_back();
      
            }
      
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<vector<int>>v;
        sort(begin(nums),end(nums));
        vector<int>m;
        helper(v,nums,m,0);
    return v;
    }
   
};