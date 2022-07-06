class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum;
        if(nums.size() ==  1){
            return 0;
        }
        int sum  = nums[0];
        prefixSum.push_back(sum);
        for(int i=1;i<nums.size();i++){
            sum += nums[i];
            prefixSum.push_back(sum);
        }
        
        for(int i=0;i<nums.size();i++){
            int left = prefixSum[i] - nums[i];
            int right = sum - prefixSum[i];
            if(left == right){
                return i;
            }
        }
        return -1;
        
    }
};