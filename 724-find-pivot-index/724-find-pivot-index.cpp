class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum; // array to store prefix sum to find the sum of left and right side elements in the array 
        // if size of input array is 1 we can simply return index 0 as pivot
        if(nums.size() ==  1){
            return 0;
        }
        // prefix sum  array calculation start 
        int sum  = nums[0]; // this will store the sum of elements
        prefixSum.push_back(sum);
        for(int i=1;i<nums.size();i++){
            sum += nums[i];
            prefixSum.push_back(sum);
        }
        // prefix sum end
        
        // finding pivot index start
        
        for(int i=0;i<nums.size();i++){
            int left = prefixSum[i] - nums[i]; // this will calculate the sum of elements on the left side of the current element
            int right = sum - prefixSum[i]; // this will calculate the sum of elements on the right side of the current element
            // checking the given condition for the index to be pivot index
            if(left == right){
                return i; // return current index 'i'  
            }
        }
        return -1; // if no such pivotIndex is found we return -1
        
    }
};