class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int left=0,n = nums.size();
        int right = n-1;
        
        if(n==0 || (n==1 && nums[0] == val)){
            return 0;
        }
        
        while(left<=right){
            if(nums[right] == val){
                right--;
            }
            else if (nums[left] == val){
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
            else{
                left++;
            }
        }
    
        return left;
    }
    
};