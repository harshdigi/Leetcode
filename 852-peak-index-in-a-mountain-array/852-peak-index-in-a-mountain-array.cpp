class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int left  =0,right= nums.size()-1;
        while(left<=right){
            int mid= left +(right-left)/2;
            if(mid==0 || (nums[mid]>nums[mid-1] && nums[mid+1]<nums[mid])){
                return mid;
            }
            else if (nums[mid]<nums[mid-1]){
                right=mid;
                
            }
            else{
                left= mid+1;
            }
        }
        return left;
    }
};