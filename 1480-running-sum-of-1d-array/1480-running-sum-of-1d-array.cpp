class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefixSum;
        if(nums.size() == 1 || nums.size() == 0){
            return nums;
        }
        int sum=nums[0];
        prefixSum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            sum = sum+nums[i];
            prefixSum.push_back(sum);
        }
        return prefixSum;
    }
    
};