class Solution {
public:
   
    int findPeakElement(vector<int>& nums) {
        int left =0, right= nums.size()-1;
        // checking first and last elements
        if(right ==0){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[right]>nums[right-1]){
            return right;
        }
        left++;
        right--;
        while(left<right){
int mid = left+(right-left)/2;

        if(nums[mid]<nums[mid+1]){
            left=mid+1;
        }
        else{
            right = mid;
        }
    }
    return left;

    }
};