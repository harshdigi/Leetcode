class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0, maxi = INT_MIN;
        // sum will store current sum  and maxi will score maximum subarray sum
        
        // iterate the array
        for(int i =0;i<nums.size();i++){
            // add current element to the sum
            sum += nums[i];
            // if new sum is greater than maxi then update maxi
            maxi = max(sum, maxi);
            // if sum gets less than 0 than consider fresh subarray from next element and               make sum back to 0
            if(sum <0){
                sum =0;
            }
        }
        return maxi;
    }
};