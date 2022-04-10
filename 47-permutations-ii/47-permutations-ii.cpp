class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector <vector <int>>perm;
        vector <int >arr(nums.begin(),nums.end());
        sort(arr.begin(),arr.end());
        perm.push_back(arr);
        while(next_permutation(arr.begin(),arr.end())){
            perm.push_back(arr);
        }
        return perm;
    }
};