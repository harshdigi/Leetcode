class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefixSum; // Output array
        // if size of input array is 0 and 1 then there will be no difference between input array and  output array
        if(nums.size() == 1 || nums.size() == 0)
            return nums;
        
        // setting first elemet equals to sum
        int sum=nums[0];
        // inserting the sum in output array
        prefixSum.push_back(sum);
        // inserting running sum in output array
        for(int i=1;i<nums.size();i++){
            // new sum will the add of current sum + current element in nums array
            sum = sum+nums[i];
            prefixSum.push_back(sum);
        }
        return prefixSum;
    }
    
};