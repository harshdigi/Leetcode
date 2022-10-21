class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if(nums.size() == 1 || nums.size() == 0){
            return nums;}
        vector<int> res;
        int sum =0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            res.push_back(sum);
        }
        return res;
    }
};