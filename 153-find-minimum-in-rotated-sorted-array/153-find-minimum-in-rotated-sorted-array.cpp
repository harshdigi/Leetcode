class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0){
            return nums[0];
        }
        int left=0, right = nums.size()-1;
        
        int mini = nums[0];
        while(left<=right){
            int mid = left +(right-left)/2;
            
            if(right == left+1){
                return min(min(nums[left],nums[right]), mini);
            }
            
            if(nums[mid]>mini){
                left =mid+1;
            }
            else{
                mini = nums[mid];
                right=mid-1;
            }
            
        }
        return mini;
    }
};