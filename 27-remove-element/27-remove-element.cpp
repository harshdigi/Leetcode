class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int left=0 ;//front index
        int n = nums.size(); //size of nums
        int right = n-1; // last index
        
        //if array size is equal to 0 or array size is qual to val and the nums[0] is equal to zero return zero
        if(n==0 || (n==1 && nums[0] == val)){
            return 0;
        }
        // use to pointer approach to send repeated occurence of at last index
        while(left<=right){
            // if current right element is equal to val then decrease the right by 1
            if(nums[right] == val){
                right--;
            }
            // if current left element is equal to val then  swap it with current right element to send that element at last, and increase left by one and decrease right by one
            else if (nums[left] == val){
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
            // if none of the above condition staisfies then simply increase left , becuase current left element is not given val
            else{
                left++;
            }
        }
        // return left becuase it stores the number of elements after removing all occurence of val
        return left;
    }
    
};