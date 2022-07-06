class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefixSum; // Output array
        // if size of input array is 0 and 1 then there will be no difference between input array and  output array
        if(nums.size() == 1 || nums.size() == 0){
            return nums;
        }
       
        prefixSum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            prefixSum.push_back(prefixSum[i-1] + nums[i]);
        }
        return prefixSum;
    }
    
};